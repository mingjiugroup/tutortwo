<?php

/**
 * @file
 * Enables modules and site configuration for a standard site installation.
 * Provides a default API for Apps and modules to use. This will simplify the
 * user experience.
 */

define('OPIGNO_LMS_COURSE_STUDENT_ROLE', 'course student member');
define('OPIGNO_LMS_COURSE_COACH_ROLE',   'course coach member');
define('OPIGNO_LMS_COURSE_TEACHER_ROLE', 'course teacher member');
define('OPIGNO_LMS_COURSE_ADMIN_ROLE',   'course admin member');

/**
 * Implements hook_form_FORM_ID_alter() for install_configure_form().
 *
 * Allows the profile to alter the site configuration form.
 */
function opigno_lms_form_install_configure_form_alter(&$form, $form_state) {
  // Hide some messages from various modules that are just too chatty.
  drupal_get_messages('status');
  drupal_get_messages('warning');

  drupal_set_message(st("Please note that Opigno ships with the !dompdf library for generating certificates in PDF format. This works fine, but we strongly recommend to use !wkhtml instead, if you can. !wkhtml is much more powerful, and will allow you to make nicer certificates. However, !wkhtml requires manual installation, and your server might not be compatible. Please refer to these <a href='!url' target='_blank'>instructions</a> for more information, or visit our support forums.", array('!dompdf' => '<a href="https://github.com/dompdf/dompdf" target="_blank">DomPDF</a>', '!wkhtml' => '<a href="https://code.google.com/p/wkhtmltopdf/" target="_blank">WKHTML</a>', '!url' => 'https://drupal.org/node/306882')), 'warning');

  // Pre-populate the site name with the server name.
  $form['site_information']['site_name']['#default_value'] = st('Opigno LMS');

  // Use "admin" as the default username.
  $form['admin_account']['account']['name']['#default_value'] = 'admin';

  // Hide Update Notifications.
  $form['update_notifications']['#access'] = FALSE;

  // Define a default email address if we can guess a valid one
  if (valid_email_address('admin@' . $_SERVER['HTTP_HOST'])) {
    $form['site_information']['site_mail']['#default_value'] = 'admin@' . $_SERVER['HTTP_HOST'];
    $form['admin_account']['account']['mail']['#default_value'] = 'admin@' . $_SERVER['HTTP_HOST'];
  }

  // Opigno LMS options
  $form['opigno_lms'] = array(
    '#type' => 'fieldset',
    '#title' => st("LMS settings"),
    '#tree' => TRUE,
  );
  $form['opigno_lms']['simple_ui'] = array(
    '#type' => 'checkbox',
    '#title' => st("Enable the Opigno Simple UI"),
    '#description' => st("The default interfaces provided by Drupal can sometimes be difficult to use. Opigno Simple UI enhances many aspects of the user interface. It makes it more intuitive and much easier to use. If you are a seasoned Drupal user, you can ignore this. If you're not familiar with some of Drupal's specificities, or a new user, you are encouraged to use this as it will make your life easier. It will not prevent you from using functionality or hinder you. And you can always disable it later."),
    '#default_value' => 1,
  );
  /* @todo
  $form['opigno_lms']['demo_content'] = array(
    '#type' => 'checkbox',
    '#title' => st("Enable demo content"),
    '#description' => st("You can enable demo content on your platform to get you started. This will create several user accounts, courses, certificates and quizzes to get you started."),
    '#default_value' => 0,
  );
  */
  $form['#submit'][] = 'opigno_lms_form_install_configure_form_alter_submit';
}

/** 
 * Submit callback for opigno_lms_form_install_configure_form_alter().
 */
function opigno_lms_form_install_configure_form_alter_submit($form, $form_state) {
  if (!empty($form_state['values']['opigno_lms']['simple_ui'])) {
    module_enable(array('opigno_simple_ui'));
  }
  if (!empty($form_state['values']['opigno_lms']['demo_content'])) {
    // @todo
  }
}

/**
 * Implements hook_update_status_alter().
 *
 * Disable reporting of projects that are in the distribution, but only
 * if they have not been updated manually.
 *
 * Projects with insecure / revoked / unsupported releases are only shown
 * after two days, which gives enough time to prepare a new LMS release
 * which the users can install and solve the problem.
 */
