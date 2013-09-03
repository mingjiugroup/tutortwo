<?php
/**
 * @file
 * opigno_features_og_roles.features.og_features_permission.inc
 */

/**
 * Implements hook_og_features_default_permissions().
 */
function opigno_features_og_roles_og_features_default_permissions() {
  $permissions = array();

  // Exported og permission: 'node:course:access quiz'
  $permissions['node:course:access quiz'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:course:create long_answer content'
  $permissions['node:course:create long_answer content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'teacher member' => 'teacher member',
    ),
  );

  // Exported og permission: 'node:course:create matching content'
  $permissions['node:course:create matching content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'teacher member' => 'teacher member',
    ),
  );

  // Exported og permission: 'node:course:create multichoice content'
  $permissions['node:course:create multichoice content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'teacher member' => 'teacher member',
    ),
  );

  // Exported og permission: 'node:course:create quiz content'
  $permissions['node:course:create quiz content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'teacher member' => 'teacher member',
    ),
  );

  // Exported og permission: 'node:course:create quiz_ddlines content'
  $permissions['node:course:create quiz_ddlines content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'teacher member' => 'teacher member',
    ),
  );

  // Exported og permission: 'node:course:create quiz_directions content'
  $permissions['node:course:create quiz_directions content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'teacher member' => 'teacher member',
    ),
  );

  // Exported og permission: 'node:course:create scale content'
  $permissions['node:course:create scale content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'teacher member' => 'teacher member',
    ),
  );

  // Exported og permission: 'node:course:create short_answer content'
  $permissions['node:course:create short_answer content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'teacher member' => 'teacher member',
    ),
  );

  // Exported og permission: 'node:course:create truefalse content'
  $permissions['node:course:create truefalse content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'teacher member' => 'teacher member',
    ),
  );

  // Exported og permission: 'node:course:delete any long_answer content'
  $permissions['node:course:delete any long_answer content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:course:delete any matching content'
  $permissions['node:course:delete any matching content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:course:delete any multichoice content'
  $permissions['node:course:delete any multichoice content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:course:delete any quiz content'
  $permissions['node:course:delete any quiz content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:course:delete any quiz results'
  $permissions['node:course:delete any quiz results'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:course:delete any quiz_ddlines content'
  $permissions['node:course:delete any quiz_ddlines content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:course:delete any quiz_directions content'
  $permissions['node:course:delete any quiz_directions content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:course:delete any scale content'
  $permissions['node:course:delete any scale content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:course:delete any short_answer content'
  $permissions['node:course:delete any short_answer content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:course:delete any truefalse content'
  $permissions['node:course:delete any truefalse content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:course:delete own long_answer content'
  $permissions['node:course:delete own long_answer content'] = array(
    'roles' => array(
      'teacher member' => 'teacher member',
    ),
  );

  // Exported og permission: 'node:course:delete own matching content'
  $permissions['node:course:delete own matching content'] = array(
    'roles' => array(
      'teacher member' => 'teacher member',
    ),
  );

  // Exported og permission: 'node:course:delete own multichoice content'
  $permissions['node:course:delete own multichoice content'] = array(
    'roles' => array(
      'teacher member' => 'teacher member',
    ),
  );

  // Exported og permission: 'node:course:delete own quiz content'
  $permissions['node:course:delete own quiz content'] = array(
    'roles' => array(
      'teacher member' => 'teacher member',
    ),
  );

  // Exported og permission: 'node:course:delete own quiz_ddlines content'
  $permissions['node:course:delete own quiz_ddlines content'] = array(
    'roles' => array(
      'teacher member' => 'teacher member',
    ),
  );

  // Exported og permission: 'node:course:delete own quiz_directions content'
  $permissions['node:course:delete own quiz_directions content'] = array(
    'roles' => array(
      'teacher member' => 'teacher member',
    ),
  );

  // Exported og permission: 'node:course:delete own scale content'
  $permissions['node:course:delete own scale content'] = array(
    'roles' => array(
      'teacher member' => 'teacher member',
    ),
  );

  // Exported og permission: 'node:course:delete own short_answer content'
  $permissions['node:course:delete own short_answer content'] = array(
    'roles' => array(
      'teacher member' => 'teacher member',
    ),
  );

  // Exported og permission: 'node:course:delete own truefalse content'
  $permissions['node:course:delete own truefalse content'] = array(
    'roles' => array(
      'teacher member' => 'teacher member',
    ),
  );

  // Exported og permission: 'node:course:delete results for own quiz'
  $permissions['node:course:delete results for own quiz'] = array(
    'roles' => array(
      'teacher member' => 'teacher member',
    ),
  );

  // Exported og permission: 'node:course:score any quiz'
  $permissions['node:course:score any quiz'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:course:score own quiz'
  $permissions['node:course:score own quiz'] = array(
    'roles' => array(
      'teacher member' => 'teacher member',
    ),
  );

  // Exported og permission: 'node:course:score taken quiz answer'
  $permissions['node:course:score taken quiz answer'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'teacher member' => 'teacher member',
    ),
  );

  // Exported og permission: 'node:course:update any long_answer content'
  $permissions['node:course:update any long_answer content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:course:update any matching content'
  $permissions['node:course:update any matching content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:course:update any multichoice content'
  $permissions['node:course:update any multichoice content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:course:update any quiz content'
  $permissions['node:course:update any quiz content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:course:update any quiz_ddlines content'
  $permissions['node:course:update any quiz_ddlines content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:course:update any quiz_directions content'
  $permissions['node:course:update any quiz_directions content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:course:update any scale content'
  $permissions['node:course:update any scale content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:course:update any short_answer content'
  $permissions['node:course:update any short_answer content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:course:update any truefalse content'
  $permissions['node:course:update any truefalse content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:course:update own long_answer content'
  $permissions['node:course:update own long_answer content'] = array(
    'roles' => array(
      'teacher member' => 'teacher member',
    ),
  );

  // Exported og permission: 'node:course:update own matching content'
  $permissions['node:course:update own matching content'] = array(
    'roles' => array(
      'teacher member' => 'teacher member',
    ),
  );

  // Exported og permission: 'node:course:update own multichoice content'
  $permissions['node:course:update own multichoice content'] = array(
    'roles' => array(
      'teacher member' => 'teacher member',
    ),
  );

  // Exported og permission: 'node:course:update own quiz content'
  $permissions['node:course:update own quiz content'] = array(
    'roles' => array(
      'teacher member' => 'teacher member',
    ),
  );

  // Exported og permission: 'node:course:update own quiz_ddlines content'
  $permissions['node:course:update own quiz_ddlines content'] = array(
    'roles' => array(
      'teacher member' => 'teacher member',
    ),
  );

  // Exported og permission: 'node:course:update own quiz_directions content'
  $permissions['node:course:update own quiz_directions content'] = array(
    'roles' => array(
      'teacher member' => 'teacher member',
    ),
  );

  // Exported og permission: 'node:course:update own scale content'
  $permissions['node:course:update own scale content'] = array(
    'roles' => array(
      'teacher member' => 'teacher member',
    ),
  );

  // Exported og permission: 'node:course:update own short_answer content'
  $permissions['node:course:update own short_answer content'] = array(
    'roles' => array(
      'teacher member' => 'teacher member',
    ),
  );

  // Exported og permission: 'node:course:update own truefalse content'
  $permissions['node:course:update own truefalse content'] = array(
    'roles' => array(
      'teacher member' => 'teacher member',
    ),
  );

  // Exported og permission: 'node:course:view any quiz results'
  $permissions['node:course:view any quiz results'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:course:view own quiz results'
  $permissions['node:course:view own quiz results'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:course:view results for own quiz'
  $permissions['node:course:view results for own quiz'] = array(
    'roles' => array(
      'teacher member' => 'teacher member',
    ),
  );

  return $permissions;
}
