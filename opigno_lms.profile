<?php

/**
 * @file
 * Enables modules and site configuration for a opigno_lms site installation.
 */

use Drupal\Core\Form\FormStateInterface;
use Drupal\Core\Link;
use Drupal\Core\Render\Markup;

/**
 * Implements hook_preprocess_template().
 */
function opigno_lms_preprocess_install_page(&$variables) {
  $variables['site_version'] = '2.0';
}

/**
 * Implements hook_form_FORM_ID_alter() for install_configure_form().
 *
 * Allows the profile to alter the site configuration form.
 */
function opigno_lms_form_install_configure_form_alter(&$form, FormStateInterface $form_state) {
  $messenger = \Drupal::messenger();

  // Check if Tincan PHP library is installed.
  $has_library = opigno_tincan_api_tincanphp_is_installed();
  if (!$has_library) {
    $messenger->addWarning(Markup::create("Please install the TinCanPHP library using Composer, with the command: <em>composer require rusticisoftware/tincan:@stable</em>"));
    return;
  }
  else {
    // Check if the LRS settings are set.
    $config = \Drupal::config('opigno_tincan_api.settings');
    $endpoint = $config->get('opigno_tincan_api_endpoint');
    $username = $config->get('opigno_tincan_api_username');
    $password = $config->get('opigno_tincan_api_password');

    if (empty($endpoint) || empty($username) || empty($password)) {
      $messenger->addWarning(t(
        'Please configure the LRS connection in the @setting_page.',
        ['@setting_page' => Link::createFromRoute('settings page', 'opigno_tincan_api.settings_form')->toString()]
      ));
      return;
    }
  }

}
