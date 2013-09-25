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

  // Exported OG Role: 'node:course:coach'.
  $roles['node:course:coach'] = array(
    'gid' => 0,
    'group_type' => 'node',
    'group_bundle' => 'course',
    'name' => 'coach',
  );

  // Exported OG Role: 'node:course:course forum administrator'.
  $roles['node:course:course forum administrator'] = array(
    'gid' => 0,
    'group_type' => 'node',
    'group_bundle' => 'course',
    'name' => 'course forum administrator',
  );

  // Exported OG Role: 'node:course:course manager'.
  $roles['node:course:course manager'] = array(
    'gid' => 0,
    'group_type' => 'node',
    'group_bundle' => 'course',
    'name' => 'course manager',
  );

  // Exported OG Role: 'node:course:course teacher'.
  $roles['node:course:course teacher'] = array(
    'gid' => 0,
    'group_type' => 'node',
    'group_bundle' => 'course',
    'name' => 'course teacher',
  );

  // Exported OG Role: 'node:course:student'.
  $roles['node:course:student'] = array(
    'gid' => 0,
    'group_type' => 'node',
    'group_bundle' => 'course',
    'name' => 'student',
  );

  return $roles;
}
