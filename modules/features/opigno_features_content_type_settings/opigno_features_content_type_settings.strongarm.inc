<?php
/**
 * @file
 * opigno_features_content_type_settings.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function opigno_features_content_type_settings_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_quiz';
  $strongarm->value = array();
  $export['menu_options_quiz'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_quiz';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_quiz'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_certificate';
  $strongarm->value = array(
    0 => 'revision',
  );
  $export['node_options_certificate'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_forum';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_forum'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_long_answer';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_long_answer'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_matching';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_matching'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_multichoice';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_multichoice'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_quiz';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_quiz'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_scale';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_scale'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_short_answer';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_short_answer'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_truefalse';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_truefalse'] = $strongarm;

  return $export;
}
