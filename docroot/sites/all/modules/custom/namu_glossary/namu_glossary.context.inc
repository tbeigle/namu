<?php
/**
 * @file
 * namu_glossary.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function namu_glossary_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'glossary';
  $context->description = '';
  $context->tag = 'theme';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'node/10' => 'node/10',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'boxes-subhead_glossary' => array(
          'module' => 'boxes',
          'delta' => 'subhead_glossary',
          'region' => 'subhead',
          'weight' => '-10',
        ),
        'boxes-banner_glossary' => array(
          'module' => 'boxes',
          'delta' => 'banner_glossary',
          'region' => 'sidebar',
          'weight' => '-10',
        ),
        'boxes-glossary_disclaimer' => array(
          'module' => 'boxes',
          'delta' => 'glossary_disclaimer',
          'region' => 'content',
          'weight' => '10',
        ),
      ),
    ),
    'theme_html' => array(
      'class' => 'namu-page-glossary has-left-banner',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('theme');
  $export['glossary'] = $context;

  return $export;
}
