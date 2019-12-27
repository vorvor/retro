<?php

/**
 * @file
 * base.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function base_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__panel_context_17e35b2a-ec2c-4d4c-84e2-03ea131112f1';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 2;
  $handler->conf = array(
    'title' => 'Then and now',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(
      0 => array(
        'identifier' => 'Taxonomy term from Node (on Node: Artist [field_artist])',
        'keyword' => 'taxonomy_term',
        'name' => 'entity_from_field:field_artist-node-taxonomy_term',
        'delta' => '0',
        'context' => 'argument_entity_id:node_1',
        'id' => 1,
      ),
    ),
    'name' => '',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'then_and_now' => 'then_and_now',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'ca854d44-af0f-46f8-9a98-b1095539782c';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'node_view__panel_context_17e35b2a-ec2c-4d4c-84e2-03ea131112f1';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-d3210146-cb74-4eb0-b32d-2196d3deca13';
  $pane->panel = 'center';
  $pane->type = 'node_content';
  $pane->subtype = 'node_content';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'links' => 1,
    'no_extras' => 1,
    'override_title' => 0,
    'override_title_text' => '',
    'identifier' => '',
    'link' => 1,
    'leave_node_title' => 0,
    'build_mode' => 'full',
    'context' => 'argument_entity_id:node_1',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'd3210146-cb74-4eb0-b32d-2196d3deca13';
  $display->content['new-d3210146-cb74-4eb0-b32d-2196d3deca13'] = $pane;
  $display->panels['center'][0] = 'new-d3210146-cb74-4eb0-b32d-2196d3deca13';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-d3210146-cb74-4eb0-b32d-2196d3deca13';
  $handler->conf['display'] = $display;
  $export['node_view__panel_context_17e35b2a-ec2c-4d4c-84e2-03ea131112f1'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__panel_context_60c26cc6-005a-427f-87b2-124ca5bf38c9';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 1;
  $handler->conf = array(
    'title' => 'Article',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => '',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'entity_bundle:node',
          'settings' => array(
            'type' => array(
              'article' => 'article',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '26ce35ec-3c8d-48db-b7f7-74be52cb36fb';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'node_view__panel_context_60c26cc6-005a-427f-87b2-124ca5bf38c9';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-5491706a-2c25-48f9-b9e9-6269fae454cf';
  $pane->panel = 'center';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_lead';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '5491706a-2c25-48f9-b9e9-6269fae454cf';
  $display->content['new-5491706a-2c25-48f9-b9e9-6269fae454cf'] = $pane;
  $display->panels['center'][0] = 'new-5491706a-2c25-48f9-b9e9-6269fae454cf';
  $pane = new stdClass();
  $pane->pid = 'new-36549cc5-53a7-4b2c-ab69-5f845b43655a';
  $pane->panel = 'center';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_images';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'image',
    'delta_limit' => '0',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter_settings' => array(
      'image_style' => '',
      'image_link' => '',
    ),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '36549cc5-53a7-4b2c-ab69-5f845b43655a';
  $display->content['new-36549cc5-53a7-4b2c-ab69-5f845b43655a'] = $pane;
  $display->panels['center'][1] = 'new-36549cc5-53a7-4b2c-ab69-5f845b43655a';
  $pane = new stdClass();
  $pane->pid = 'new-87d2a5da-0cb9-4c1a-873a-7e63da1d7cf3';
  $pane->panel = 'center';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_body';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '87d2a5da-0cb9-4c1a-873a-7e63da1d7cf3';
  $display->content['new-87d2a5da-0cb9-4c1a-873a-7e63da1d7cf3'] = $pane;
  $display->panels['center'][2] = 'new-87d2a5da-0cb9-4c1a-873a-7e63da1d7cf3';
  $pane = new stdClass();
  $pane->pid = 'new-b7702379-b407-4599-b6fd-82bb8037ad43';
  $pane->panel = 'center';
  $pane->type = 'views_panes';
  $pane->subtype = 'article_song-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => array(
      0 => 'argument_entity_id:node_1',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = 'b7702379-b407-4599-b6fd-82bb8037ad43';
  $display->content['new-b7702379-b407-4599-b6fd-82bb8037ad43'] = $pane;
  $display->panels['center'][3] = 'new-b7702379-b407-4599-b6fd-82bb8037ad43';
  $pane = new stdClass();
  $pane->pid = 'new-a495f983-1dcd-4c39-ac7b-c92f7ad1d0a6';
  $pane->panel = 'center';
  $pane->type = 'views_panes';
  $pane->subtype = 'articles_current_excluded-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => array(
      0 => 'empty',
    ),
    'arguments' => array(
      'nid' => '%node:nid',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = 'a495f983-1dcd-4c39-ac7b-c92f7ad1d0a6';
  $display->content['new-a495f983-1dcd-4c39-ac7b-c92f7ad1d0a6'] = $pane;
  $display->panels['center'][4] = 'new-a495f983-1dcd-4c39-ac7b-c92f7ad1d0a6';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view__panel_context_60c26cc6-005a-427f-87b2-124ca5bf38c9'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__panel_context_a15c6e91-89c3-4c89-bf5b-76c90f135fcd';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Song',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => '',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'song' => 'song',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '55a2eef7-3660-4676-ba18-b93a1a733af5';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'node_view__panel_context_a15c6e91-89c3-4c89-bf5b-76c90f135fcd';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-5a749744-92c5-47f2-a9c0-e8e07223b8cd';
  $pane->panel = 'center';
  $pane->type = 'views_panes';
  $pane->subtype = 'song-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '5a749744-92c5-47f2-a9c0-e8e07223b8cd';
  $display->content['new-5a749744-92c5-47f2-a9c0-e8e07223b8cd'] = $pane;
  $display->panels['center'][0] = 'new-5a749744-92c5-47f2-a9c0-e8e07223b8cd';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view__panel_context_a15c6e91-89c3-4c89-bf5b-76c90f135fcd'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'site_template__panel_context_19e4b921-ae46-412c-b585-3c0c9558be75';
  $handler->task = 'site_template';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'front',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => '',
  );
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 'main',
        ),
        'parent' => NULL,
      ),
      'main' => array(
        'type' => 'column',
        'width' => 100,
        'width_type' => '%',
        'children' => array(
          0 => 1,
          1 => 'main-row',
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'center',
        ),
        'parent' => 'main',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Center',
        'width' => 100,
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => 'region-center-wrapper',
        'hide_empty' => 0,
      ),
      1 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'header',
        ),
        'parent' => 'main',
        'class' => 'header',
        'hide_empty' => 0,
      ),
      'header' => array(
        'type' => 'region',
        'title' => 'header',
        'width' => 100,
        'width_type' => '%',
        'parent' => '1',
        'class' => 'header',
        'hide_empty' => 0,
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'header' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'bfc01730-a647-4c9d-943a-55ab4269f53d';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'site_template__panel_context_19e4b921-ae46-412c-b585-3c0c9558be75';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-f8e106be-633c-42c4-b4b9-2806fd5178f3';
  $pane->panel = 'center';
  $pane->type = 'page_messages';
  $pane->subtype = 'page_messages';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'f8e106be-633c-42c4-b4b9-2806fd5178f3';
  $display->content['new-f8e106be-633c-42c4-b4b9-2806fd5178f3'] = $pane;
  $display->panels['center'][0] = 'new-f8e106be-633c-42c4-b4b9-2806fd5178f3';
  $pane = new stdClass();
  $pane->pid = 'new-a7121b76-7f6b-4856-a438-a75e35f4187d';
  $pane->panel = 'center';
  $pane->type = 'page_tabs';
  $pane->subtype = 'page_tabs';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'type' => 'both',
    'id' => 'tabs',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'a7121b76-7f6b-4856-a438-a75e35f4187d';
  $display->content['new-a7121b76-7f6b-4856-a438-a75e35f4187d'] = $pane;
  $display->panels['center'][1] = 'new-a7121b76-7f6b-4856-a438-a75e35f4187d';
  $pane = new stdClass();
  $pane->pid = 'new-64eac863-bb9e-4c74-b505-fd7f58018f31';
  $pane->panel = 'center';
  $pane->type = 'page_content';
  $pane->subtype = 'page_content';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => 'argument_page_content_1',
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => 'panels-main-content',
    'css_class' => '',
  );
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '64eac863-bb9e-4c74-b505-fd7f58018f31';
  $display->content['new-64eac863-bb9e-4c74-b505-fd7f58018f31'] = $pane;
  $display->panels['center'][2] = 'new-64eac863-bb9e-4c74-b505-fd7f58018f31';
  $pane = new stdClass();
  $pane->pid = 'new-9ab047bd-843d-4d80-bc7c-b3b63b9f43df';
  $pane->panel = 'header';
  $pane->type = 'page_logo';
  $pane->subtype = 'page_logo';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '9ab047bd-843d-4d80-bc7c-b3b63b9f43df';
  $display->content['new-9ab047bd-843d-4d80-bc7c-b3b63b9f43df'] = $pane;
  $display->panels['header'][0] = 'new-9ab047bd-843d-4d80-bc7c-b3b63b9f43df';
  $pane = new stdClass();
  $pane->pid = 'new-43f299c3-00be-4229-b3fe-4413ea5229e1';
  $pane->panel = 'header';
  $pane->type = 'page_site_name';
  $pane->subtype = 'page_site_name';
  $pane->shown = FALSE;
  $pane->access = array();
  $pane->configuration = array(
    'linked' => 0,
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '43f299c3-00be-4229-b3fe-4413ea5229e1';
  $display->content['new-43f299c3-00be-4229-b3fe-4413ea5229e1'] = $pane;
  $display->panels['header'][1] = 'new-43f299c3-00be-4229-b3fe-4413ea5229e1';
  $pane = new stdClass();
  $pane->pid = 'new-481ec8c6-151a-4066-a0fe-06cf6f2bcd01';
  $pane->panel = 'header';
  $pane->type = 'page_slogan';
  $pane->subtype = 'page_slogan';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '481ec8c6-151a-4066-a0fe-06cf6f2bcd01';
  $display->content['new-481ec8c6-151a-4066-a0fe-06cf6f2bcd01'] = $pane;
  $display->panels['header'][2] = 'new-481ec8c6-151a-4066-a0fe-06cf6f2bcd01';
  $pane = new stdClass();
  $pane->pid = 'new-5dce4caa-4006-4c8e-8241-d54f589e3ef4';
  $pane->panel = 'header';
  $pane->type = 'block';
  $pane->subtype = 'system-main-menu';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '5dce4caa-4006-4c8e-8241-d54f589e3ef4';
  $display->content['new-5dce4caa-4006-4c8e-8241-d54f589e3ef4'] = $pane;
  $display->panels['header'][3] = 'new-5dce4caa-4006-4c8e-8241-d54f589e3ef4';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-9ab047bd-843d-4d80-bc7c-b3b63b9f43df';
  $handler->conf['display'] = $display;
  $export['site_template__panel_context_19e4b921-ae46-412c-b585-3c0c9558be75'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'term_view__panel_context_2f2948ca-2bba-4ff9-a1f4-36a1b89cd392';
  $handler->task = 'term_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Artist page',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => '',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'entity_bundle:taxonomy_term',
          'settings' => array(
            'type' => array(
              'artist' => 'artist',
            ),
          ),
          'context' => 'argument_term_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%term:name';
  $display->uuid = 'f527ec2a-8a8f-493d-9db1-3828e34e3c5c';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'term_view__panel_context_2f2948ca-2bba-4ff9-a1f4-36a1b89cd392';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-fc360291-c75e-43d8-b6e5-86f67631ddb0';
  $pane->panel = 'center';
  $pane->type = 'entity_field';
  $pane->subtype = 'taxonomy_term:field_images';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'title',
    'formatter' => 'image',
    'delta_limit' => '1',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter_settings' => array(
      'image_style' => '',
      'image_link' => '',
    ),
    'context' => 'argument_term_1',
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'fc360291-c75e-43d8-b6e5-86f67631ddb0';
  $display->content['new-fc360291-c75e-43d8-b6e5-86f67631ddb0'] = $pane;
  $display->panels['center'][0] = 'new-fc360291-c75e-43d8-b6e5-86f67631ddb0';
  $pane = new stdClass();
  $pane->pid = 'new-e613250f-c240-4851-b10d-2e72ea727900';
  $pane->panel = 'center';
  $pane->type = 'entity_field';
  $pane->subtype = 'taxonomy_term:field_body';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_term_1',
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'e613250f-c240-4851-b10d-2e72ea727900';
  $display->content['new-e613250f-c240-4851-b10d-2e72ea727900'] = $pane;
  $display->panels['center'][1] = 'new-e613250f-c240-4851-b10d-2e72ea727900';
  $pane = new stdClass();
  $pane->pid = 'new-677bd14d-abac-4466-bb5e-c855d8b240e9';
  $pane->panel = 'center';
  $pane->type = 'views_panes';
  $pane->subtype = 'artist_hits-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => array(
      0 => 'argument_term_1',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '677bd14d-abac-4466-bb5e-c855d8b240e9';
  $display->content['new-677bd14d-abac-4466-bb5e-c855d8b240e9'] = $pane;
  $display->panels['center'][2] = 'new-677bd14d-abac-4466-bb5e-c855d8b240e9';
  $pane = new stdClass();
  $pane->pid = 'new-06319d35-b2dd-4e56-8972-f89f5f1b5874';
  $pane->panel = 'center';
  $pane->type = 'entity_field';
  $pane->subtype = 'taxonomy_term:field_web';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'link_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_term_1',
    'override_title' => 1,
    'override_title_text' => '%term:name weboldala',
    'override_title_heading' => 'h3',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '06319d35-b2dd-4e56-8972-f89f5f1b5874';
  $display->content['new-06319d35-b2dd-4e56-8972-f89f5f1b5874'] = $pane;
  $display->panels['center'][3] = 'new-06319d35-b2dd-4e56-8972-f89f5f1b5874';
  $pane = new stdClass();
  $pane->pid = 'new-8a58cba1-9ef5-4faa-bbe3-cca4816f432f';
  $pane->panel = 'center';
  $pane->type = 'entity_field';
  $pane->subtype = 'taxonomy_term:field_youtube_channel';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'link_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_term_1',
    'override_title' => 1,
    'override_title_text' => '%term:name YouTube',
    'override_title_heading' => 'h3',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = '8a58cba1-9ef5-4faa-bbe3-cca4816f432f';
  $display->content['new-8a58cba1-9ef5-4faa-bbe3-cca4816f432f'] = $pane;
  $display->panels['center'][4] = 'new-8a58cba1-9ef5-4faa-bbe3-cca4816f432f';
  $pane = new stdClass();
  $pane->pid = 'new-1001641e-0dd2-4db0-88d5-13250aba3bbd';
  $pane->panel = 'center';
  $pane->type = 'entity_field';
  $pane->subtype = 'taxonomy_term:field_facebook';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'link_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_term_1',
    'override_title' => 1,
    'override_title_text' => '%term:name Facebook',
    'override_title_heading' => 'h3',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 5;
  $pane->locks = array();
  $pane->uuid = '1001641e-0dd2-4db0-88d5-13250aba3bbd';
  $display->content['new-1001641e-0dd2-4db0-88d5-13250aba3bbd'] = $pane;
  $display->panels['center'][5] = 'new-1001641e-0dd2-4db0-88d5-13250aba3bbd';
  $pane = new stdClass();
  $pane->pid = 'new-eb9ba286-ee05-484b-ac35-07ce7cdf595b';
  $pane->panel = 'center';
  $pane->type = 'entity_field';
  $pane->subtype = 'taxonomy_term:field_twitter';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'link_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_term_1',
    'override_title' => 1,
    'override_title_text' => '%term:name Twitter',
    'override_title_heading' => 'h3',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 6;
  $pane->locks = array();
  $pane->uuid = 'eb9ba286-ee05-484b-ac35-07ce7cdf595b';
  $display->content['new-eb9ba286-ee05-484b-ac35-07ce7cdf595b'] = $pane;
  $display->panels['center'][6] = 'new-eb9ba286-ee05-484b-ac35-07ce7cdf595b';
  $pane = new stdClass();
  $pane->pid = 'new-9bb891d4-7fc2-4052-9bdc-41414a672d2b';
  $pane->panel = 'center';
  $pane->type = 'entity_field';
  $pane->subtype = 'taxonomy_term:field_instagram';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'link_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_term_1',
    'override_title' => 1,
    'override_title_text' => '%term:name Instagram',
    'override_title_heading' => 'h3',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 7;
  $pane->locks = array();
  $pane->uuid = '9bb891d4-7fc2-4052-9bdc-41414a672d2b';
  $display->content['new-9bb891d4-7fc2-4052-9bdc-41414a672d2b'] = $pane;
  $display->panels['center'][7] = 'new-9bb891d4-7fc2-4052-9bdc-41414a672d2b';
  $pane = new stdClass();
  $pane->pid = 'new-52d05104-56b0-4265-b2ed-8904b3cb67dd';
  $pane->panel = 'center';
  $pane->type = 'views_panes';
  $pane->subtype = 'artist_events-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => array(
      0 => 'argument_term_1',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 8;
  $pane->locks = array();
  $pane->uuid = '52d05104-56b0-4265-b2ed-8904b3cb67dd';
  $display->content['new-52d05104-56b0-4265-b2ed-8904b3cb67dd'] = $pane;
  $display->panels['center'][8] = 'new-52d05104-56b0-4265-b2ed-8904b3cb67dd';
  $pane = new stdClass();
  $pane->pid = 'new-f12cf74b-c8d2-4fd0-95f4-ab9930045a64';
  $pane->panel = 'center';
  $pane->type = 'views_panes';
  $pane->subtype = 'artist_related_songs-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => array(
      0 => 'argument_term_1',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 9;
  $pane->locks = array();
  $pane->uuid = 'f12cf74b-c8d2-4fd0-95f4-ab9930045a64';
  $display->content['new-f12cf74b-c8d2-4fd0-95f4-ab9930045a64'] = $pane;
  $display->panels['center'][9] = 'new-f12cf74b-c8d2-4fd0-95f4-ab9930045a64';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-e613250f-c240-4851-b10d-2e72ea727900';
  $handler->conf['display'] = $display;
  $export['term_view__panel_context_2f2948ca-2bba-4ff9-a1f4-36a1b89cd392'] = $handler;

  return $export;
}

/**
 * Implements hook_default_page_manager_pages().
 */