function opigno_lms_update_status_alter(&$projects) {
  $bad_statuses = array(
    UPDATE_NOT_SECURE,
    UPDATE_REVOKED,
    UPDATE_NOT_SUPPORTED,
  );

  $make_filepath = drupal_get_path('profile', 'opigno_lms') . '/drupal-org.make';
  if (!file_exists($make_filepath)) {
    return;
  }

  $make_info = drupal_parse_info_file($make_filepath);
  foreach ($projects as $project_name => $project_info) {
    // Never unset the drupal project to avoid hitting an error with
    // _update_requirement_check(). See http://drupal.org/node/1875386.
    if ($project_name == 'drupal' || !isset($project_info['releases']) || !isset($project_info['recommended'])) {
      continue;
    }
    // Hide Opigno LMS projects, they have no update status of their own.
    if (strpos($project_name, 'opigno_features_') !== FALSE) {
      unset($projects[$project_name]);
    }
    // Hide bad releases (insecure, revoked, unsupported) if they are younger
    // than two days (giving Kickstart time to prepare an update).
    elseif (isset($project_info['status']) && in_array($project_info['status'], $bad_statuses)) {
      $two_days_ago = strtotime('2 days ago');
      if ($project_info['releases'][$project_info['recommended']]['date'] < $two_days_ago) {
        unset($projects[$project_name]);
      }
    }
    // Hide projects shipped with Kickstart if they haven't been manually
    // updated.
    elseif (isset($make_info['projects'][$project_name])) {
      $version = $make_info['projects'][$project_name]['version'];
      if (strpos($version, 'dev') !== FALSE || (DRUPAL_CORE_COMPATIBILITY . '-' . $version == $project_info['info']['version'])) {
        unset($projects[$project_name]);
      }
    }
  }
}

/**
 * Implements hook_form_FORM_ID_alter().
 *
 * Disable the update for Opigno LMS.
 */
function opigno_lms_form_update_manager_update_form_alter(&$form, &$form_state, $form_id) {
  if (isset($form['projects']['#options']) && isset($form['projects']['#options']['opigno_lms'])) {
    if (count($form['projects']['#options']) > 1) {
      unset($form['projects']['#options']['opigno_lms']);
    }
    else {
      unset($form['projects']);
      // Hide Download button if there's no other (disabled) projects to update.
      if (!isset($form['disabled_projects'])) {
        $form['actions']['#access'] = FALSE;
      }
      $form['message']['#markup'] = t('All of your projects are up to date.');
    }
  }
}

/**
 * @defgroup opigno_lms_api Opigno LMS API
 * @{
 * Opigno LMS provides an API that modules can use when inside the Opigno distribution context. These functions are meant
 * to simplify the life of end users by allowing modules to set sensible defaults when installed. This is especially useful
 * for apps and permissions. Many less-technical users will expect apps/modules to work out of the box. They will not expect
 * to have to dig through long permission lists to check boxes for specific roles.
 *
 * When a new app/module is coded, developers should think about the different permissions and to which kind of users they
 * would -- in most cases -- apply. Opigno ships with default OG roles, which are available as constants. Modules that provide
 * other group bundles are encouraged to expose similar constants so that the same API can be used for similar purposes.
 *
 * The available role constants Opigno LMS provides apply to the course bundle:
 *  - OPIGNO_LMS_COURSE_STUDENT_ROLE
 *  - OPIGNO_LMS_COURSE_TEACHER_ROLE
 *  - OPIGNO_LMS_COURSE_COACH_ROLE
 *  - OPIGNO_LMS_COURSE_ADMIN_ROLE
 */

/**
 * Get the default OG role ids.
 *
 * @param  string $key
 *
 * @return int
 */
function opigno_lms_get_role_id($key) {
  $roles = &drupal_static(__FUNCTION__);

  if (empty($roles)) {
    $roles = variable_get('opigno_lms_default_og_roles', array());
  }

  return !empty($roles[$key]) ? $roles[$key] : 0;
}

/**
 * Set OG permissions for a specific bundle and specific roles.
 * This function is globally available and modules and apps should use it to set default permissions, simplifying module
 * installation and site management.
 *
 * @param  string $bundle
 * @param  array $permissions
 *               An array of permissions, keyed by group role ID. Modules that define group types are encouraged to
 *               expose constants for their default group roles so other modules can use this function for the same purpose.
 */
function opigno_lms_set_og_permissions($bundle, $permissions) {
  foreach ($permissions as $role => $role_permissions) {
    
  }
}

/**
 * @} End of "defgroup opigno_lms_api".
 */
