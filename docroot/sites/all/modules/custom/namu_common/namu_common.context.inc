<?php
/**
 * @file
 * namu_common.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function namu_common_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'contact_us';
  $context->description = '';
  $context->tag = 'theme';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'contact-us' => 'contact-us',
      ),
    ),
  );
  $context->reactions = array(
    'theme_html' => array(
      'class' => 'namu-page-contact-us has-top-banner',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('theme');
  $export['contact_us'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'global';
  $context->description = 'Global elements, such as block placements.';
  $context->tag = 'common';
  $context->conditions = array(
    'sitewide' => array(
      'values' => array(
        1 => 1,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'system-main-menu' => array(
          'module' => 'system',
          'delta' => 'main-menu',
          'region' => 'nav',
          'weight' => '-10',
        ),
        'system-main' => array(
          'module' => 'system',
          'delta' => 'main',
          'region' => 'content',
          'weight' => '-10',
        ),
        'namu_site-footer' => array(
          'module' => 'namu_site',
          'delta' => 'footer',
          'region' => 'footer',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Global elements, such as block placements.');
  t('common');
  $export['global'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'home';
  $context->description = '';
  $context->tag = 'theme';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'namu_site-home_banner' => array(
          'module' => 'namu_site',
          'delta' => 'home_banner',
          'region' => 'content_top',
          'weight' => '-10',
        ),
        'namu_site-home_bio' => array(
          'module' => 'namu_site',
          'delta' => 'home_bio',
          'region' => 'content',
          'weight' => '-10',
        ),
        'namu_site-home_products' => array(
          'module' => 'namu_site',
          'delta' => 'home_products',
          'region' => 'content',
          'weight' => '-9',
        ),
      ),
    ),
    'theme_html' => array(
      'class' => 'namu-page-home',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('theme');
  $export['home'] = $context;

  return $export;
}
