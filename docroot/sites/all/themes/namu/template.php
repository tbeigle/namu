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
    //$vars['namu_attributes']['content']['class'][] = 'with-banner-left';
  }
  
  if ($vars['page']['content_bottom']) {
    $vars['namu_attributes']['content']['class'][] = 'with-content-bottom';
  }
  
  if ($vars['page']['content_top']) {
    //$vars['namu_attributes']['content_top']['class'][] = 'with-banner';
  }
  
  if ($vars['page']['subhead']) {
    $vars['namu_attributes']['content_top']['class'][] = 'with-subhead';
  }
}

/**
 * Implements template_preprocess_field()
 */
function namu_preprocess_field(&$vars) {
  $field_name = !empty($vars['element']['#field_name']) ? $vars['element']['#field_name'] : '';
  if ($field_name != 'field_app_hard_copy' || empty($vars['items'][0]['#markup'])) return;
  
  $markup = '<p class="download-printable-form">' . t('To download a printable version of the form, ') . l(t('click here'), strip_tags($vars['items'][0]['#markup'])) . '</p>';
  $vars['items'][0]['#markup'] = $markup;
}
