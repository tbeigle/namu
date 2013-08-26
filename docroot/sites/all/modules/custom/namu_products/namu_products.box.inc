<?php
/**
 * @file
 * namu_products.box.inc
 */

/**
 * Implements hook_default_box().
 */
function namu_products_default_box() {
  $export = array();

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'banner_products_services';
  $box->plugin_key = 'simple';
  $box->title = '';
  $box->description = 'Products and Services Top Banner';
  $box->options = array(
    'body' => array(
      'value' => '<div><img alt="Banner image" src="/sites/default/files/banners/banner-top-products-services.jpg" style="width: 605px; height: 110px;" /></div>',
      'format' => 'filtered_html',
    ),
    'additional_classes' => '',
  );
  $export['banner_products_services'] = $box;

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'products_programs';
  $box->plugin_key = 'simple';
  $box->title = '';
  $box->description = 'NAMU Products and Programs';
  $box->options = array(
    'body' => array(
      'value' => '<ul class="row cols cols-2"><li class="col col-1 bg-preserver"><ul><li>Marina operators legal liability</li><li>Protection and indemnity</li><li>Boat dealers inventory</li><li>Piers and docks</li></ul></li><li class="col col-2 bg-anchor"><ul><li>Hull coverage for owned workboats</li><li>Property</li><li>General liability</li><li>Sudden and accidental pollution</li></ul></li></ul><!-- /.row /.cols ./cols-2 --><ul class="row cols cols-2"><li class="col col-1 bg-compass"><ul><li>Liquor liability</li><li>Equipment</li><li>Commercial auto</li><li>Workers compensation</li><li>Bumbershoot</li></ul></li><li class="col col-2 bg-wheel"><h4>Separate Programs</h4><ul><li>Marine artisans</li><li>Small custom boat builders</li><li>Maritime museums</li></ul></li></ul><!-- /.row /.cols ./cols-2 -->',
      'format' => 'filtered_html',
    ),
    'additional_classes' => 'lists-container',
  );
  $export['products_programs'] = $box;

  return $export;
}
