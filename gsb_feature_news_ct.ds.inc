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
      'weight' => '3',
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
          'ow-el' => 'div',
          'ow-cl' => '',
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
  );
  $export['node|news|megamenu'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|news|teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'news';
  $ds_fieldsetting->view_mode = 'teaser';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '3',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '1',
        'wrapper' => 'h2',
        'class' => '',
        'ft' => array(),
        'conditions' => array(),
      ),
    ),
  );
  $export['node|news|teaser'] = $ds_fieldsetting;

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
      'right' => array(
        0 => 'field_file_single_public',
        1 => 'field_image_caption',
      ),
      'left' => array(
        2 => 'field_date_published',
        3 => 'title',
        4 => 'group_tags_wrapper',
        10 => 'field_region',
        11 => 'field_business_insight_topic',
        12 => 'field_target_audience',
        13 => 'field_discipline',
        14 => 'field_industry',
        15 => 'field_company_organization',
        16 => 'field_tag',
      ),
      'footer' => array(
        5 => 'field_editorial_summary',
        6 => 'field_body',
        7 => 'field_news_byline',
        8 => 'field_person_staff_ref',
        9 => 'field_addthis',
      ),
    ),
    'fields' => array(
      'field_file_single_public' => 'right',
      'field_image_caption' => 'right',
      'field_date_published' => 'left',
      'title' => 'left',
      'group_tags_wrapper' => 'left',
      'field_editorial_summary' => 'footer',
      'field_body' => 'footer',
      'field_news_byline' => 'footer',
      'field_person_staff_ref' => 'footer',
      'field_addthis' => 'footer',
      'field_region' => 'left',
      'field_business_insight_topic' => 'left',
      'field_target_audience' => 'left',
      'field_discipline' => 'left',
      'field_industry' => 'left',
      'field_company_organization' => 'left',
      'field_tag' => 'left',
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
        1 => 'field_date_published',
        2 => 'title',
      ),
    ),
    'fields' => array(
      'field_file_single_public' => 'left',
      'field_date_published' => 'right',
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

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|news|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'news';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_file_single_public',
        1 => 'field_date_published',
        2 => 'title',
        3 => 'field_editorial_summary',
        4 => 'group_tags_wrapper',
        5 => 'field_business_insight_topic',
        6 => 'field_target_audience',
        7 => 'field_discipline',
        8 => 'field_industry',
        9 => 'field_region',
        10 => 'field_company_organization',
        11 => 'field_tag',
      ),
    ),
    'fields' => array(
      'field_file_single_public' => 'ds_content',
      'field_date_published' => 'ds_content',
      'title' => 'ds_content',
      'field_editorial_summary' => 'ds_content',
      'group_tags_wrapper' => 'ds_content',
      'field_business_insight_topic' => 'ds_content',
      'field_target_audience' => 'ds_content',
      'field_discipline' => 'ds_content',
      'field_industry' => 'ds_content',
      'field_region' => 'ds_content',
      'field_company_organization' => 'ds_content',
      'field_tag' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
  );
  $export['node|news|teaser'] = $ds_layout;

  return $export;
}
