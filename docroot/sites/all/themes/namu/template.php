<?php

/**
 * Implements template_preprocess_page()
 */
function namu_preprocess_page(&$vars) {
  $vars['namu_attributes'] = array(
    'content' => array(
      'id' => 'content',
      'class' => array(
        'column',
      ),
    ),
    'content_top' => array(
      'id' => 'namu-content-top',
    ),
    'title' => array(
      'id' => 'page-title',
      'class' => array(
        'title',
      ),
    ),
    'sidebar' => array(
      'id' => 'sidebar',
      'class' => array(
        'column',
        'sidebar',
      ),
    ),
  );
  
  if ($vars['page']['sidebar']) {
    $vars['namu_attributes']['content']['class'][] = 'with-banner-left';
  }
  
  if ($vars['page']['content_bottom']) {
    $vars['namu_attributes']['content']['class'][] = 'with-content-bottom';
  }
  
  if ($vars['page']['content_top']) {
    $vars['namu_attributes']['content_top']['class'][] = 'with-banner';
  }
  
  if ($vars['page']['subhead']) {
    $vars['namu_attributes']['title']['class'][] = 'with-subhead';
  }
}
