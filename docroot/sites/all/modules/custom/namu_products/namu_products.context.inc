<?php
/**
 * @file
 * namu_products.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function namu_products_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'products_services';
  $context->description = '';
  $context->tag = 'theme';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'node/9' => 'node/9',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'boxes-products_programs' => array(
          'module' => 'boxes',
          'delta' => 'products_programs',
          'region' => 'content_bottom',
          'weight' => '-10',
        ),
      ),
    ),
    'theme_html' => array(
      'class' => 'namu-page-products-services has-top-banner',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('theme');
  $export['products_services'] = $context;

  return $export;
}
