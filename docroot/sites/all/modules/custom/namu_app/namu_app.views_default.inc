<?php
/**
 * @file
 * namu_app.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function namu_app_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'applications';
  $view->description = 'List of links to applications';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Applications';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Applications';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['class'] = 'applications-list no-style';
  $handler->display->display_options['style_options']['wrapper_class'] = 'applications-list-wrapper';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Hard Copy */
  $handler->display->display_options['fields']['field_app_hard_copy']['id'] = 'field_app_hard_copy';
  $handler->display->display_options['fields']['field_app_hard_copy']['table'] = 'field_data_field_app_hard_copy';
  $handler->display->display_options['fields']['field_app_hard_copy']['field'] = 'field_app_hard_copy';
  $handler->display->display_options['fields']['field_app_hard_copy']['label'] = '';
  $handler->display->display_options['fields']['field_app_hard_copy']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_app_hard_copy']['alter']['text'] = '<a href="[field_app_hard_copy]" target="_blank">[title]</a>';
  $handler->display->display_options['fields']['field_app_hard_copy']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_app_hard_copy']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_app_hard_copy']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_app_hard_copy']['type'] = 'file_url_plain';
  /* Sort criterion: Content: Priority (field_app_priority) */
  $handler->display->display_options['sorts']['field_app_priority_value']['id'] = 'field_app_priority_value';
  $handler->display->display_options['sorts']['field_app_priority_value']['table'] = 'field_data_field_app_priority';
  $handler->display->display_options['sorts']['field_app_priority_value']['field'] = 'field_app_priority_value';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'webform' => 'webform',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_applications');
  $handler->display->display_options['path'] = 'applications';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Applications & Marketing Materials';
  $handler->display->display_options['menu']['weight'] = '2';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['applications'] = $view;

  return $export;
}
