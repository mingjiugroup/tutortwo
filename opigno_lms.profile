<?php
/**
 * @file
 * Enables modules and site configuration for a standard site installation.
 */

/**
 * Implements hook_form_FORM_ID_alter() for install_configure_form().
 *
 * Allows the profile to alter the site configuration form.
 */
function opigno_lms_form_install_configure_form_alter(&$form, $form_state) {
  // Pre-populate the site name with the server name.
  $form['site_information']['site_name']['#default_value'] = $_SERVER['SERVER_NAME'];
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