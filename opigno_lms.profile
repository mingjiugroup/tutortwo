<?php
/**
 * @file
 * Enables modules and site configuration for a standard site installation.
 * Provides a default API for Apps and modules to use. This will simplify the
 * user experience.
 */

/**
 * Implements hook_install_tasks()
 */
function opigno_lms_install_tasks(&$install_state) {
  $tasks = array();

  // Add the Opigno app selection to the installation process
  require_once(drupal_get_path('module', 'apps') . '/apps.profile.inc');
  $tasks = $tasks + apps_profile_install_tasks($install_state, array('machine name' => 'opigno', 'default apps' => array('opigno_quiz_app', 'opigno_wt_app')));

  return $tasks;
}

/**
 * Implements hook_form_FORM_ID_alter() for install_configure_form().
 *
 * Allows the profile to alter the site configuration form.
 */
function opigno_lms_form_install_configure_form_alter(&$form, $form_state) {
  // Hide some messages from various modules that are just too chatty.
  drupal_get_messages('status');
  drupal_get_messages('warning');

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
    '#description' => st("The default interfaces provided by Drupal can sometimes be difficult to use. Opigno Simple UI enhances many aspects of the user interface. It makes it more intuitive and much easier to use. If you are a seasoned Drupal user, you may want to disable this. If you're not familiar with some of Drupal's specificities, or a new user, you are encouraged to use this as it will make your life easier. It will not prevent you from using functionality or hinder you. And you can always disable it later."),
    '#default_value' => 1,
  );
  $form['opigno_lms']['demo_content'] = array(
    '#type' => 'checkbox',
    '#title' => st("Enable demo content"),
    '#description' => st("You can enable demo content on your platform to get you started. This will create several user accounts, courses, certificates and quizzes to get you started."),
    '#default_value' => 0,
  );
  $form['#submit'][] = 'opigno_lms_form_install_configure_form_alter_submit';
}

/** 
 * Submit callback for opigno_lms_form_install_configure_form_alter().
 */
function opigno_lms_form_install_configure_form_alter_submit($form, $form_state) {
  dpm($form_state);
  if (!empty($form_state['opigno_lms']['simple_ui'])) {
    module_enable(array('opigno_simple_ui'));
  }
  if (!empty($form_state['opigno_lms']['demo_content'])) {
    // @todo
  }
}

/**
 * Implements hook_form_FORM_ID_alter()
 */
function opigno_lms_form_apps_profile_apps_select_form_alter(&$form, $form_state) {
  // For some things there are no need
  $form['apps_message']['#access'] = FALSE;
  $form['apps_fieldset']['apps']['#title'] = NULL;

  // Improve style of apps selection form
  if (isset($form['apps_fieldset'])) {
    $manifest = apps_manifest(apps_servers('opigno'));
    foreach ($manifest['apps'] as $name => $app) {
      if ($name != '#theme') {
        $form['apps_fieldset']['apps']['#options'][$name] = '<strong>' . $app['name'] . '</strong><p><div class="admin-options"><div class="form-item">' . theme('image', array('path' => $app['logo']['path'], 'height' => '32', 'width' => '32')) . '</div>' . $app['description'] . '</div></p>';
      }
    }
  }

  // Remove the demo content selection option since this is handled through the Panopoly demo module.
  $form['default_content_fieldset']['#access'] = FALSE;
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

  $make_filepath = drupal_get_path('module', 'opigno_lms') . '/drupal-org.make';
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
 * Set permissions for a specific bundle and specific roles.
 * This function is globally available and modules and apps should use it to set default permissions,
 * simplifying module installation and site management.
 *
 * @param  string $bundle
 * @param  array $permissions
 */
function opigno_lms_set_og_permissions($bundle, $permissions) {
  foreach ($permissions as $role => $role_permissions) {

  }
}
