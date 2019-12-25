<?php

/**
 * @file
 * base.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function base_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_bug-report:node/add/bug.
  $menu_links['main-menu_bug-report:node/add/bug'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/add/bug',
    'router_path' => 'node/add/bug',
    'link_title' => 'Bug report',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_bug-report:node/add/bug',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: main-menu_eladk-zenekarok-menedzselse:admin/structure/taxonomy_manager/voc/artist.
  $menu_links['main-menu_eladk-zenekarok-menedzselse:admin/structure/taxonomy_manager/voc/artist'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'admin/structure/taxonomy_manager/voc/artist',
    'router_path' => 'admin/structure/taxonomy_manager/voc/%',
    'link_title' => 'Előadók, zenekarok menedzselése',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_eladk-zenekarok-menedzselse:admin/structure/taxonomy_manager/voc/artist',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: main-menu_home:<front>.
  $menu_links['main-menu_home:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Home',
    'options' => array(
      'identifier' => 'main-menu_home:<front>',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Bug report');
  t('Előadók, zenekarok menedzselése');
  t('Home');

  return $menu_links;
}
