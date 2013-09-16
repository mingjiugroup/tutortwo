<?php
/**
 * @file
 * opigno_features_homebox.features.inc
 */

/**
 * Implements hook_homebox().
 */
function opigno_features_homebox_homebox() {
  $homeboxes = array();

  $homeboxes['dashboard'] = array (
    'regions' => 3,
    'cache' => 0,
    'color' => 0,
    'colors' => 
    array (
      0 => '#E4F0F8',
      1 => '#E4F0F8',
      2 => '#E4F0F8',
      3 => '#E4F0F8',
      4 => '#E4F0F8',
      5 => '#E4F0F8',
    ),
    'blocks' => 
    array (
      'views_notification_view-block_1' => 
      array (
        'module' => 'views',
        'delta' => 'notification_view-block_1',
        'region' => 3,
        'movable' => 1,
        'status' => 1,
        'open' => 1,
        'closable' => 1,
        'title' => '',
        'weight' => -23,
      ),
      'user_online' => 
      array (
        'module' => 'user',
        'delta' => 'online',
        'region' => 3,
        'movable' => 1,
        'status' => 1,
        'open' => 1,
        'closable' => 1,
        'title' => '',
        'weight' => -22,
      ),
      'views_calendar_dashboard-block_1' => 
      array (
        'module' => 'views',
        'delta' => 'calendar_dashboard-block_1',
        'region' => 1,
        'movable' => 1,
        'status' => 1,
        'open' => 1,
        'closable' => 1,
        'title' => '',
        'weight' => -22,
      ),
      'views_dashboard_new_content-block' => 
      array (
        'module' => 'views',
        'delta' => 'dashboard_new_content-block',
        'region' => 2,
        'movable' => 1,
        'status' => 1,
        'open' => 1,
        'closable' => 1,
        'title' => '',
        'weight' => -22,
      ),
      'user_new' => 
      array (
        'module' => 'user',
        'delta' => 'new',
        'region' => 3,
        'movable' => 1,
        'status' => 1,
        'open' => 1,
        'closable' => 1,
        'title' => '',
        'weight' => -21,
      ),
      'views_calendar_dashboard-block_2' => 
      array (
        'module' => 'views',
        'delta' => 'calendar_dashboard-block_2',
        'region' => 1,
        'movable' => 1,
        'status' => 1,
        'open' => 1,
        'closable' => 1,
        'title' => '',
        'weight' => -21,
      ),
    ),
    'widths' => 
    array (
    ),
    'title' => 'Dashboard',
    'path' => 'dashboard',
    'menu' => 1,
    'enabled' => 1,
    'auto_save' => 1,
    'full' => 0,
    'roles' => 
    array (
      0 => 'administrateur',
      1 => 'authenticated user',
      2 => 'enseignant',
      3 => 'étudiant',
    ),
  );


  return $homeboxes;
}
