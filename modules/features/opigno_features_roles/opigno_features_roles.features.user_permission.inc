<?php
/**
 * @file
 * opigno_features_roles.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function opigno_features_roles_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'Edit global presets'.
  $permissions['Edit global presets'] = array(
    'name' => 'Edit global presets',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'scale',
  );

  // Exported permission: 'access PDF version'.
  $permissions['access PDF version'] = array(
    'name' => 'access PDF version',
    'roles' => array(),
    'module' => 'print_pdf',
  );

  // Exported permission: 'access administration menu'.
  $permissions['access administration menu'] = array(
    'name' => 'access administration menu',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'admin_menu',
  );

  // Exported permission: 'access administration pages'.
  $permissions['access administration pages'] = array(
    'name' => 'access administration pages',
    'roles' => array(
      'administrator' => 'administrator',
      'student manager' => 'student manager',
    ),
    'module' => 'system',
  );

  // Exported permission: 'access all certificates'.
  $permissions['access all certificates'] = array(
    'name' => 'access all certificates',
    'roles' => array(
      'administrator' => 'administrator',
      'student manager' => 'student manager',
    ),
    'module' => 'certificate',
  );

  // Exported permission: 'access all views'.
  $permissions['access all views'] = array(
    'name' => 'access all views',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'views',
  );

  // Exported permission: 'access class results'.
  $permissions['access class results'] = array(
    'name' => 'access class results',
    'roles' => array(
      'administrator' => 'administrator',
      'student manager' => 'student manager',
    ),
    'module' => 'opigno_class_app',
  );

  // Exported permission: 'access comments'.
  $permissions['access comments'] = array(
    'name' => 'access comments',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'access content'.
  $permissions['access content'] = array(
    'name' => 'access content',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'access content overview'.
  $permissions['access content overview'] = array(
    'name' => 'access content overview',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'access contextual links'.
  $permissions['access contextual links'] = array(
    'name' => 'access contextual links',
    'roles' => array(
      'administrator' => 'administrator',
      'forum administrator' => 'forum administrator',
      'student manager' => 'student manager',
    ),
    'module' => 'contextual',
  );

  // Exported permission: 'access devel information'.
  $permissions['access devel information'] = array(
    'name' => 'access devel information',
    'roles' => array(),
    'module' => 'devel',
  );

  // Exported permission: 'access opigno administration pages'.
  $permissions['access opigno administration pages'] = array(
    'name' => 'access opigno administration pages',
    'roles' => array(
      'administrator' => 'administrator',
      'student manager' => 'student manager',
    ),
    'module' => 'opigno',
  );

  // Exported permission: 'access print'.
  $permissions['access print'] = array(
    'name' => 'access print',
    'roles' => array(),
    'module' => 'print',
  );

  // Exported permission: 'access quiz'.
  $permissions['access quiz'] = array(
    'name' => 'access quiz',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'quiz',
  );

  // Exported permission: 'access rules debug'.
  $permissions['access rules debug'] = array(
    'name' => 'access rules debug',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'rules',
  );

  // Exported permission: 'access site in maintenance mode'.
  $permissions['access site in maintenance mode'] = array(
    'name' => 'access site in maintenance mode',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'access site reports'.
  $permissions['access site reports'] = array(
    'name' => 'access site reports',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'access student results'.
  $permissions['access student results'] = array(
    'name' => 'access student results',
    'roles' => array(
      'administrator' => 'administrator',
      'student manager' => 'student manager',
    ),
    'module' => 'opigno_quiz_app',
  );

  // Exported permission: 'access teacher results'.
  $permissions['access teacher results'] = array(
    'name' => 'access teacher results',
    'roles' => array(
      'administrator' => 'administrator',
      'student manager' => 'student manager',
    ),
    'module' => 'opigno_quiz_app',
  );

  // Exported permission: 'access user profiles'.
  $permissions['access user profiles'] = array(
    'name' => 'access user profiles',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'user',
  );

  // Exported permission: 'add media from remote sources'.
  $permissions['add media from remote sources'] = array(
    'name' => 'add media from remote sources',
    'roles' => array(),
    'module' => 'media_internet',
  );

  // Exported permission: 'administer actions'.
  $permissions['administer actions'] = array(
    'name' => 'administer actions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer advanced forum'.
  $permissions['administer advanced forum'] = array(
    'name' => 'administer advanced forum',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'advanced_forum',
  );

  // Exported permission: 'administer advanced pane settings'.
  $permissions['administer advanced pane settings'] = array(
    'name' => 'administer advanced pane settings',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'administer apps'.
  $permissions['administer apps'] = array(
    'name' => 'administer apps',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'apps',
  );

  // Exported permission: 'administer blocks'.
  $permissions['administer blocks'] = array(
    'name' => 'administer blocks',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'block',
  );

  // Exported permission: 'administer certificates'.
  $permissions['administer certificates'] = array(
    'name' => 'administer certificates',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'certificate',
  );

  // Exported permission: 'administer comments'.
  $permissions['administer comments'] = array(
    'name' => 'administer comments',
    'roles' => array(
      'administrator' => 'administrator',
      'forum administrator' => 'forum administrator',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'administer content types'.
  $permissions['administer content types'] = array(
    'name' => 'administer content types',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'administer crumbs'.
  $permissions['administer crumbs'] = array(
    'name' => 'administer crumbs',
    'roles' => array(),
    'module' => 'crumbs',
  );

  // Exported permission: 'administer default config'.
  $permissions['administer default config'] = array(
    'name' => 'administer default config',
    'roles' => array(),
    'module' => 'defaultconfig',
  );

  // Exported permission: 'administer facets'.
  $permissions['administer facets'] = array(
    'name' => 'administer facets',
    'roles' => array(),
    'module' => 'facetapi',
  );

  // Exported permission: 'administer features'.
  $permissions['administer features'] = array(
    'name' => 'administer features',
    'roles' => array(),
    'module' => 'features',
  );

  // Exported permission: 'administer fieldable panels panes'.
  $permissions['administer fieldable panels panes'] = array(
    'name' => 'administer fieldable panels panes',
    'roles' => array(),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: 'administer fieldgroups'.
  $permissions['administer fieldgroups'] = array(
    'name' => 'administer fieldgroups',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_group',
  );

  // Exported permission: 'administer file types'.
  $permissions['administer file types'] = array(
    'name' => 'administer file types',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'administer files'.
  $permissions['administer files'] = array(
    'name' => 'administer files',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'administer filters'.
  $permissions['administer filters'] = array(
    'name' => 'administer filters',
    'roles' => array(),
    'module' => 'filter',
  );

  // Exported permission: 'administer forums'.
  $permissions['administer forums'] = array(
    'name' => 'administer forums',
    'roles' => array(
      'administrator' => 'administrator',
      'forum administrator' => 'forum administrator',
    ),
    'module' => 'forum',
  );

  // Exported permission: 'administer group'.
  $permissions['administer group'] = array(
    'name' => 'administer group',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'og',
  );

  // Exported permission: 'administer homebox'.
  $permissions['administer homebox'] = array(
    'name' => 'administer homebox',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'homebox',
  );

  // Exported permission: 'administer image styles'.
  $permissions['administer image styles'] = array(
    'name' => 'administer image styles',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'image',
  );

  // Exported permission: 'administer languages'.
  $permissions['administer languages'] = array(
    'name' => 'administer languages',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'locale',
  );

  // Exported permission: 'administer media browser'.
  $permissions['administer media browser'] = array(
    'name' => 'administer media browser',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'media',
  );

  // Exported permission: 'administer menu'.
  $permissions['administer menu'] = array(
    'name' => 'administer menu',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'menu',
  );

  // Exported permission: 'administer module filter'.
  $permissions['administer module filter'] = array(
    'name' => 'administer module filter',
    'roles' => array(),
    'module' => 'module_filter',
  );

  // Exported permission: 'administer modules'.
  $permissions['administer modules'] = array(
    'name' => 'administer modules',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer nodes'.
  $permissions['administer nodes'] = array(
    'name' => 'administer nodes',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'administer page manager'.
  $permissions['administer page manager'] = array(
    'name' => 'administer page manager',
    'roles' => array(),
    'module' => 'page_manager',
  );

  // Exported permission: 'administer pane access'.
  $permissions['administer pane access'] = array(
    'name' => 'administer pane access',
    'roles' => array(),
    'module' => 'panels',
  );

  // Exported permission: 'administer panelizer'.
  $permissions['administer panelizer'] = array(
    'name' => 'administer panelizer',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer fieldable_panels_pane basic_file defaults'.
  $permissions['administer panelizer fieldable_panels_pane basic_file defaults'] = array(
    'name' => 'administer panelizer fieldable_panels_pane basic_file defaults',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer fieldable_panels_pane fieldable_panels_pane defaults'.
  $permissions['administer panelizer fieldable_panels_pane fieldable_panels_pane defaults'] = array(
    'name' => 'administer panelizer fieldable_panels_pane fieldable_panels_pane defaults',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer fieldable_panels_pane image defaults'.
  $permissions['administer panelizer fieldable_panels_pane image defaults'] = array(
    'name' => 'administer panelizer fieldable_panels_pane image defaults',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer fieldable_panels_pane map defaults'.
  $permissions['administer panelizer fieldable_panels_pane map defaults'] = array(
    'name' => 'administer panelizer fieldable_panels_pane map defaults',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer fieldable_panels_pane quick_links defaults'.
  $permissions['administer panelizer fieldable_panels_pane quick_links defaults'] = array(
    'name' => 'administer panelizer fieldable_panels_pane quick_links defaults',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer fieldable_panels_pane spotlight defaults'.
  $permissions['administer panelizer fieldable_panels_pane spotlight defaults'] = array(
    'name' => 'administer panelizer fieldable_panels_pane spotlight defaults',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer fieldable_panels_pane table defaults'.
  $permissions['administer panelizer fieldable_panels_pane table defaults'] = array(
    'name' => 'administer panelizer fieldable_panels_pane table defaults',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer fieldable_panels_pane text defaults'.
  $permissions['administer panelizer fieldable_panels_pane text defaults'] = array(
    'name' => 'administer panelizer fieldable_panels_pane text defaults',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer fieldable_panels_pane video defaults'.
  $permissions['administer panelizer fieldable_panels_pane video defaults'] = array(
    'name' => 'administer panelizer fieldable_panels_pane video defaults',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node calendar_event defaults'.
  $permissions['administer panelizer node calendar_event defaults'] = array(
    'name' => 'administer panelizer node calendar_event defaults',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node course breadcrumbs'.
  $permissions['administer panelizer node course breadcrumbs'] = array(
    'name' => 'administer panelizer node course breadcrumbs',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node course content'.
  $permissions['administer panelizer node course content'] = array(
    'name' => 'administer panelizer node course content',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node course context'.
  $permissions['administer panelizer node course context'] = array(
    'name' => 'administer panelizer node course context',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node course defaults'.
  $permissions['administer panelizer node course defaults'] = array(
    'name' => 'administer panelizer node course defaults',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node course layout'.
  $permissions['administer panelizer node course layout'] = array(
    'name' => 'administer panelizer node course layout',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node course overview'.
  $permissions['administer panelizer node course overview'] = array(
    'name' => 'administer panelizer node course overview',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node course settings'.
  $permissions['administer panelizer node course settings'] = array(
    'name' => 'administer panelizer node course settings',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer taxonomy_term panopoly_categories breadcrumbs'.
  $permissions['administer panelizer taxonomy_term panopoly_categories breadcrumbs'] = array(
    'name' => 'administer panelizer taxonomy_term panopoly_categories breadcrumbs',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer taxonomy_term panopoly_categories content'.
  $permissions['administer panelizer taxonomy_term panopoly_categories content'] = array(
    'name' => 'administer panelizer taxonomy_term panopoly_categories content',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer taxonomy_term panopoly_categories context'.
  $permissions['administer panelizer taxonomy_term panopoly_categories context'] = array(
    'name' => 'administer panelizer taxonomy_term panopoly_categories context',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer taxonomy_term panopoly_categories defaults'.
  $permissions['administer panelizer taxonomy_term panopoly_categories defaults'] = array(
    'name' => 'administer panelizer taxonomy_term panopoly_categories defaults',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer taxonomy_term panopoly_categories layout'.
  $permissions['administer panelizer taxonomy_term panopoly_categories layout'] = array(
    'name' => 'administer panelizer taxonomy_term panopoly_categories layout',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer taxonomy_term panopoly_categories overview'.
  $permissions['administer panelizer taxonomy_term panopoly_categories overview'] = array(
    'name' => 'administer panelizer taxonomy_term panopoly_categories overview',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer taxonomy_term panopoly_categories settings'.
  $permissions['administer panelizer taxonomy_term panopoly_categories settings'] = array(
    'name' => 'administer panelizer taxonomy_term panopoly_categories settings',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer user user breadcrumbs'.
  $permissions['administer panelizer user user breadcrumbs'] = array(
    'name' => 'administer panelizer user user breadcrumbs',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer user user content'.
  $permissions['administer panelizer user user content'] = array(
    'name' => 'administer panelizer user user content',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer user user context'.
  $permissions['administer panelizer user user context'] = array(
    'name' => 'administer panelizer user user context',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer user user defaults'.
  $permissions['administer panelizer user user defaults'] = array(
    'name' => 'administer panelizer user user defaults',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer user user layout'.
  $permissions['administer panelizer user user layout'] = array(
    'name' => 'administer panelizer user user layout',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer user user overview'.
  $permissions['administer panelizer user user overview'] = array(
    'name' => 'administer panelizer user user overview',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer user user settings'.
  $permissions['administer panelizer user user settings'] = array(
    'name' => 'administer panelizer user user settings',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panels layouts'.
  $permissions['administer panels layouts'] = array(
    'name' => 'administer panels layouts',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'administer panels styles'.
  $permissions['administer panels styles'] = array(
    'name' => 'administer panels styles',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'administer pathauto'.
  $permissions['administer pathauto'] = array(
    'name' => 'administer pathauto',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'pathauto',
  );

  // Exported permission: 'administer permissions'.
  $permissions['administer permissions'] = array(
    'name' => 'administer permissions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'administer phpexcel'.
  $permissions['administer phpexcel'] = array(
    'name' => 'administer phpexcel',
    'roles' => array(),
    'module' => 'phpexcel',
  );

  // Exported permission: 'administer print'.
  $permissions['administer print'] = array(
    'name' => 'administer print',
    'roles' => array(),
    'module' => 'print',
  );

  // Exported permission: 'administer privatemsg settings'.
  $permissions['administer privatemsg settings'] = array(
    'name' => 'administer privatemsg settings',
    'roles' => array(),
    'module' => 'privatemsg',
  );

  // Exported permission: 'administer quiz configuration'.
  $permissions['administer quiz configuration'] = array(
    'name' => 'administer quiz configuration',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'quiz',
  );

  // Exported permission: 'administer rules'.
  $permissions['administer rules'] = array(
    'name' => 'administer rules',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'rules',
  );

  // Exported permission: 'administer search'.
  $permissions['administer search'] = array(
    'name' => 'administer search',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'search',
  );

  // Exported permission: 'administer search_api'.
  $permissions['administer search_api'] = array(
    'name' => 'administer search_api',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'search_api',
  );

  // Exported permission: 'administer site configuration'.
  $permissions['administer site configuration'] = array(
    'name' => 'administer site configuration',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer software updates'.
  $permissions['administer software updates'] = array(
    'name' => 'administer software updates',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer taxonomy'.
  $permissions['administer taxonomy'] = array(
    'name' => 'administer taxonomy',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'administer themes'.
  $permissions['administer themes'] = array(
    'name' => 'administer themes',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer url aliases'.
  $permissions['administer url aliases'] = array(
    'name' => 'administer url aliases',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'path',
  );

  // Exported permission: 'administer users'.
  $permissions['administer users'] = array(
    'name' => 'administer users',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'administer views'.
  $permissions['administer views'] = array(
    'name' => 'administer views',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'views',
  );

  // Exported permission: 'administer wysiwyg templates'.
  $permissions['administer wysiwyg templates'] = array(
    'name' => 'administer wysiwyg templates',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'wysiwyg_template',
  );

  // Exported permission: 'allow disabling privatemsg'.
  $permissions['allow disabling privatemsg'] = array(
    'name' => 'allow disabling privatemsg',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'privatemsg',
  );

  // Exported permission: 'assign any action to quiz events'.
  $permissions['assign any action to quiz events'] = array(
    'name' => 'assign any action to quiz events',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'quiz',
  );

  // Exported permission: 'block IP addresses'.
  $permissions['block IP addresses'] = array(
    'name' => 'block IP addresses',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'bypass file access'.
  $permissions['bypass file access'] = array(
    'name' => 'bypass file access',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'bypass node access'.
  $permissions['bypass node access'] = array(
    'name' => 'bypass node access',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'bypass rules access'.
  $permissions['bypass rules access'] = array(
    'name' => 'bypass rules access',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'rules',
  );

  // Exported permission: 'cancel account'.
  $permissions['cancel account'] = array(
    'name' => 'cancel account',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'user',
  );

  // Exported permission: 'cancel own vote'.
  $permissions['cancel own vote'] = array(
    'name' => 'cancel own vote',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'poll',
  );

  // Exported permission: 'change layouts in place editing'.
  $permissions['change layouts in place editing'] = array(
    'name' => 'change layouts in place editing',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'change own username'.
  $permissions['change own username'] = array(
    'name' => 'change own username',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'configure tablefield'.
  $permissions['configure tablefield'] = array(
    'name' => 'configure tablefield',
    'roles' => array(),
    'module' => 'tablefield',
  );

  // Exported permission: 'create calendar_event content'.
  $permissions['create calendar_event content'] = array(
    'name' => 'create calendar_event content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create certificate content'.
  $permissions['create certificate content'] = array(
    'name' => 'create certificate content',
    'roles' => array(
      'administrator' => 'administrator',
      'student manager' => 'student manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create class content'.
  $permissions['create class content'] = array(
    'name' => 'create class content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create course content'.
  $permissions['create course content'] = array(
    'name' => 'create course content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create fieldable basic_file'.
  $permissions['create fieldable basic_file'] = array(
    'name' => 'create fieldable basic_file',
    'roles' => array(),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: 'create fieldable fieldable_panels_pane'.
  $permissions['create fieldable fieldable_panels_pane'] = array(
    'name' => 'create fieldable fieldable_panels_pane',
    'roles' => array(),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: 'create fieldable image'.
  $permissions['create fieldable image'] = array(
    'name' => 'create fieldable image',
    'roles' => array(),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: 'create fieldable map'.
  $permissions['create fieldable map'] = array(
    'name' => 'create fieldable map',
    'roles' => array(),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: 'create fieldable quick_links'.
  $permissions['create fieldable quick_links'] = array(
    'name' => 'create fieldable quick_links',
    'roles' => array(),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: 'create fieldable spotlight'.
  $permissions['create fieldable spotlight'] = array(
    'name' => 'create fieldable spotlight',
    'roles' => array(),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: 'create fieldable table'.
  $permissions['create fieldable table'] = array(
    'name' => 'create fieldable table',
    'roles' => array(),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: 'create fieldable text'.
  $permissions['create fieldable text'] = array(
    'name' => 'create fieldable text',
    'roles' => array(),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: 'create fieldable video'.
  $permissions['create fieldable video'] = array(
    'name' => 'create fieldable video',
    'roles' => array(),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: 'create files'.
  $permissions['create files'] = array(
    'name' => 'create files',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'create forum content'.
  $permissions['create forum content'] = array(
    'name' => 'create forum content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create long_answer content'.
  $permissions['create long_answer content'] = array(
    'name' => 'create long_answer content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create matching content'.
  $permissions['create matching content'] = array(
    'name' => 'create matching content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create multichoice content'.
  $permissions['create multichoice content'] = array(
    'name' => 'create multichoice content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create notification content'.
  $permissions['create notification content'] = array(
    'name' => 'create notification content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create poll content'.
  $permissions['create poll content'] = array(
    'name' => 'create poll content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create quiz content'.
  $permissions['create quiz content'] = array(
    'name' => 'create quiz content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create quiz_ddlines content'.
  $permissions['create quiz_ddlines content'] = array(
    'name' => 'create quiz_ddlines content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create quiz_directions content'.
  $permissions['create quiz_directions content'] = array(
    'name' => 'create quiz_directions content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create scale content'.
  $permissions['create scale content'] = array(
    'name' => 'create scale content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create short_answer content'.
  $permissions['create short_answer content'] = array(
    'name' => 'create short_answer content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create tft_file content'.
  $permissions['create tft_file content'] = array(
    'name' => 'create tft_file content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create truefalse content'.
  $permissions['create truefalse content'] = array(
    'name' => 'create truefalse content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create url aliases'.
  $permissions['create url aliases'] = array(
    'name' => 'create url aliases',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'path',
  );

  // Exported permission: 'delete any audio files'.
  $permissions['delete any audio files'] = array(
    'name' => 'delete any audio files',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'delete any calendar_event content'.
  $permissions['delete any calendar_event content'] = array(
    'name' => 'delete any calendar_event content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any certificate content'.
  $permissions['delete any certificate content'] = array(
    'name' => 'delete any certificate content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any class content'.
  $permissions['delete any class content'] = array(
    'name' => 'delete any class content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any course content'.
  $permissions['delete any course content'] = array(
    'name' => 'delete any course content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any document files'.
  $permissions['delete any document files'] = array(
    'name' => 'delete any document files',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'delete any forum content'.
  $permissions['delete any forum content'] = array(
    'name' => 'delete any forum content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any image files'.
  $permissions['delete any image files'] = array(
    'name' => 'delete any image files',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'delete any long_answer content'.
  $permissions['delete any long_answer content'] = array(
    'name' => 'delete any long_answer content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any matching content'.
  $permissions['delete any matching content'] = array(
    'name' => 'delete any matching content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any multichoice content'.
  $permissions['delete any multichoice content'] = array(
    'name' => 'delete any multichoice content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any notification content'.
  $permissions['delete any notification content'] = array(
    'name' => 'delete any notification content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any poll content'.
  $permissions['delete any poll content'] = array(
    'name' => 'delete any poll content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any quiz content'.
  $permissions['delete any quiz content'] = array(
    'name' => 'delete any quiz content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any quiz results'.
  $permissions['delete any quiz results'] = array(
    'name' => 'delete any quiz results',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'quiz',
  );

  // Exported permission: 'delete any quiz_ddlines content'.
  $permissions['delete any quiz_ddlines content'] = array(
    'name' => 'delete any quiz_ddlines content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any quiz_directions content'.
  $permissions['delete any quiz_directions content'] = array(
    'name' => 'delete any quiz_directions content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any scale content'.
  $permissions['delete any scale content'] = array(
    'name' => 'delete any scale content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any short_answer content'.
  $permissions['delete any short_answer content'] = array(
    'name' => 'delete any short_answer content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any tft_file content'.
  $permissions['delete any tft_file content'] = array(
    'name' => 'delete any tft_file content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any truefalse content'.
  $permissions['delete any truefalse content'] = array(
    'name' => 'delete any truefalse content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any video files'.
  $permissions['delete any video files'] = array(
    'name' => 'delete any video files',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'delete fieldable basic_file'.
  $permissions['delete fieldable basic_file'] = array(
    'name' => 'delete fieldable basic_file',
    'roles' => array(),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: 'delete fieldable fieldable_panels_pane'.
  $permissions['delete fieldable fieldable_panels_pane'] = array(
    'name' => 'delete fieldable fieldable_panels_pane',
    'roles' => array(),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: 'delete fieldable image'.
  $permissions['delete fieldable image'] = array(
    'name' => 'delete fieldable image',
    'roles' => array(),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: 'delete fieldable map'.
  $permissions['delete fieldable map'] = array(
    'name' => 'delete fieldable map',
    'roles' => array(),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: 'delete fieldable quick_links'.
  $permissions['delete fieldable quick_links'] = array(
    'name' => 'delete fieldable quick_links',
    'roles' => array(),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: 'delete fieldable spotlight'.
  $permissions['delete fieldable spotlight'] = array(
    'name' => 'delete fieldable spotlight',
    'roles' => array(),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: 'delete fieldable table'.
  $permissions['delete fieldable table'] = array(
    'name' => 'delete fieldable table',
    'roles' => array(),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: 'delete fieldable text'.
  $permissions['delete fieldable text'] = array(
    'name' => 'delete fieldable text',
    'roles' => array(),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: 'delete fieldable video'.
  $permissions['delete fieldable video'] = array(
    'name' => 'delete fieldable video',
    'roles' => array(),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: 'delete own audio files'.
  $permissions['delete own audio files'] = array(
    'name' => 'delete own audio files',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'delete own calendar_event content'.
  $permissions['delete own calendar_event content'] = array(
    'name' => 'delete own calendar_event content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own certificate content'.
  $permissions['delete own certificate content'] = array(
    'name' => 'delete own certificate content',
    'roles' => array(
      'administrator' => 'administrator',
      'student manager' => 'student manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own class content'.
  $permissions['delete own class content'] = array(
    'name' => 'delete own class content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own course content'.
  $permissions['delete own course content'] = array(
    'name' => 'delete own course content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own document files'.
  $permissions['delete own document files'] = array(
    'name' => 'delete own document files',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'delete own forum content'.
  $permissions['delete own forum content'] = array(
    'name' => 'delete own forum content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own image files'.
  $permissions['delete own image files'] = array(
    'name' => 'delete own image files',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'delete own long_answer content'.
  $permissions['delete own long_answer content'] = array(
    'name' => 'delete own long_answer content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own matching content'.
  $permissions['delete own matching content'] = array(
    'name' => 'delete own matching content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own multichoice content'.
  $permissions['delete own multichoice content'] = array(
    'name' => 'delete own multichoice content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own notification content'.
  $permissions['delete own notification content'] = array(
    'name' => 'delete own notification content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own poll content'.
  $permissions['delete own poll content'] = array(
    'name' => 'delete own poll content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own quiz content'.
  $permissions['delete own quiz content'] = array(
    'name' => 'delete own quiz content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own quiz_ddlines content'.
  $permissions['delete own quiz_ddlines content'] = array(
    'name' => 'delete own quiz_ddlines content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own quiz_directions content'.
  $permissions['delete own quiz_directions content'] = array(
    'name' => 'delete own quiz_directions content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own scale content'.
  $permissions['delete own scale content'] = array(
    'name' => 'delete own scale content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own short_answer content'.
  $permissions['delete own short_answer content'] = array(
    'name' => 'delete own short_answer content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own tft_file content'.
  $permissions['delete own tft_file content'] = array(
    'name' => 'delete own tft_file content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own truefalse content'.
  $permissions['delete own truefalse content'] = array(
    'name' => 'delete own truefalse content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own video files'.
  $permissions['delete own video files'] = array(
    'name' => 'delete own video files',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'delete privatemsg'.
  $permissions['delete privatemsg'] = array(
    'name' => 'delete privatemsg',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'privatemsg',
  );

  // Exported permission: 'delete results for own quiz'.
  $permissions['delete results for own quiz'] = array(
    'name' => 'delete results for own quiz',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'quiz',
  );

  // Exported permission: 'delete revisions'.
  $permissions['delete revisions'] = array(
    'name' => 'delete revisions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete terms in course_categories'.
  $permissions['delete terms in course_categories'] = array(
    'name' => 'delete terms in course_categories',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in forums'.
  $permissions['delete terms in forums'] = array(
    'name' => 'delete terms in forums',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in panopoly_categories'.
  $permissions['delete terms in panopoly_categories'] = array(
    'name' => 'delete terms in panopoly_categories',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in tft_tree'.
  $permissions['delete terms in tft_tree'] = array(
    'name' => 'delete terms in tft_tree',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'display drupal links'.
  $permissions['display drupal links'] = array(
    'name' => 'display drupal links',
    'roles' => array(),
    'module' => 'admin_menu',
  );

  // Exported permission: 'download any audio files'.
  $permissions['download any audio files'] = array(
    'name' => 'download any audio files',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'download any document files'.
  $permissions['download any document files'] = array(
    'name' => 'download any document files',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'download any image files'.
  $permissions['download any image files'] = array(
    'name' => 'download any image files',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'download any video files'.
  $permissions['download any video files'] = array(
    'name' => 'download any video files',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'download own audio files'.
  $permissions['download own audio files'] = array(
    'name' => 'download own audio files',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'download own document files'.
  $permissions['download own document files'] = array(
    'name' => 'download own document files',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'download own image files'.
  $permissions['download own image files'] = array(
    'name' => 'download own image files',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'download own video files'.
  $permissions['download own video files'] = array(
    'name' => 'download own video files',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit any audio files'.
  $permissions['edit any audio files'] = array(
    'name' => 'edit any audio files',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit any calendar_event content'.
  $permissions['edit any calendar_event content'] = array(
    'name' => 'edit any calendar_event content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any certificate content'.
  $permissions['edit any certificate content'] = array(
    'name' => 'edit any certificate content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any class content'.
  $permissions['edit any class content'] = array(
    'name' => 'edit any class content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any course content'.
  $permissions['edit any course content'] = array(
    'name' => 'edit any course content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any document files'.
  $permissions['edit any document files'] = array(
    'name' => 'edit any document files',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit any forum content'.
  $permissions['edit any forum content'] = array(
    'name' => 'edit any forum content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any image files'.
  $permissions['edit any image files'] = array(
    'name' => 'edit any image files',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit any long_answer content'.
  $permissions['edit any long_answer content'] = array(
    'name' => 'edit any long_answer content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any matching content'.
  $permissions['edit any matching content'] = array(
    'name' => 'edit any matching content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any multichoice content'.
  $permissions['edit any multichoice content'] = array(
    'name' => 'edit any multichoice content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any notification content'.
  $permissions['edit any notification content'] = array(
    'name' => 'edit any notification content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any poll content'.
  $permissions['edit any poll content'] = array(
    'name' => 'edit any poll content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any quiz content'.
  $permissions['edit any quiz content'] = array(
    'name' => 'edit any quiz content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any quiz_ddlines content'.
  $permissions['edit any quiz_ddlines content'] = array(
    'name' => 'edit any quiz_ddlines content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any quiz_directions content'.
  $permissions['edit any quiz_directions content'] = array(
    'name' => 'edit any quiz_directions content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any scale content'.
  $permissions['edit any scale content'] = array(
    'name' => 'edit any scale content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any short_answer content'.
  $permissions['edit any short_answer content'] = array(
    'name' => 'edit any short_answer content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any tft_file content'.
  $permissions['edit any tft_file content'] = array(
    'name' => 'edit any tft_file content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any truefalse content'.
  $permissions['edit any truefalse content'] = array(
    'name' => 'edit any truefalse content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any video files'.
  $permissions['edit any video files'] = array(
    'name' => 'edit any video files',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit fieldable basic_file'.
  $permissions['edit fieldable basic_file'] = array(
    'name' => 'edit fieldable basic_file',
    'roles' => array(),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: 'edit fieldable fieldable_panels_pane'.
  $permissions['edit fieldable fieldable_panels_pane'] = array(
    'name' => 'edit fieldable fieldable_panels_pane',
    'roles' => array(),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: 'edit fieldable image'.
  $permissions['edit fieldable image'] = array(
    'name' => 'edit fieldable image',
    'roles' => array(),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: 'edit fieldable map'.
  $permissions['edit fieldable map'] = array(
    'name' => 'edit fieldable map',
    'roles' => array(),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: 'edit fieldable quick_links'.
  $permissions['edit fieldable quick_links'] = array(
    'name' => 'edit fieldable quick_links',
    'roles' => array(),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: 'edit fieldable spotlight'.
  $permissions['edit fieldable spotlight'] = array(
    'name' => 'edit fieldable spotlight',
    'roles' => array(),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: 'edit fieldable table'.
  $permissions['edit fieldable table'] = array(
    'name' => 'edit fieldable table',
    'roles' => array(),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: 'edit fieldable text'.
  $permissions['edit fieldable text'] = array(
    'name' => 'edit fieldable text',
    'roles' => array(),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: 'edit fieldable video'.
  $permissions['edit fieldable video'] = array(
    'name' => 'edit fieldable video',
    'roles' => array(),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: 'edit own audio files'.
  $permissions['edit own audio files'] = array(
    'name' => 'edit own audio files',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit own calendar_event content'.
  $permissions['edit own calendar_event content'] = array(
    'name' => 'edit own calendar_event content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own certificate content'.
  $permissions['edit own certificate content'] = array(
    'name' => 'edit own certificate content',
    'roles' => array(
      'administrator' => 'administrator',
      'student manager' => 'student manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own class content'.
  $permissions['edit own class content'] = array(
    'name' => 'edit own class content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own comments'.
  $permissions['edit own comments'] = array(
    'name' => 'edit own comments',
    'roles' => array(
      'administrator' => 'administrator',
      'forum administrator' => 'forum administrator',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'edit own course content'.
  $permissions['edit own course content'] = array(
    'name' => 'edit own course content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own document files'.
  $permissions['edit own document files'] = array(
    'name' => 'edit own document files',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit own forum content'.
  $permissions['edit own forum content'] = array(
    'name' => 'edit own forum content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own image files'.
  $permissions['edit own image files'] = array(
    'name' => 'edit own image files',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit own long_answer content'.
  $permissions['edit own long_answer content'] = array(
    'name' => 'edit own long_answer content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own matching content'.
  $permissions['edit own matching content'] = array(
    'name' => 'edit own matching content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own multichoice content'.
  $permissions['edit own multichoice content'] = array(
    'name' => 'edit own multichoice content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own notification content'.
  $permissions['edit own notification content'] = array(
    'name' => 'edit own notification content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own poll content'.
  $permissions['edit own poll content'] = array(
    'name' => 'edit own poll content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own quiz content'.
  $permissions['edit own quiz content'] = array(
    'name' => 'edit own quiz content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own quiz_ddlines content'.
  $permissions['edit own quiz_ddlines content'] = array(
    'name' => 'edit own quiz_ddlines content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own quiz_directions content'.
  $permissions['edit own quiz_directions content'] = array(
    'name' => 'edit own quiz_directions content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own scale content'.
  $permissions['edit own scale content'] = array(
    'name' => 'edit own scale content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own short_answer content'.
  $permissions['edit own short_answer content'] = array(
    'name' => 'edit own short_answer content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own tft_file content'.
  $permissions['edit own tft_file content'] = array(
    'name' => 'edit own tft_file content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own truefalse content'.
  $permissions['edit own truefalse content'] = array(
    'name' => 'edit own truefalse content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own video files'.
  $permissions['edit own video files'] = array(
    'name' => 'edit own video files',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit question titles'.
  $permissions['edit question titles'] = array(
    'name' => 'edit question titles',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'quiz',
  );

  // Exported permission: 'edit terms in course_categories'.
  $permissions['edit terms in course_categories'] = array(
    'name' => 'edit terms in course_categories',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in forums'.
  $permissions['edit terms in forums'] = array(
    'name' => 'edit terms in forums',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in panopoly_categories'.
  $permissions['edit terms in panopoly_categories'] = array(
    'name' => 'edit terms in panopoly_categories',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in tft_tree'.
  $permissions['edit terms in tft_tree'] = array(
    'name' => 'edit terms in tft_tree',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'execute php code'.
  $permissions['execute php code'] = array(
    'name' => 'execute php code',
    'roles' => array(),
    'module' => 'devel',
  );

  // Exported permission: 'export tablefield'.
  $permissions['export tablefield'] = array(
    'name' => 'export tablefield',
    'roles' => array(),
    'module' => 'tablefield',
  );

  // Exported permission: 'flush caches'.
  $permissions['flush caches'] = array(
    'name' => 'flush caches',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'admin_menu',
  );

  // Exported permission: 'generate features'.
  $permissions['generate features'] = array(
    'name' => 'generate features',
    'roles' => array(),
    'module' => 'features',
  );

  // Exported permission: 'import media'.
  $permissions['import media'] = array(
    'name' => 'import media',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'media',
  );

  // Exported permission: 'import quiz questions xls'.
  $permissions['import quiz questions xls'] = array(
    'name' => 'import quiz questions xls',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'opigno_quiz_import_app',
  );

  // Exported permission: 'import wysiwyg templates'.
  $permissions['import wysiwyg templates'] = array(
    'name' => 'import wysiwyg templates',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'wysiwyg_template',
  );

  // Exported permission: 'inspect all votes'.
  $permissions['inspect all votes'] = array(
    'name' => 'inspect all votes',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'poll',
  );

  // Exported permission: 'manage features'.
  $permissions['manage features'] = array(
    'name' => 'manage features',
    'roles' => array(),
    'module' => 'features',
  );

  // Exported permission: 'manual quiz revisioning'.
  $permissions['manual quiz revisioning'] = array(
    'name' => 'manual quiz revisioning',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'quiz',
  );

  // Exported permission: 'mass add and create users'.
  $permissions['mass add and create users'] = array(
    'name' => 'mass add and create users',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'og_massadd',
  );

  // Exported permission: 'message all groups'.
  $permissions['message all groups'] = array(
    'name' => 'message all groups',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'opigno_messaging_app',
  );

  // Exported permission: 'node-specific print configuration'.
  $permissions['node-specific print configuration'] = array(
    'name' => 'node-specific print configuration',
    'roles' => array(),
    'module' => 'print',
  );

  // Exported permission: 'notify everyone'.
  $permissions['notify everyone'] = array(
    'name' => 'notify everyone',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'opigno_notifications_app',
  );

  // Exported permission: 'notify of path changes'.
  $permissions['notify of path changes'] = array(
    'name' => 'notify of path changes',
    'roles' => array(),
    'module' => 'pathauto',
  );

  // Exported permission: 'post comments'.
  $permissions['post comments'] = array(
    'name' => 'post comments',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'read all private messages'.
  $permissions['read all private messages'] = array(
    'name' => 'read all private messages',
    'roles' => array(),
    'module' => 'privatemsg',
  );

  // Exported permission: 'read privatemsg'.
  $permissions['read privatemsg'] = array(
    'name' => 'read privatemsg',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'privatemsg',
  );

  // Exported permission: 'rebuild tablefield'.
  $permissions['rebuild tablefield'] = array(
    'name' => 'rebuild tablefield',
    'roles' => array(),
    'module' => 'tablefield',
  );

  // Exported permission: 'reply only privatemsg'.
  $permissions['reply only privatemsg'] = array(
    'name' => 'reply only privatemsg',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'privatemsg',
  );

  // Exported permission: 'reset drupal'.
  $permissions['reset drupal'] = array(
    'name' => 'reset drupal',
    'roles' => array(),
    'module' => 'drupal_reset',
  );

  // Exported permission: 'revert revisions'.
  $permissions['revert revisions'] = array(
    'name' => 'revert revisions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'score any quiz'.
  $permissions['score any quiz'] = array(
    'name' => 'score any quiz',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'quiz',
  );

  // Exported permission: 'score own quiz'.
  $permissions['score own quiz'] = array(
    'name' => 'score own quiz',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'quiz',
  );

  // Exported permission: 'score taken quiz answer'.
  $permissions['score taken quiz answer'] = array(
    'name' => 'score taken quiz answer',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'quiz',
  );

  // Exported permission: 'search content'.
  $permissions['search content'] = array(
    'name' => 'search content',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'search',
  );

  // Exported permission: 'select account cancellation method'.
  $permissions['select account cancellation method'] = array(
    'name' => 'select account cancellation method',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'select text format for privatemsg'.
  $permissions['select text format for privatemsg'] = array(
    'name' => 'select text format for privatemsg',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'privatemsg',
  );

  // Exported permission: 'skip comment approval'.
  $permissions['skip comment approval'] = array(
    'name' => 'skip comment approval',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'switch users'.
  $permissions['switch users'] = array(
    'name' => 'switch users',
    'roles' => array(),
    'module' => 'devel',
  );

  // Exported permission: 'tft access full tree'.
  $permissions['tft access full tree'] = array(
    'name' => 'tft access full tree',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'tft',
  );

  // Exported permission: 'tft add a file to any term'.
  $permissions['tft add a file to any term'] = array(
    'name' => 'tft add a file to any term',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'tft',
  );

  // Exported permission: 'tft add child terms'.
  $permissions['tft add child terms'] = array(
    'name' => 'tft add child terms',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'tft',
  );

  // Exported permission: 'tft aminister'.
  $permissions['tft aminister'] = array(
    'name' => 'tft aminister',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'tft',
  );

  // Exported permission: 'tft archive child terms'.
  $permissions['tft archive child terms'] = array(
    'name' => 'tft archive child terms',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'tft',
  );

  // Exported permission: 'tft delete child terms'.
  $permissions['tft delete child terms'] = array(
    'name' => 'tft delete child terms',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'tft',
  );

  // Exported permission: 'tft reorder terms'.
  $permissions['tft reorder terms'] = array(
    'name' => 'tft reorder terms',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'tft',
  );

  // Exported permission: 'translate admin strings'.
  $permissions['translate admin strings'] = array(
    'name' => 'translate admin strings',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'i18n_string',
  );

  // Exported permission: 'translate interface'.
  $permissions['translate interface'] = array(
    'name' => 'translate interface',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'locale',
  );

  // Exported permission: 'translate user-defined strings'.
  $permissions['translate user-defined strings'] = array(
    'name' => 'translate user-defined strings',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'i18n_string',
  );

  // Exported permission: 'use Rules component rules_og_massadd'.
  $permissions['use Rules component rules_og_massadd'] = array(
    'name' => 'use Rules component rules_og_massadd',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'rules',
  );

  // Exported permission: 'use advanced search'.
  $permissions['use advanced search'] = array(
    'name' => 'use advanced search',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'search',
  );

  // Exported permission: 'use ipe with page manager'.
  $permissions['use ipe with page manager'] = array(
    'name' => 'use ipe with page manager',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'use page manager'.
  $permissions['use page manager'] = array(
    'name' => 'use page manager',
    'roles' => array(),
    'module' => 'page_manager',
  );

  // Exported permission: 'use panels caching features'.
  $permissions['use panels caching features'] = array(
    'name' => 'use panels caching features',
    'roles' => array(),
    'module' => 'panels',
  );

  // Exported permission: 'use panels dashboard'.
  $permissions['use panels dashboard'] = array(
    'name' => 'use panels dashboard',
    'roles' => array(),
    'module' => 'panels',
  );

  // Exported permission: 'use panels in place editing'.
  $permissions['use panels in place editing'] = array(
    'name' => 'use panels in place editing',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'use panels locks'.
  $permissions['use panels locks'] = array(
    'name' => 'use panels locks',
    'roles' => array(),
    'module' => 'panels',
  );

  // Exported permission: 'use regex for short answer'.
  $permissions['use regex for short answer'] = array(
    'name' => 'use regex for short answer',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'short_answer',
  );

  // Exported permission: 'use text format html'.
  $permissions['use text format html'] = array(
    'name' => 'use text format html',
    'roles' => array(
      'administrator' => 'administrator',
      'student manager' => 'student manager',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'use tokens in privatemsg'.
  $permissions['use tokens in privatemsg'] = array(
    'name' => 'use tokens in privatemsg',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'privatemsg',
  );

  // Exported permission: 'view all user certificates'.
  $permissions['view all user certificates'] = array(
    'name' => 'view all user certificates',
    'roles' => array(
      'administrator' => 'administrator',
      'student manager' => 'student manager',
    ),
    'module' => 'certificate',
  );

  // Exported permission: 'view any quiz question correct response'.
  $permissions['view any quiz question correct response'] = array(
    'name' => 'view any quiz question correct response',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'quiz',
  );

  // Exported permission: 'view any quiz results'.
  $permissions['view any quiz results'] = array(
    'name' => 'view any quiz results',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'quiz',
  );

  // Exported permission: 'view files'.
  $permissions['view files'] = array(
    'name' => 'view files',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'view forum statistics'.
  $permissions['view forum statistics'] = array(
    'name' => 'view forum statistics',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'advanced_forum',
  );

  // Exported permission: 'view last edited notice'.
  $permissions['view last edited notice'] = array(
    'name' => 'view last edited notice',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'advanced_forum',
  );

  // Exported permission: 'view own files'.
  $permissions['view own files'] = array(
    'name' => 'view own files',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'view own private files'.
  $permissions['view own private files'] = array(
    'name' => 'view own private files',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'view own quiz results'.
  $permissions['view own quiz results'] = array(
    'name' => 'view own quiz results',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'quiz',
  );

  // Exported permission: 'view own unpublished content'.
  $permissions['view own unpublished content'] = array(
    'name' => 'view own unpublished content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'view pane admin links'.
  $permissions['view pane admin links'] = array(
    'name' => 'view pane admin links',
    'roles' => array(),
    'module' => 'panels',
  );

  // Exported permission: 'view private files'.
  $permissions['view private files'] = array(
    'name' => 'view private files',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'view quiz question outside of a quiz'.
  $permissions['view quiz question outside of a quiz'] = array(
    'name' => 'view quiz question outside of a quiz',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'quiz',
  );

  // Exported permission: 'view results for own quiz'.
  $permissions['view results for own quiz'] = array(
    'name' => 'view results for own quiz',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'quiz',
  );

  // Exported permission: 'view revisions'.
  $permissions['view revisions'] = array(
    'name' => 'view revisions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'view the administration theme'.
  $permissions['view the administration theme'] = array(
    'name' => 'view the administration theme',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'vote on polls'.
  $permissions['vote on polls'] = array(
    'name' => 'vote on polls',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'poll',
  );

  // Exported permission: 'write privatemsg'.
  $permissions['write privatemsg'] = array(
    'name' => 'write privatemsg',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'privatemsg',
  );

  return $permissions;
}
