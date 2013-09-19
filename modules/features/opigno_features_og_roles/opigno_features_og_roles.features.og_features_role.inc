<?php
/**
 * @file
 * opigno_features_og_roles.features.og_features_role.inc
 */

/**
 * Implements hook_og_features_default_roles().
 */
function opigno_features_og_roles_og_features_default_roles() {
  $roles = array();

  // Exported OG Role: 'node:course:coach member'.
  $roles['node:course:coach member'] = array(
    'gid' => 0,
    'group_type' => 'node',
    'group_bundle' => 'course',
    'name' => 'coach member',
  );

  // Exported OG Role: 'node:course:teacher member'.
  $roles['node:course:teacher member'] = array(
    'gid' => 0,
    'group_type' => 'node',
    'group_bundle' => 'course',
    'name' => 'teacher member',
  );

  return $roles;
}
