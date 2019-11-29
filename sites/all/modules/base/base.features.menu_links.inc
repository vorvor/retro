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

  // Exported menu link: main-menu_dalok:frontpage.
  $menu_links['main-menu_dalok:frontpage'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'frontpage',
    'router_path' => 'frontpage',
    'link_title' => 'Dalok',
    'options' => array(
      'identifier' => 'main-menu_dalok:frontpage',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: main-menu_eladk:eloadok.
  $menu_links['main-menu_eladk:eloadok'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'eloadok',
    'router_path' => 'eloadok',
    'link_title' => 'Előadók',
    'options' => array(
      'identifier' => 'main-menu_eladk:eloadok',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: main-menu_esemnyek:esemenyek.
  $menu_links['main-menu_esemnyek:esemenyek'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'esemenyek',
    'router_path' => 'esemenyek',
    'link_title' => 'Események',
    'options' => array(
      'identifier' => 'main-menu_esemnyek:esemenyek',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
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
  // Exported menu link: main-menu_hrek:hirek.
  $menu_links['main-menu_hrek:hirek'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'hirek',
    'router_path' => 'hirek',
    'link_title' => 'Hírek',
    'options' => array(
      'identifier' => 'main-menu_hrek:hirek',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Dalok');
  t('Előadók');
  t('Események');
  t('Home');
  t('Hírek');

  return $menu_links;
}
