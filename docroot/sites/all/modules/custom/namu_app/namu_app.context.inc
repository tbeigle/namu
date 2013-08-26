<?php
/**
 * @file
 * namu_app.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function namu_app_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'applications_index';
  $context->description = '';
  $context->tag = 'theme';
  $context->conditions = array(
    'views' => array(
      'values' => array(
        'applications:page_applications' => 'applications:page_applications',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'boxes-subhead_applications' => array(
          'module' => 'boxes',
          'delta' => 'subhead_applications',
          'region' => 'subhead',
          'weight' => '-10',
        ),
        'boxes-marketing_materials' => array(
          'module' => 'boxes',
          'delta' => 'marketing_materials',
          'region' => 'content_bottom',
          'weight' => '-10',
        ),
      ),
    ),
    'theme_html' => array(
      'class' => 'namu-page-applications-index has-left-banner',
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('theme');
  $export['applications_index'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'forms';
  $context->description = '';
  $context->tag = 'theme';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'webform' => 'webform',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
  );
  $context->reactions = array(
    'theme_html' => array(
      'class' => 'namu-page-form',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('theme');
  $export['forms'] = $context;

  return $export;
}
