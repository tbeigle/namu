<?php
/**
 * @file
 * namu_glossary.box.inc
 */

/**
 * Implements hook_default_box().
 */
function namu_glossary_default_box() {
  $export = array();

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'glossary_disclaimer';
  $box->plugin_key = 'simple';
  $box->title = '';
  $box->description = 'Glossary Disclaimer';
  $box->options = array(
    'body' => array(
      'value' => '<p>This document is intended as an informational and educational reference only. While we make all efforts to ensure the accuracy of the information provided, North American Marine Underwriters Inc and Citizens/Hanover Companies do not take responsibility for errors or omissions made while referring to this content.</p>',
      'format' => 'filtered_html',
    ),
    'additional_classes' => '',
  );
  $export['glossary_disclaimer'] = $box;

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'subhead_glossary';
  $box->plugin_key = 'simple';
  $box->title = '';
  $box->description = 'Glossary Subheadline';
  $box->options = array(
    'body' => array(
      'value' => '<p>Marine insurance has unique terminology. We are providing the following glossary as a way for our customers to better understand the most commonly used terms in the industry.</p>',
      'format' => 'filtered_html',
    ),
  );
  $export['subhead_glossary'] = $box;

  return $export;
}
