<?php
/**
 * @file
 * namu_about.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function namu_about_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'about_us';
  $context->description = '';
  $context->tag = 'theme';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'node/8' => 'node/8',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-namu_twitter_feed-block' => array(
          'module' => 'views',
          'delta' => 'namu_twitter_feed-block',
          'region' => 'content_bottom',
          'weight' => '-10',
        ),
      ),
    ),
    'theme_html' => array(
      'class' => 'namu-page-about-us has-left-banner',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('theme');
  $export['about_us'] = $context;

  return $export;
}
