<?php
/**
 * @file
 * feature_debut.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function feature_debut_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu:<front>
  $menu_links['main-menu:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Accueil',
    'options' => array(),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Exported menu link: management:admin
  $menu_links['management:admin'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin',
    'router_path' => 'admin',
    'link_title' => 'Administration',
    'options' => array(),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '9',
  );
  // Exported menu link: management:admin/appearance
  $menu_links['management:admin/appearance'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/appearance',
    'router_path' => 'admin/appearance',
    'link_title' => 'Appearance',
    'options' => array(
      'attributes' => array(
        'title' => 'Select and configure your themes.',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-6',
    'parent_path' => 'admin',
  );
  // Exported menu link: management:admin/config
  $menu_links['management:admin/config'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config',
    'router_path' => 'admin/config',
    'link_title' => 'Configuration',
    'options' => array(
      'attributes' => array(
        'title' => 'Administer settings.',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'admin',
  );
  // Exported menu link: management:admin/config/content
  $menu_links['management:admin/config/content'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/content',
    'router_path' => 'admin/config/content',
    'link_title' => 'Content authoring',
    'options' => array(
      'attributes' => array(
        'title' => 'Settings related to formatting and authoring content.',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '-15',
    'parent_path' => 'admin/config',
  );
  // Exported menu link: management:admin/config/content/formats
  $menu_links['management:admin/config/content/formats'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/content/formats',
    'router_path' => 'admin/config/content/formats',
    'link_title' => 'Text formats',
    'options' => array(
      'attributes' => array(
        'title' => 'Configure how content input by users is filtered, including allowed HTML tags. Also allows enabling of module-provided filters.',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'admin/config/content',
  );
  // Exported menu link: management:admin/config/development
  $menu_links['management:admin/config/development'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/development',
    'router_path' => 'admin/config/development',
    'link_title' => 'Development',
    'options' => array(
      'attributes' => array(
        'title' => 'Development tools.',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '-10',
    'parent_path' => 'admin/config',
  );
  // Exported menu link: management:admin/config/development/logging
  $menu_links['management:admin/config/development/logging'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/development/logging',
    'router_path' => 'admin/config/development/logging',
    'link_title' => 'Logging and errors',
    'options' => array(
      'attributes' => array(
        'title' => 'Settings for logging and alerts modules. Various modules can route Drupal\'s system events to different destinations, such as syslog, database, email, etc.',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-15',
    'parent_path' => 'admin/config/development',
  );
  // Exported menu link: management:admin/config/development/maintenance
  $menu_links['management:admin/config/development/maintenance'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/development/maintenance',
    'router_path' => 'admin/config/development/maintenance',
    'link_title' => 'Maintenance mode',
    'options' => array(
      'attributes' => array(
        'title' => 'Take the site offline for maintenance or bring it back online.',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-10',
    'parent_path' => 'admin/config/development',
  );
  // Exported menu link: management:admin/config/development/performance
  $menu_links['management:admin/config/development/performance'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/development/performance',
    'router_path' => 'admin/config/development/performance',
    'link_title' => 'Performance',
    'options' => array(
      'attributes' => array(
        'title' => 'Enable or disable page caching for anonymous users and set CSS and JS bandwidth optimization options.',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-20',
    'parent_path' => 'admin/config/development',
  );
  // Exported menu link: management:admin/config/media
  $menu_links['management:admin/config/media'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/media',
    'router_path' => 'admin/config/media',
    'link_title' => 'Media',
    'options' => array(
      'attributes' => array(
        'title' => 'Media tools.',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '-10',
    'parent_path' => 'admin/config',
  );
  // Exported menu link: management:admin/config/media/file-system
  $menu_links['management:admin/config/media/file-system'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/media/file-system',
    'router_path' => 'admin/config/media/file-system',
    'link_title' => 'File system',
    'options' => array(
      'attributes' => array(
        'title' => 'Tell Drupal where to store uploaded files and how they are accessed.',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-10',
    'parent_path' => 'admin/config/media',
  );
  // Exported menu link: management:admin/config/media/image-styles
  $menu_links['management:admin/config/media/image-styles'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/media/image-styles',
    'router_path' => 'admin/config/media/image-styles',
    'link_title' => 'Image styles',
    'options' => array(
      'attributes' => array(
        'title' => 'Configure styles that can be used for resizing or adjusting images on display.',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'admin/config/media',
  );
  // Exported menu link: management:admin/config/media/image-toolkit
  $menu_links['management:admin/config/media/image-toolkit'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/media/image-toolkit',
    'router_path' => 'admin/config/media/image-toolkit',
    'link_title' => 'Image toolkit',
    'options' => array(
      'attributes' => array(
        'title' => 'Choose which image toolkit to use if you have installed optional toolkits.',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '20',
    'parent_path' => 'admin/config/media',
  );
  // Exported menu link: management:admin/config/people
  $menu_links['management:admin/config/people'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/people',
    'router_path' => 'admin/config/people',
    'link_title' => 'People',
    'options' => array(
      'attributes' => array(
        'title' => 'Configure user accounts.',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '-20',
    'parent_path' => 'admin/config',
  );
  // Exported menu link: management:admin/config/people/accounts
  $menu_links['management:admin/config/people/accounts'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/people/accounts',
    'router_path' => 'admin/config/people/accounts',
    'link_title' => 'Account settings',
    'options' => array(
      'attributes' => array(
        'title' => 'Configure default behavior of users, including registration requirements, e-mails, fields, and user pictures.',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-10',
    'parent_path' => 'admin/config/people',
  );
  // Exported menu link: management:admin/config/people/ip-blocking
  $menu_links['management:admin/config/people/ip-blocking'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/people/ip-blocking',
    'router_path' => 'admin/config/people/ip-blocking',
    'link_title' => 'IP address blocking',
    'options' => array(
      'attributes' => array(
        'title' => 'Manage blocked IP addresses.',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '10',
    'parent_path' => 'admin/config/people',
  );
  // Exported menu link: management:admin/config/regional
  $menu_links['management:admin/config/regional'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/regional',
    'router_path' => 'admin/config/regional',
    'link_title' => 'Regional and language',
    'options' => array(
      'attributes' => array(
        'title' => 'Regional settings, localization and translation.',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '-5',
    'parent_path' => 'admin/config',
  );
  // Exported menu link: management:admin/config/regional/date-time
  $menu_links['management:admin/config/regional/date-time'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/regional/date-time',
    'router_path' => 'admin/config/regional/date-time',
    'link_title' => 'Date and time',
    'options' => array(
      'attributes' => array(
        'title' => 'Configure display formats for date and time.',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-15',
    'parent_path' => 'admin/config/regional',
  );
  // Exported menu link: management:admin/config/regional/language
  $menu_links['management:admin/config/regional/language'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/regional/language',
    'router_path' => 'admin/config/regional/language',
    'link_title' => 'Languages',
    'options' => array(
      'attributes' => array(
        'title' => 'Configure languages for content and the user interface.',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '-10',
    'parent_path' => 'admin/config/regional',
  );
  // Exported menu link: management:admin/config/regional/settings
  $menu_links['management:admin/config/regional/settings'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/regional/settings',
    'router_path' => 'admin/config/regional/settings',
    'link_title' => 'Regional settings',
    'options' => array(
      'attributes' => array(
        'title' => 'Settings for the site\'s default time zone and country.',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-20',
    'parent_path' => 'admin/config/regional',
  );
  // Exported menu link: management:admin/config/regional/translate
  $menu_links['management:admin/config/regional/translate'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/regional/translate',
    'router_path' => 'admin/config/regional/translate',
    'link_title' => 'Translate interface',
    'options' => array(
      'attributes' => array(
        'title' => 'Translate the built in interface and optionally other text.',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '-5',
    'parent_path' => 'admin/config/regional',
  );
  // Exported menu link: management:admin/config/search
  $menu_links['management:admin/config/search'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/search',
    'router_path' => 'admin/config/search',
    'link_title' => 'Search and metadata',
    'options' => array(
      'attributes' => array(
        'title' => 'Local site search, metadata and SEO.',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '-10',
    'parent_path' => 'admin/config',
  );
  // Exported menu link: management:admin/config/search/clean-urls
  $menu_links['management:admin/config/search/clean-urls'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/search/clean-urls',
    'router_path' => 'admin/config/search/clean-urls',
    'link_title' => 'Clean URLs',
    'options' => array(
      'attributes' => array(
        'title' => 'Enable or disable clean URLs for your site.',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '5',
    'parent_path' => 'admin/config/search',
  );
  // Exported menu link: management:admin/config/search/path
  $menu_links['management:admin/config/search/path'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/search/path',
    'router_path' => 'admin/config/search/path',
    'link_title' => 'URL aliases',
    'options' => array(
      'attributes' => array(
        'title' => 'Change your site\'s URL paths by aliasing them.',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '-5',
    'parent_path' => 'admin/config/search',
  );
  // Exported menu link: management:admin/config/search/settings
  $menu_links['management:admin/config/search/settings'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/search/settings',
    'router_path' => 'admin/config/search/settings',
    'link_title' => 'Search settings',
    'options' => array(
      'attributes' => array(
        'title' => 'Configure relevance settings for search and other indexing options.',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-10',
    'parent_path' => 'admin/config/search',
  );
  // Exported menu link: management:admin/config/services
  $menu_links['management:admin/config/services'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/services',
    'router_path' => 'admin/config/services',
    'link_title' => 'Web services',
    'options' => array(
      'attributes' => array(
        'title' => 'Tools related to web services.',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'admin/config',
  );
  // Exported menu link: management:admin/config/services/rss-publishing
  $menu_links['management:admin/config/services/rss-publishing'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/services/rss-publishing',
    'router_path' => 'admin/config/services/rss-publishing',
    'link_title' => 'RSS publishing',
    'options' => array(
      'attributes' => array(
        'title' => 'Configure the site description, the number of items per feed and whether feeds should be titles/teasers/full-text.',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'admin/config/services',
  );
  // Exported menu link: management:admin/config/system
  $menu_links['management:admin/config/system'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/system',
    'router_path' => 'admin/config/system',
    'link_title' => 'System',
    'options' => array(
      'attributes' => array(
        'title' => 'General system related configuration.',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '-20',
    'parent_path' => 'admin/config',
  );
  // Exported menu link: management:admin/config/system/actions
  $menu_links['management:admin/config/system/actions'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/system/actions',
    'router_path' => 'admin/config/system/actions',
    'link_title' => 'Actions',
    'options' => array(
      'attributes' => array(
        'title' => 'Manage the actions defined for your site.',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'admin/config/system',
  );
  // Exported menu link: management:admin/config/system/cron
  $menu_links['management:admin/config/system/cron'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/system/cron',
    'router_path' => 'admin/config/system/cron',
    'link_title' => 'Cron',
    'options' => array(
      'attributes' => array(
        'title' => 'Manage automatic site maintenance tasks.',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '20',
    'parent_path' => 'admin/config/system',
  );
  // Exported menu link: management:admin/config/system/site-information
  $menu_links['management:admin/config/system/site-information'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/system/site-information',
    'router_path' => 'admin/config/system/site-information',
    'link_title' => 'Site information',
    'options' => array(
      'attributes' => array(
        'title' => 'Change site name, e-mail address, slogan, default front page, and number of posts per page, error pages.',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-20',
    'parent_path' => 'admin/config/system',
  );
  // Exported menu link: management:admin/config/user-interface
  $menu_links['management:admin/config/user-interface'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/user-interface',
    'router_path' => 'admin/config/user-interface',
    'link_title' => 'User interface',
    'options' => array(
      'attributes' => array(
        'title' => 'Tools that enhance the user interface.',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '-15',
    'parent_path' => 'admin/config',
  );
  // Exported menu link: management:admin/config/user-interface/shortcut
  $menu_links['management:admin/config/user-interface/shortcut'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/user-interface/shortcut',
    'router_path' => 'admin/config/user-interface/shortcut',
    'link_title' => 'Shortcuts',
    'options' => array(
      'attributes' => array(
        'title' => 'Add and modify shortcut sets.',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'admin/config/user-interface',
  );
  // Exported menu link: management:admin/config/workflow
  $menu_links['management:admin/config/workflow'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/workflow',
    'router_path' => 'admin/config/workflow',
    'link_title' => 'Workflow',
    'options' => array(
      'attributes' => array(
        'title' => 'Content workflow, editorial workflow tools.',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '5',
    'parent_path' => 'admin/config',
  );
  // Exported menu link: management:admin/content
  $menu_links['management:admin/content'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/content',
    'router_path' => 'admin/content',
    'link_title' => 'Content',
    'options' => array(
      'attributes' => array(
        'title' => 'Administer content and comments.',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '-10',
    'parent_path' => 'admin',
  );
  // Exported menu link: management:admin/content/comment
  $menu_links['management:admin/content/comment'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/content/comment',
    'router_path' => 'admin/content/comment',
    'link_title' => 'Comments',
    'options' => array(
      'attributes' => array(
        'title' => 'List and edit site comments and the comment approval queue.',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'admin/content',
  );
  // Exported menu link: management:admin/dashboard
  $menu_links['management:admin/dashboard'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/dashboard',
    'router_path' => 'admin/dashboard',
    'link_title' => 'Dashboard',
    'options' => array(
      'attributes' => array(
        'title' => 'View and customize your dashboard.',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-15',
    'parent_path' => 'admin',
  );
  // Exported menu link: management:admin/help
  $menu_links['management:admin/help'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/help',
    'router_path' => 'admin/help',
    'link_title' => 'Help',
    'options' => array(
      'attributes' => array(
        'title' => 'Reference for usage, configuration, and modules.',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '9',
    'parent_path' => 'admin',
  );
  // Exported menu link: management:admin/modules
  $menu_links['management:admin/modules'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/modules',
    'router_path' => 'admin/modules',
    'link_title' => 'Modules',
    'options' => array(
      'attributes' => array(
        'title' => 'Extend site functionality.',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-2',
    'parent_path' => 'admin',
  );
  // Exported menu link: management:admin/people
  $menu_links['management:admin/people'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/people',
    'router_path' => 'admin/people',
    'link_title' => 'People',
    'options' => array(
      'attributes' => array(
        'title' => 'Manage user accounts, roles, and permissions.',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-4',
    'parent_path' => 'admin',
  );
  // Exported menu link: management:admin/reports
  $menu_links['management:admin/reports'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/reports',
    'router_path' => 'admin/reports',
    'link_title' => 'Reports',
    'options' => array(
      'attributes' => array(
        'title' => 'View reports, updates, and errors.',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '5',
    'parent_path' => 'admin',
  );
  // Exported menu link: management:admin/reports/access-denied
  $menu_links['management:admin/reports/access-denied'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/reports/access-denied',
    'router_path' => 'admin/reports/access-denied',
    'link_title' => 'Top \'access denied\' errors',
    'options' => array(
      'attributes' => array(
        'title' => 'View \'access denied\' errors (403s).',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'admin/reports',
  );
  // Exported menu link: management:admin/reports/dblog
  $menu_links['management:admin/reports/dblog'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/reports/dblog',
    'router_path' => 'admin/reports/dblog',
    'link_title' => 'Recent log messages',
    'options' => array(
      'attributes' => array(
        'title' => 'View events that have recently been logged.',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-1',
    'parent_path' => 'admin/reports',
  );
  // Exported menu link: management:admin/reports/fields
  $menu_links['management:admin/reports/fields'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/reports/fields',
    'router_path' => 'admin/reports/fields',
    'link_title' => 'Field list',
    'options' => array(
      'attributes' => array(
        'title' => 'Overview of fields on all entity types.',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'admin/reports',
  );
  // Exported menu link: management:admin/reports/page-not-found
  $menu_links['management:admin/reports/page-not-found'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/reports/page-not-found',
    'router_path' => 'admin/reports/page-not-found',
    'link_title' => 'Top \'page not found\' errors',
    'options' => array(
      'attributes' => array(
        'title' => 'View \'page not found\' errors (404s).',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'admin/reports',
  );
  // Exported menu link: management:admin/reports/search
  $menu_links['management:admin/reports/search'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/reports/search',
    'router_path' => 'admin/reports/search',
    'link_title' => 'Top search phrases',
    'options' => array(
      'attributes' => array(
        'title' => 'View most popular search phrases.',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'admin/reports',
  );
  // Exported menu link: management:admin/reports/status
  $menu_links['management:admin/reports/status'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/reports/status',
    'router_path' => 'admin/reports/status',
    'link_title' => 'Status report',
    'options' => array(
      'attributes' => array(
        'title' => 'Get a status report about your site\'s operation and any detected problems.',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-60',
    'parent_path' => 'admin/reports',
  );
  // Exported menu link: management:admin/reports/updates
  $menu_links['management:admin/reports/updates'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/reports/updates',
    'router_path' => 'admin/reports/updates',
    'link_title' => 'Available updates',
    'options' => array(
      'attributes' => array(
        'title' => 'Get a status report about available updates for your installed modules and themes.',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-50',
    'parent_path' => 'admin/reports',
  );
  // Exported menu link: management:admin/structure
  $menu_links['management:admin/structure'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure',
    'router_path' => 'admin/structure',
    'link_title' => 'Structure',
    'options' => array(
      'attributes' => array(
        'title' => 'Administer blocks, content types, menus, etc.',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '-8',
    'parent_path' => 'admin',
  );
  // Exported menu link: management:admin/structure/block
  $menu_links['management:admin/structure/block'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/block',
    'router_path' => 'admin/structure/block',
    'link_title' => 'Blocks',
    'options' => array(
      'attributes' => array(
        'title' => 'Configure what block content appears in your site\'s sidebars and other regions.',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'admin/structure',
  );
  // Exported menu link: management:admin/structure/features
  $menu_links['management:admin/structure/features'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/features',
    'router_path' => 'admin/structure/features',
    'link_title' => 'Features',
    'options' => array(
      'attributes' => array(
        'title' => 'Manage features.',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'admin/structure',
  );
  // Exported menu link: management:admin/structure/forum
  $menu_links['management:admin/structure/forum'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/forum',
    'router_path' => 'admin/structure/forum',
    'link_title' => 'Forums',
    'options' => array(
      'attributes' => array(
        'title' => 'Control forum hierarchy settings.',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'admin/structure',
  );
  // Exported menu link: management:admin/structure/menu
  $menu_links['management:admin/structure/menu'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/menu',
    'router_path' => 'admin/structure/menu',
    'link_title' => 'Menus',
    'options' => array(
      'attributes' => array(
        'title' => 'Add new menus to your site, edit existing menus, and rename and reorganize menu links.',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'admin/structure',
  );
  // Exported menu link: management:admin/structure/menu/manage/main-menu
  $menu_links['management:admin/structure/menu/manage/main-menu'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/menu/manage/main-menu',
    'router_path' => 'admin/structure/menu/manage/%',
    'link_title' => 'Menu principal',
    'options' => array(),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'admin/structure/menu',
  );
  // Exported menu link: management:admin/structure/menu/manage/management
  $menu_links['management:admin/structure/menu/manage/management'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/menu/manage/management',
    'router_path' => 'admin/structure/menu/manage/%',
    'link_title' => 'Management',
    'options' => array(),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'admin/structure/menu',
  );
  // Exported menu link: management:admin/structure/menu/manage/navigation
  $menu_links['management:admin/structure/menu/manage/navigation'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/menu/manage/navigation',
    'router_path' => 'admin/structure/menu/manage/%',
    'link_title' => 'Navigation',
    'options' => array(),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'admin/structure/menu',
  );
  // Exported menu link: management:admin/structure/menu/manage/user-menu
  $menu_links['management:admin/structure/menu/manage/user-menu'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/menu/manage/user-menu',
    'router_path' => 'admin/structure/menu/manage/%',
    'link_title' => 'User menu',
    'options' => array(),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'admin/structure/menu',
  );
  // Exported menu link: management:admin/structure/taxonomy
  $menu_links['management:admin/structure/taxonomy'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/taxonomy',
    'router_path' => 'admin/structure/taxonomy',
    'link_title' => 'Taxonomy',
    'options' => array(
      'attributes' => array(
        'title' => 'Manage tagging, categorization, and classification of your content.',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'admin/structure',
  );
  // Exported menu link: management:admin/structure/types
  $menu_links['management:admin/structure/types'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/types',
    'router_path' => 'admin/structure/types',
    'link_title' => 'Content types',
    'options' => array(
      'attributes' => array(
        'title' => 'Manage content types, including default status, front page promotion, comment settings, etc.',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'admin/structure',
  );
  // Exported menu link: navigation:filter/tips
  $menu_links['navigation:filter/tips'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'filter/tips',
    'router_path' => 'filter/tips',
    'link_title' => 'Compose tips',
    'options' => array(),
    'module' => 'system',
    'hidden' => '1',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Exported menu link: navigation:forum
  $menu_links['navigation:forum'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'forum',
    'router_path' => 'forum',
    'link_title' => 'Forums',
    'options' => array(),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '0',
  );
  // Exported menu link: navigation:node/add
  $menu_links['navigation:node/add'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add',
    'router_path' => 'node/add',
    'link_title' => 'Add content',
    'options' => array(),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '0',
  );
  // Exported menu link: navigation:node/add/article
  $menu_links['navigation:node/add/article'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/article',
    'router_path' => 'node/add/article',
    'link_title' => 'Article',
    'options' => array(
      'attributes' => array(
        'title' => 'Utilisez les <em>articles</em> pour des contenus possédant une temporalité tels que des actualités, des communiqués de presse ou des billets de blog.',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'node/add',
  );
  // Exported menu link: navigation:node/add/forum
  $menu_links['navigation:node/add/forum'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/forum',
    'router_path' => 'node/add/forum',
    'link_title' => 'Forum topic',
    'options' => array(
      'attributes' => array(
        'title' => 'A <em>forum topic</em> starts a new discussion thread within a forum.',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'node/add',
  );
  // Exported menu link: navigation:node/add/page
  $menu_links['navigation:node/add/page'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/page',
    'router_path' => 'node/add/page',
    'link_title' => 'Page de base',
    'options' => array(
      'attributes' => array(
        'title' => 'Utilisez les <em>pages de base</em> pour votre contenu statique, tel que la page \'Qui sommes-nous\'.',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'node/add',
  );
  // Exported menu link: navigation:search
  $menu_links['navigation:search'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'search',
    'router_path' => 'search',
    'link_title' => 'Search',
    'options' => array(),
    'module' => 'system',
    'hidden' => '1',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Exported menu link: user-menu:user
  $menu_links['user-menu:user'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'user',
    'router_path' => 'user',
    'link_title' => 'User account',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-10',
  );
  // Exported menu link: user-menu:user/logout
  $menu_links['user-menu:user/logout'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'user/logout',
    'router_path' => 'user/logout',
    'link_title' => 'Log out',
    'options' => array(),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '10',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Account settings');
  t('Accueil');
  t('Actions');
  t('Add content');
  t('Administration');
  t('Appearance');
  t('Article');
  t('Available updates');
  t('Blocks');
  t('Clean URLs');
  t('Comments');
  t('Compose tips');
  t('Configuration');
  t('Content');
  t('Content authoring');
  t('Content types');
  t('Cron');
  t('Dashboard');
  t('Date and time');
  t('Development');
  t('Features');
  t('Field list');
  t('File system');
  t('Forum topic');
  t('Forums');
  t('Help');
  t('IP address blocking');
  t('Image styles');
  t('Image toolkit');
  t('Languages');
  t('Log out');
  t('Logging and errors');
  t('Maintenance mode');
  t('Management');
  t('Media');
  t('Menu principal');
  t('Menus');
  t('Modules');
  t('Navigation');
  t('Page de base');
  t('People');
  t('Performance');
  t('RSS publishing');
  t('Recent log messages');
  t('Regional and language');
  t('Regional settings');
  t('Reports');
  t('Search');
  t('Search and metadata');
  t('Search settings');
  t('Shortcuts');
  t('Site information');
  t('Status report');
  t('Structure');
  t('System');
  t('Taxonomy');
  t('Text formats');
  t('Top \'access denied\' errors');
  t('Top \'page not found\' errors');
  t('Top search phrases');
  t('Translate interface');
  t('URL aliases');
  t('User account');
  t('User interface');
  t('User menu');
  t('Web services');
  t('Workflow');


  return $menu_links;
}
