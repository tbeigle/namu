<?php
/**
 * @file
 * namu_app.box.inc
 */

/**
 * Implements hook_default_box().
 */
function namu_app_default_box() {
  $export = array();

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'marketing_materials';
  $box->plugin_key = 'simple';
  $box->title = 'Marketing Materials';
  $box->description = 'Marketing Materials';
  $box->options = array(
    'body' => array(
      'value' => '<p class="marketing-materials-item"><a href="/downloads/HanoverBrochure.pdf" target="_blank">Download Agent Brochure</a></p>',
      'format' => 'filtered_html',
    ),
    'additional_classes' => '',
  );
  $export['marketing_materials'] = $box;

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'subhead_applications';
  $box->plugin_key = 'simple';
  $box->title = '';
  $box->description = 'Applications Subheadline';
  $box->options = array(
    'body' => array(
      'value' => '<p>Please click on any of the applications below to conveniently fill it out online.</p>',
      'format' => 'filtered_html',
    ),
  );
  $export['subhead_applications'] = $box;

  return $export;
}
