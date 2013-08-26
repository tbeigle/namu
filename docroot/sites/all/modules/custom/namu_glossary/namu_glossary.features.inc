<?php
/**
 * @file
 * namu_glossary.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function namu_glossary_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "boxes" && $api == "box") {
    return array("version" => "1");
  }
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function namu_glossary_node_info() {
  $items = array(
    'glossary' => array(
      'name' => t('Glossary'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
