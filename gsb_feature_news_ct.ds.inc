<?php
/**
 * @file
 * gsb_feature_news_ct.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function gsb_feature_news_ct_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|news|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'news';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'field_news_byline' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lb' => '—by ',
          'lb-col' => TRUE,
          'ow' => TRUE,
          'ow-el' => 'span',
          'ow-cl' => 'byline-wrapper',
          'ow-def-cl' => TRUE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_person_staff_ref' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
      ),
    ),
  );
  $export['node|news|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|news|megamenu';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'news';
  $ds_fieldsetting->view_mode = 'megamenu';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '2',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '1',
        'wrapper' => 'h2',
        'class' => '',
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
        'conditions' => array(),
      ),
    ),
    'post_date' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'ds_post_date_panopoly_time',
    ),
  );
  $export['node|news|megamenu'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function gsb_feature_news_ct_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|news|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'news';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_2col_stacked';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'field_date_published',
        1 => 'title',
      ),
      'right' => array(
        2 => 'field_file_single_public',
        3 => 'field_image_caption',
      ),
      'footer' => array(
        4 => 'group_tags_wrapper',
        5 => 'field_editorial_summary',
        6 => 'field_body',
        7 => 'field_news_byline',
        8 => 'field_person_staff_ref',
        9 => 'field_region',
        10 => 'field_business_insight_topic',
        11 => 'field_target_audience',
        12 => 'field_discipline',
        13 => 'field_industry',
        14 => 'field_company_organization',
        15 => 'field_tag',
      ),
    ),
    'fields' => array(
      'field_date_published' => 'left',
      'title' => 'left',
      'field_file_single_public' => 'right',
      'field_image_caption' => 'right',
      'group_tags_wrapper' => 'footer',
      'field_editorial_summary' => 'footer',
      'field_body' => 'footer',
      'field_news_byline' => 'footer',
      'field_person_staff_ref' => 'footer',
      'field_region' => 'footer',
      'field_business_insight_topic' => 'footer',
      'field_target_audience' => 'footer',
      'field_discipline' => 'footer',
      'field_industry' => 'footer',
      'field_company_organization' => 'footer',
      'field_tag' => 'footer',
    ),
    'classes' => array(),
    'wrappers' => array(
      'header' => 'div',
      'left' => 'div',
      'right' => 'div',
      'footer' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
  );
  $export['node|news|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|news|megamenu';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'news';
  $ds_layout->view_mode = 'megamenu';
  $ds_layout->layout = 'ds_2col';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'field_file_single_public',
      ),
      'right' => array(
        1 => 'post_date',
        2 => 'title',
      ),
    ),
    'fields' => array(
      'field_file_single_public' => 'left',
      'post_date' => 'right',
      'title' => 'right',
    ),
    'classes' => array(),
    'wrappers' => array(
      'left' => 'div',
      'right' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
  );
  $export['node|news|megamenu'] = $ds_layout;

  return $export;
}
