<?php
/**
 * @file
 * namu_about.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function namu_about_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'namu_twitter_feed';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'twitter';
  $view->human_name = 'NAMU Twitter Feed';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'NAMU Twitter Feed';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['class'] = 'twitter-feed';
  $handler->display->display_options['style_options']['wrapper_class'] = 'twitter-feed-wrapper';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Twitter: Login name */
  $handler->display->display_options['fields']['screen_name']['id'] = 'screen_name';
  $handler->display->display_options['fields']['screen_name']['table'] = 'twitter';
  $handler->display->display_options['fields']['screen_name']['field'] = 'screen_name';
  $handler->display->display_options['fields']['screen_name']['label'] = '';
  $handler->display->display_options['fields']['screen_name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['screen_name']['alter']['text'] = '<a class="tweet-at" href="http://twitter.com/intent/user?screen_name=[screen_name]" target="_blank">@[screen_name]</a>';
  $handler->display->display_options['fields']['screen_name']['element_type'] = '0';
  $handler->display->display_options['fields']['screen_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['screen_name']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['screen_name']['element_default_classes'] = FALSE;
  /* Field: Twitter: Message text */
  $handler->display->display_options['fields']['text']['id'] = 'text';
  $handler->display->display_options['fields']['text']['table'] = 'twitter';
  $handler->display->display_options['fields']['text']['field'] = 'text';
  $handler->display->display_options['fields']['text']['label'] = '';
  $handler->display->display_options['fields']['text']['alter']['max_length'] = '35';
  $handler->display->display_options['fields']['text']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['text']['alter']['html'] = TRUE;
  $handler->display->display_options['fields']['text']['element_type'] = '0';
  $handler->display->display_options['fields']['text']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['text']['element_wrapper_type'] = 'span';
  $handler->display->display_options['fields']['text']['element_wrapper_class'] = 'tweet-copy';
  $handler->display->display_options['fields']['text']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['text']['link_urls'] = 0;
  $handler->display->display_options['fields']['text']['link_usernames'] = 0;
  $handler->display->display_options['fields']['text']['link_hashtags'] = 0;
  $handler->display->display_options['fields']['text']['link_attributes'] = 0;
  /* Field: Twitter: Created time */
  $handler->display->display_options['fields']['created_time']['id'] = 'created_time';
  $handler->display->display_options['fields']['created_time']['table'] = 'twitter';
  $handler->display->display_options['fields']['created_time']['field'] = 'created_time';
  $handler->display->display_options['fields']['created_time']['label'] = '';
  $handler->display->display_options['fields']['created_time']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created_time']['element_wrapper_type'] = 'span';
  $handler->display->display_options['fields']['created_time']['element_wrapper_class'] = 'twitter-date';
  $handler->display->display_options['fields']['created_time']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['created_time']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created_time']['custom_date_format'] = 'F j, Y';
  /* Sort criterion: Twitter: Created time */
  $handler->display->display_options['sorts']['created_time']['id'] = 'created_time';
  $handler->display->display_options['sorts']['created_time']['table'] = 'twitter';
  $handler->display->display_options['sorts']['created_time']['field'] = 'created_time';
  $handler->display->display_options['sorts']['created_time']['order'] = 'DESC';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['block_description'] = 'NAMU Twitter Feed';
  $export['namu_twitter_feed'] = $view;

  return $export;
}
