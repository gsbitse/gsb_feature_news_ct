<?php
/**
 * @file
 * gsb_feature_news_ct.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function gsb_feature_news_ct_taxonomy_default_vocabularies() {
  return array(
    'business_insight_topic' => array(
      'name' => 'Business Insight Topic',
      'machine_name' => 'business_insight_topic',
      'description' => '',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
    ),
    'company_organization' => array(
      'name' => 'Company/Organization',
      'machine_name' => 'company_organization',
      'description' => '',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
    ),
    'discipline' => array(
      'name' => 'Discipline',
      'machine_name' => 'discipline',
      'description' => '',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
    ),
    'industry' => array(
      'name' => 'Industry',
      'machine_name' => 'industry',
      'description' => '',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
    ),
    'region' => array(
      'name' => 'Region',
      'machine_name' => 'region',
      'description' => '',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
    ),
    'tag' => array(
      'name' => 'Tag',
      'machine_name' => 'tag',
      'description' => '',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
    ),
    'target_audience' => array(
      'name' => 'Target Audience',
      'machine_name' => 'target_audience',
      'description' => '',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
    ),
  );
}
