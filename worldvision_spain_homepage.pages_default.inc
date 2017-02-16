<?php
/**
 * @file
 * worldvision_spain_homepage.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function worldvision_spain_homepage_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'wv_homepage';
  $page->task = 'page';
  $page->admin_title = 'Homepage';
  $page->admin_description = '';
  $page->path = 'inicio';
  $page->access = array();
  $page->menu = array(
    'type' => 'none',
    'title' => 'Inicio',
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
  $handler->name = 'page_wv_homepage__panel_context_0b53bc10-412d-4f57-ba82-58d70976030f';
  $handler->task = 'page';
  $handler->subtask = 'wv_homepage';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => '',
  );
  $display = new panels_display();
  $display->layout = 'bootstrap_twocol_stacked';
  $display->layout_settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 'main',
          1 => 1,
        ),
        'parent' => NULL,
      ),
      'main' => array(
        'type' => 'column',
        'width' => '50',
        'width_type' => '%',
        'children' => array(
          0 => 'main-row',
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'left_region',
        ),
        'parent' => 'main',
      ),
      1 => array(
        'type' => 'column',
        'width' => '50',
        'width_type' => '%',
        'parent' => 'canvas',
        'children' => array(
          0 => 2,
          1 => 3,
        ),
        'class' => '',
        'hide_empty' => 0,
      ),
      'left_region' => array(
        'type' => 'region',
        'title' => 'Left Region',
        'width' => 100,
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
        'hide_empty' => 0,
      ),
      2 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'featured_top',
        ),
        'parent' => '1',
        'class' => '',
        'hide_empty' => 0,
      ),
      'featured_top' => array(
        'type' => 'region',
        'title' => 'Featured Top',
        'width' => 100,
        'width_type' => '%',
        'parent' => '2',
        'class' => '',
        'hide_empty' => 0,
      ),
      3 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'featured_bottom',
        ),
        'parent' => '1',
        'class' => '',
        'hide_empty' => 0,
      ),
      'featured_bottom' => array(
        'type' => 'region',
        'title' => 'Featured Bottom',
        'width' => 100,
        'width_type' => '%',
        'parent' => '3',
        'class' => '',
        'hide_empty' => 0,
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => array(),
      'center' => NULL,
      'left_region' => NULL,
      'featured_top' => NULL,
      'featured_bottom' => NULL,
      'top' => NULL,
      'left' => array(
        'column_type' => 'col-md',
        'column_size' => '8',
        'offset_type' => 'col-lg-offset',
        'offset_size' => '0',
      ),
      'right' => array(
        'column_type' => 'col-md',
        'column_size' => '4',
        'offset_type' => 'col-lg-offset',
        'offset_size' => '0',
      ),
      'bottom' => array(
        'column_type' => 'col-lg',
        'column_size' => '12',
        'offset_type' => 'col-lg-offset',
        'offset_size' => '0',
      ),
    ),
    'center' => array(
      'style' => '-1',
    ),
    'left' => array(
      'style' => 'bootstrap_region',
    ),
    'right' => array(
      'style' => 'bootstrap_region',
    ),
    'bottom' => array(
      'style' => 'bootstrap_region',
    ),
    'style' => 'bootstrap_region',
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '6d125a57-1bed-4a87-af5a-62c578ca217b';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-17b186cc-a0c2-400c-958f-3f390fd09b96';
    $pane->panel = 'bottom';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<h2 class="lead lead-primary text-center">Somos la ONG de infancia más grande del mundo</h2>',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'default',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '17b186cc-a0c2-400c-958f-3f390fd09b96';
    $display->content['new-17b186cc-a0c2-400c-958f-3f390fd09b96'] = $pane;
    $display->panels['bottom'][0] = 'new-17b186cc-a0c2-400c-958f-3f390fd09b96';
    $pane = new stdClass();
    $pane->pid = 'new-c84973ba-f1a1-4195-9934-6effa56694a8';
    $pane->panel = 'bottom';
    $pane->type = 'block';
    $pane->subtype = 'views-wv_latest_news-block';
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'c84973ba-f1a1-4195-9934-6effa56694a8';
    $display->content['new-c84973ba-f1a1-4195-9934-6effa56694a8'] = $pane;
    $display->panels['bottom'][1] = 'new-c84973ba-f1a1-4195-9934-6effa56694a8';
    $pane = new stdClass();
    $pane->pid = 'new-cb5667a8-1f7b-4d21-905a-cc1d2c27aafb';
    $pane->panel = 'bottom';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<h2 class="lead lead-primary text-center">Por una infancia sin violencia</h2>',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'cb5667a8-1f7b-4d21-905a-cc1d2c27aafb';
    $display->content['new-cb5667a8-1f7b-4d21-905a-cc1d2c27aafb'] = $pane;
    $display->panels['bottom'][2] = 'new-cb5667a8-1f7b-4d21-905a-cc1d2c27aafb';
    $pane = new stdClass();
    $pane->pid = 'new-4e68f5f6-dbcf-431d-9f54-ab5ea52eded2';
    $pane->panel = 'bottom';
    $pane->type = 'block';
    $pane->subtype = 'views-wv_transparency_slider-block';
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
    $pane->uuid = '4e68f5f6-dbcf-431d-9f54-ab5ea52eded2';
    $display->content['new-4e68f5f6-dbcf-431d-9f54-ab5ea52eded2'] = $pane;
    $display->panels['bottom'][3] = 'new-4e68f5f6-dbcf-431d-9f54-ab5ea52eded2';
    $pane = new stdClass();
    $pane->pid = 'new-bc81d397-dba3-4d66-87c3-67cdc66ad100';
    $pane->panel = 'left';
    $pane->type = 'block';
    $pane->subtype = 'views-wv_child_slider-block';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Apadrina a un niño',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'banner banner-primary',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'bc81d397-dba3-4d66-87c3-67cdc66ad100';
    $display->content['new-bc81d397-dba3-4d66-87c3-67cdc66ad100'] = $pane;
    $display->panels['left'][0] = 'new-bc81d397-dba3-4d66-87c3-67cdc66ad100';
    $pane = new stdClass();
    $pane->pid = 'new-faef3e6a-3672-4ce0-ae83-9006bf2e4e7b';
    $pane->panel = 'left';
    $pane->type = 'block';
    $pane->subtype = 'views--exp-wv_child_slider-page_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
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
    $pane->uuid = 'faef3e6a-3672-4ce0-ae83-9006bf2e4e7b';
    $display->content['new-faef3e6a-3672-4ce0-ae83-9006bf2e4e7b'] = $pane;
    $display->panels['left'][1] = 'new-faef3e6a-3672-4ce0-ae83-9006bf2e4e7b';
    $pane = new stdClass();
    $pane->pid = 'new-85a8115f-bbd8-4ab2-a7ac-ff5587abb217';
    $pane->panel = 'right';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => 'Regalo Solidario',
      'body' => '<p class="lead">Algunos regalos pueden cambiar vidas</p><p class="banner-cta"><a class="btn btn-primary" href="/regalos-solidarios">Descúbrelos!</a></p>',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'regalo-solidario',
      'css_class' => 'banner banner-secondary',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '85a8115f-bbd8-4ab2-a7ac-ff5587abb217';
    $display->content['new-85a8115f-bbd8-4ab2-a7ac-ff5587abb217'] = $pane;
    $display->panels['right'][0] = 'new-85a8115f-bbd8-4ab2-a7ac-ff5587abb217';
    $pane = new stdClass();
    $pane->pid = 'new-db589a3c-4327-4c53-b839-fd9b52f00892';
    $pane->panel = 'right';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Banner Inferior',
      'title' => 'Por una infancia sin violencia',
      'body' => '<p class="banner-cta"><a class="btn btn-primary" href="/porunainfanciasinviolencia#tab1-1">Hazte socio</a></p>',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'banner-secondary-bottom',
      'css_class' => 'banner banner-secondary',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'db589a3c-4327-4c53-b839-fd9b52f00892';
    $display->content['new-db589a3c-4327-4c53-b839-fd9b52f00892'] = $pane;
    $display->panels['right'][1] = 'new-db589a3c-4327-4c53-b839-fd9b52f00892';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['wv_homepage'] = $page;

  return $pages;

}