function base_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'artists';
  $page->task = 'page';
  $page->admin_title = 'Artists';
  $page->admin_description = '';
  $page->path = 'eloadok';
  $page->access = array();
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Előadók',
    'name' => 'main-menu',
    'weight' => '0',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_artists__panel';
  $handler->task = 'page';
  $handler->subtask = 'artists';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'panel',
  );
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '4e78f0be-63d9-4604-965f-1fff36ce8efa';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_artists__panel';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-2b8ccb0e-0bea-4083-8a74-e7eba4f6fa62';
  $pane->panel = 'center';
  $pane->type = 'views_panes';
  $pane->subtype = 'artists-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '2b8ccb0e-0bea-4083-8a74-e7eba4f6fa62';
  $display->content['new-2b8ccb0e-0bea-4083-8a74-e7eba4f6fa62'] = $pane;
  $display->panels['center'][0] = 'new-2b8ccb0e-0bea-4083-8a74-e7eba4f6fa62';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['artists'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'events';
  $page->task = 'page';
  $page->admin_title = 'Events';
  $page->admin_description = '';
  $page->path = 'esemenyek';
  $page->access = array();
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Események',
    'name' => 'main-menu',
    'weight' => '0',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_events__panel';
  $handler->task = 'page';
  $handler->subtask = 'events';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'panel',
    'access' => array(
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'fce66e83-e9ae-4ab6-a274-16e638464483';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_events__panel';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-b0939820-3875-4f38-bc5a-41aafdcd50cc';
  $pane->panel = 'center';
  $pane->type = 'views_panes';
  $pane->subtype = 'events-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'b0939820-3875-4f38-bc5a-41aafdcd50cc';
  $display->content['new-b0939820-3875-4f38-bc5a-41aafdcd50cc'] = $pane;
  $display->panels['center'][0] = 'new-b0939820-3875-4f38-bc5a-41aafdcd50cc';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-b0939820-3875-4f38-bc5a-41aafdcd50cc';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['events'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'frontpage';
  $page->task = 'page';
  $page->admin_title = 'Frontpage';
  $page->admin_description = '';
  $page->path = 'frontpage';
  $page->access = array();
  $page->menu = array(
    'type' => 'none',
    'title' => 'Dalok',
    'name' => 'main-menu',
    'weight' => '0',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_frontpage__panel';
  $handler->task = 'page';
  $handler->subtask = 'frontpage';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'panel',
  );
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 'main',
        ),
        'parent' => NULL,
        'class' => 'bbb',
        'column_class' => '',
        'row_class' => '',
        'region_class' => '',
        'no_scale' => TRUE,
        'fixed_width' => '',
        'column_separation' => '0.5em',
        'region_separation' => '0.5em',
        'row_separation' => '0.5em',
        'hide_empty' => 0,
      ),
      'main' => array(
        'type' => 'column',
        'width' => 100,
        'width_type' => '%',
        'children' => array(
          0 => 'main-row',
          1 => 1,
        ),
        'parent' => 'canvas',
        'class' => 'aaa',
        'hide_empty' => 0,
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'center',
          1 => 'top_right',
        ),
        'parent' => 'main',
        'class' => 'front-page-top',
        'hide_empty' => 0,
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'top-left',
        'width' => '66.00774328047056',
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => 'front-page-top-left',
        'hide_empty' => 0,
      ),
      'top_right' => array(
        'type' => 'region',
        'title' => 'top right',
        'width' => '33.99225671952944',
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => 'front-page-top-right',
        'hide_empty' => 0,
      ),
      1 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'front_news',
        ),
        'parent' => 'main',
        'class' => '',
        'hide_empty' => 0,
      ),
      'front_news' => array(
        'type' => 'region',
        'title' => 'Front news',
        'width' => 100,
        'width_type' => '%',
        'parent' => '1',
        'class' => 'front-page-news',
        'hide_empty' => 0,
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'top_right' => NULL,
      'front_news' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '252571a8-1626-44cc-9f05-ddff861f7975';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_frontpage__panel';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-bc0073c1-b760-481b-a2cf-fe84b73fe76b';
  $pane->panel = 'center';
  $pane->type = 'views_panes';
  $pane->subtype = 'front_top_1_news-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => 'front-top-left',
    'css_class' => '',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'bc0073c1-b760-481b-a2cf-fe84b73fe76b';
  $display->content['new-bc0073c1-b760-481b-a2cf-fe84b73fe76b'] = $pane;
  $display->panels['center'][0] = 'new-bc0073c1-b760-481b-a2cf-fe84b73fe76b';
  $pane = new stdClass();
  $pane->pid = 'new-52a2d930-36aa-4d27-87c3-98d5959de7a1';
  $pane->panel = 'front_news';
  $pane->type = 'views_panes';
  $pane->subtype = 'articles_front-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '52a2d930-36aa-4d27-87c3-98d5959de7a1';
  $display->content['new-52a2d930-36aa-4d27-87c3-98d5959de7a1'] = $pane;
  $display->panels['front_news'][0] = 'new-52a2d930-36aa-4d27-87c3-98d5959de7a1';
  $pane = new stdClass();
  $pane->pid = 'new-b6643be9-2fb5-44ae-995b-e81712a6f0f5';
  $pane->panel = 'front_news';
  $pane->type = 'views_panes';
  $pane->subtype = 'front_events-panel_pane_2';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'b6643be9-2fb5-44ae-995b-e81712a6f0f5';
  $display->content['new-b6643be9-2fb5-44ae-995b-e81712a6f0f5'] = $pane;
  $display->panels['front_news'][1] = 'new-b6643be9-2fb5-44ae-995b-e81712a6f0f5';
  $pane = new stdClass();
  $pane->pid = 'new-d8a475f0-144a-4f64-9cf5-60b80dcd224d';
  $pane->panel = 'front_news';
  $pane->type = 'views_panes';
  $pane->subtype = 'articles_front-panel_pane_2';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'd8a475f0-144a-4f64-9cf5-60b80dcd224d';
  $display->content['new-d8a475f0-144a-4f64-9cf5-60b80dcd224d'] = $pane;
  $display->panels['front_news'][2] = 'new-d8a475f0-144a-4f64-9cf5-60b80dcd224d';
  $pane = new stdClass();
  $pane->pid = 'new-3b0574ea-cecb-41e6-a355-8690b40383a1';
  $pane->panel = 'top_right';
  $pane->type = 'views_panes';
  $pane->subtype = 'front_top_1_news-panel_pane_2';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => 'front-top-right',
    'css_class' => '',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '3b0574ea-cecb-41e6-a355-8690b40383a1';
  $display->content['new-3b0574ea-cecb-41e6-a355-8690b40383a1'] = $pane;
  $display->panels['top_right'][0] = 'new-3b0574ea-cecb-41e6-a355-8690b40383a1';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['frontpage'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'news';
  $page->task = 'page';
  $page->admin_title = 'Hírek';
  $page->admin_description = '';
  $page->path = 'hirek';
  $page->access = array();
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Hírek',
    'name' => 'main-menu',
    'weight' => '0',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_news__panel';
  $handler->task = 'page';
  $handler->subtask = 'news';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'panel',
  );
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '5c37bf5d-f1d4-4b60-b5f0-4aabcda5bbec';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_news__panel';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-da6ffc5a-2354-4e64-9c3a-849572802ef9';
  $pane->panel = 'center';
  $pane->type = 'views_panes';
  $pane->subtype = 'news-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'da6ffc5a-2354-4e64-9c3a-849572802ef9';
  $display->content['new-da6ffc5a-2354-4e64-9c3a-849572802ef9'] = $pane;
  $display->panels['center'][0] = 'new-da6ffc5a-2354-4e64-9c3a-849572802ef9';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-da6ffc5a-2354-4e64-9c3a-849572802ef9';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['news'] = $page;

  return $pages;

}
