<?php
/**
 * @file
 * gsb_feature_news_ct.features.field.inc
 */

/**
 * Implements hook_field_default_fields().
 */
function gsb_feature_news_ct_field_default_fields() {
  $fields = array();

  // Exported field: 'node-gsb_news-body'.
  $fields['node-gsb_news-body'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(
        0 => 'node',
      ),
      'field_name' => 'body',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(),
      'translatable' => '0',
      'type' => 'text_with_summary',
    ),
    'field_instance' => array(
      'bundle' => 'gsb_news',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => 0,
        ),
        'featured' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'ical' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(
            'trim_length' => 600,
          ),
          'type' => 'text_summary_or_trimmed',
          'weight' => 0,
        ),
        'tiny' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'body',
      'label' => 'Body',
      'required' => FALSE,
      'settings' => array(
        'display_summary' => TRUE,
        'text_processing' => 1,
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'module' => 'text',
        'settings' => array(
          'rows' => 20,
          'summary_rows' => 5,
        ),
        'type' => 'text_textarea_with_summary',
        'weight' => 31,
      ),
    ),
  );

  // Exported field: 'node-gsb_news-field_body'.
  $fields['node-gsb_news-field_body'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_body',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(),
      'translatable' => '0',
      'type' => 'text_long',
    ),
    'field_instance' => array(
      'active' => '1',
      'bundle' => 'gsb_news',
      'bundles' => array(
        'fieldable_panels_pane' => array(
          0 => 'gsb_quote_fpp',
        ),
        'node' => array(
          0 => 'gsb_club',
          1 => 'gsb_event',
          2 => 'gsb_page',
        ),
      ),
      'cardinality' => '1',
      'columns' => array(
        'format' => array(
          'length' => 255,
          'not null' => FALSE,
          'type' => 'varchar',
        ),
        'value' => array(
          'not null' => FALSE,
          'size' => 'big',
          'type' => 'text',
        ),
      ),
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => 1,
        ),
        'featured' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'ical' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'tiny' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'entity_types' => array(),
      'field_name' => 'field_body',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'label' => 'field_body',
      'locked' => '0',
      'module' => 'text',
      'required' => FALSE,
      'settings' => array(
        'text_processing' => 0,
        'user_register_form' => FALSE,
      ),
      'storage' => array(
        'active' => '1',
        'details' => array(
          'sql' => array(
            'FIELD_LOAD_CURRENT' => array(
              'field_data_field_body' => array(
                'format' => 'field_body_format',
                'value' => 'field_body_value',
              ),
            ),
            'FIELD_LOAD_REVISION' => array(
              'field_revision_field_body' => array(
                'format' => 'field_body_format',
                'value' => 'field_body_value',
              ),
            ),
          ),
        ),
        'module' => 'field_sql_storage',
        'settings' => array(),
        'type' => 'field_sql_storage',
      ),
      'translatable' => '0',
      'type' => 'text_long',
      'widget' => array(
        'module' => 'text',
        'settings' => array(
          'rows' => 5,
        ),
        'type' => 'text_textarea',
        'weight' => 32,
      ),
    ),
  );

  // Exported field: 'node-gsb_news-field_business_insight_topic'.
  $fields['node-gsb_news-field_business_insight_topic'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_business_insight_topic',
      'foreign keys' => array(
        'tid' => array(
          'columns' => array(
            'tid' => 'tid',
          ),
          'table' => 'taxonomy_term_data',
        ),
      ),
      'indexes' => array(
        'tid' => array(
          0 => 'tid',
        ),
      ),
      'locked' => '0',
      'module' => 'taxonomy',
      'settings' => array(
        'allowed_values' => array(
          0 => array(
            'vocabulary' => 'business_insight_topic',
            'parent' => '0',
          ),
        ),
      ),
      'translatable' => '0',
      'type' => 'taxonomy_term_reference',
    ),
    'field_instance' => array(
      'active' => '1',
      'bundle' => 'gsb_news',
      'bundles' => array(
        'node' => array(
          0 => 'business_insight',
          1 => 'gsb_event',
          2 => 'gsb_media_mention',
          3 => 'gsb_school_story',
          4 => 'gsb_video',
        ),
      ),
      'cardinality' => '1',
      'columns' => array(
        'tid' => array(
          'not null' => FALSE,
          'type' => 'int',
          'unsigned' => TRUE,
        ),
      ),
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'taxonomy',
          'settings' => array(),
          'type' => 'taxonomy_term_reference_link',
          'weight' => 2,
        ),
        'featured' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'ical' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'tiny' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'entity_types' => array(),
      'field_name' => 'field_business_insight_topic',
      'foreign keys' => array(
        'tid' => array(
          'columns' => array(
            'tid' => 'tid',
          ),
          'table' => 'taxonomy_term_data',
        ),
      ),
      'indexes' => array(
        'tid' => array(
          0 => 'tid',
        ),
      ),
      'label' => 'field_business_insight_topic',
      'locked' => '0',
      'module' => 'taxonomy',
      'required' => FALSE,
      'settings' => array(
        'allowed_values' => array(
          0 => array(
            'vocabulary' => 'business_insight_topic',
            'parent' => '0',
          ),
        ),
        'user_register_form' => FALSE,
      ),
      'storage' => array(
        'active' => '1',
        'details' => array(
          'sql' => array(
            'FIELD_LOAD_CURRENT' => array(
              'field_data_field_business_insight_topic' => array(
                'tid' => 'field_business_insight_topic_tid',
              ),
            ),
            'FIELD_LOAD_REVISION' => array(
              'field_revision_field_business_insight_topic' => array(
                'tid' => 'field_business_insight_topic_tid',
              ),
            ),
          ),
        ),
        'module' => 'field_sql_storage',
        'settings' => array(),
        'type' => 'field_sql_storage',
      ),
      'translatable' => '0',
      'type' => 'taxonomy_term_reference',
      'widget' => array(
        'module' => 'options',
        'settings' => array(),
        'type' => 'options_select',
        'weight' => 33,
      ),
    ),
  );

  // Exported field: 'node-gsb_news-field_company_organization'.
  $fields['node-gsb_news-field_company_organization'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_company_organization',
      'foreign keys' => array(
        'tid' => array(
          'columns' => array(
            'tid' => 'tid',
          ),
          'table' => 'taxonomy_term_data',
        ),
      ),
      'indexes' => array(
        'tid' => array(
          0 => 'tid',
        ),
      ),
      'locked' => '0',
      'module' => 'taxonomy',
      'settings' => array(
        'allowed_values' => array(
          0 => array(
            'vocabulary' => 'company_organization',
            'parent' => '0',
          ),
        ),
      ),
      'translatable' => '0',
      'type' => 'taxonomy_term_reference',
    ),
    'field_instance' => array(
      'active' => '1',
      'bundle' => 'gsb_news',
      'bundles' => array(
        'node' => array(
          0 => 'business_insight',
          1 => 'gsb_event',
          2 => 'gsb_media_mention',
          3 => 'gsb_school_story',
          4 => 'gsb_video',
        ),
      ),
      'cardinality' => '1',
      'columns' => array(
        'tid' => array(
          'not null' => FALSE,
          'type' => 'int',
          'unsigned' => TRUE,
        ),
      ),
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'taxonomy',
          'settings' => array(),
          'type' => 'taxonomy_term_reference_link',
          'weight' => 3,
        ),
        'featured' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'ical' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'tiny' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'entity_types' => array(),
      'field_name' => 'field_company_organization',
      'foreign keys' => array(
        'tid' => array(
          'columns' => array(
            'tid' => 'tid',
          ),
          'table' => 'taxonomy_term_data',
        ),
      ),
      'indexes' => array(
        'tid' => array(
          0 => 'tid',
        ),
      ),
      'label' => 'field_company_organization',
      'locked' => '0',
      'module' => 'taxonomy',
      'required' => FALSE,
      'settings' => array(
        'allowed_values' => array(
          0 => array(
            'vocabulary' => 'company_organization',
            'parent' => '0',
          ),
        ),
        'user_register_form' => FALSE,
      ),
      'storage' => array(
        'active' => '1',
        'details' => array(
          'sql' => array(
            'FIELD_LOAD_CURRENT' => array(
              'field_data_field_company_organization' => array(
                'tid' => 'field_company_organization_tid',
              ),
            ),
            'FIELD_LOAD_REVISION' => array(
              'field_revision_field_company_organization' => array(
                'tid' => 'field_company_organization_tid',
              ),
            ),
          ),
        ),
        'module' => 'field_sql_storage',
        'settings' => array(),
        'type' => 'field_sql_storage',
      ),
      'translatable' => '0',
      'type' => 'taxonomy_term_reference',
      'widget' => array(
        'module' => 'options',
        'settings' => array(),
        'type' => 'options_select',
        'weight' => 34,
      ),
    ),
  );

  // Exported field: 'node-gsb_news-field_date_published'.
  $fields['node-gsb_news-field_date_published'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_date_published',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'date',
      'settings' => array(
        'cache_count' => '4',
        'cache_enabled' => 0,
        'granularity' => array(
          'day' => 'day',
          'hour' => 0,
          'minute' => 0,
          'month' => 'month',
          'second' => 0,
          'year' => 'year',
        ),
        'timezone_db' => '',
        'todate' => '',
        'tz_handling' => 'none',
      ),
      'translatable' => '0',
      'type' => 'datetime',
    ),
    'field_instance' => array(
      'active' => '1',
      'bundle' => 'gsb_news',
      'bundles' => array(
        'node' => array(
          0 => 'business_insight',
          1 => 'gsb_media_mention',
          2 => 'gsb_school_story',
          3 => 'gsb_video',
        ),
      ),
      'cardinality' => '1',
      'columns' => array(
        'value' => array(
          'mysql_type' => 'datetime',
          'not null' => FALSE,
          'pgsql_type' => 'timestamp without time zone',
          'sortable' => TRUE,
          'sqlite_type' => 'varchar',
          'sqlsrv_type' => 'smalldatetime',
          'type' => 'datetime',
          'views' => TRUE,
        ),
      ),
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'date',
          'settings' => array(
            'format_type' => 'long',
            'fromto' => 'both',
            'multiple_from' => '',
            'multiple_number' => '',
            'multiple_to' => '',
          ),
          'type' => 'date_default',
          'weight' => 4,
        ),
        'featured' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'ical' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'tiny' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'entity_types' => array(),
      'field_name' => 'field_date_published',
      'foreign keys' => array(),
      'indexes' => array(),
      'label' => 'field_date_published',
      'locked' => '0',
      'module' => 'date',
      'required' => FALSE,
      'settings' => array(
        'cache_count' => '4',
        'cache_enabled' => 0,
        'default_value' => 'now',
        'default_value2' => 'same',
        'default_value_code' => '',
        'default_value_code2' => '',
        'granularity' => array(
          'day' => 'day',
          'hour' => 0,
          'minute' => 0,
          'month' => 'month',
          'second' => 0,
          'year' => 'year',
        ),
        'timezone_db' => '',
        'todate' => '',
        'tz_handling' => 'none',
        'user_register_form' => FALSE,
      ),
      'storage' => array(
        'active' => '1',
        'details' => array(
          'sql' => array(
            'FIELD_LOAD_CURRENT' => array(
              'field_data_field_date_published' => array(
                'value' => 'field_date_published_value',
              ),
            ),
            'FIELD_LOAD_REVISION' => array(
              'field_revision_field_date_published' => array(
                'value' => 'field_date_published_value',
              ),
            ),
          ),
        ),
        'module' => 'field_sql_storage',
        'settings' => array(),
        'type' => 'field_sql_storage',
      ),
      'translatable' => '0',
      'type' => 'datetime',
      'widget' => array(
        'module' => 'date',
        'settings' => array(
          'increment' => 15,
          'input_format' => 'm/d/Y',
          'input_format_custom' => '',
          'label_position' => 'above',
          'text_parts' => array(),
          'year_range' => '-3:+3',
        ),
        'type' => 'date_select',
        'weight' => 35,
      ),
    ),
  );

  // Exported field: 'node-gsb_news-field_discipline'.
  $fields['node-gsb_news-field_discipline'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_discipline',
      'foreign keys' => array(
        'tid' => array(
          'columns' => array(
            'tid' => 'tid',
          ),
          'table' => 'taxonomy_term_data',
        ),
      ),
      'indexes' => array(
        'tid' => array(
          0 => 'tid',
        ),
      ),
      'locked' => '0',
      'module' => 'taxonomy',
      'settings' => array(
        'allowed_values' => array(
          0 => array(
            'vocabulary' => 'discipline',
            'parent' => '0',
          ),
        ),
      ),
      'translatable' => '0',
      'type' => 'taxonomy_term_reference',
    ),
    'field_instance' => array(
      'active' => '1',
      'bundle' => 'gsb_news',
      'bundles' => array(
        'node' => array(
          0 => 'business_insight',
          1 => 'gsb_event',
          2 => 'gsb_media_mention',
          3 => 'gsb_school_story',
          4 => 'gsb_video',
        ),
      ),
      'cardinality' => '1',
      'columns' => array(
        'tid' => array(
          'not null' => FALSE,
          'type' => 'int',
          'unsigned' => TRUE,
        ),
      ),
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'taxonomy',
          'settings' => array(),
          'type' => 'taxonomy_term_reference_link',
          'weight' => 5,
        ),
        'featured' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'ical' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'tiny' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'entity_types' => array(),
      'field_name' => 'field_discipline',
      'foreign keys' => array(
        'tid' => array(
          'columns' => array(
            'tid' => 'tid',
          ),
          'table' => 'taxonomy_term_data',
        ),
      ),
      'indexes' => array(
        'tid' => array(
          0 => 'tid',
        ),
      ),
      'label' => 'field_discipline',
      'locked' => '0',
      'module' => 'taxonomy',
      'required' => FALSE,
      'settings' => array(
        'allowed_values' => array(
          0 => array(
            'vocabulary' => 'discipline',
            'parent' => '0',
          ),
        ),
        'user_register_form' => FALSE,
      ),
      'storage' => array(
        'active' => '1',
        'details' => array(
          'sql' => array(
            'FIELD_LOAD_CURRENT' => array(
              'field_data_field_discipline' => array(
                'tid' => 'field_discipline_tid',
              ),
            ),
            'FIELD_LOAD_REVISION' => array(
              'field_revision_field_discipline' => array(
                'tid' => 'field_discipline_tid',
              ),
            ),
          ),
        ),
        'module' => 'field_sql_storage',
        'settings' => array(),
        'type' => 'field_sql_storage',
      ),
      'translatable' => '0',
      'type' => 'taxonomy_term_reference',
      'widget' => array(
        'module' => 'options',
        'settings' => array(),
        'type' => 'options_select',
        'weight' => 36,
      ),
    ),
  );

  // Exported field: 'node-gsb_news-field_editorial_summary'.
  $fields['node-gsb_news-field_editorial_summary'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_editorial_summary',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(),
      'translatable' => '0',
      'type' => 'text_long',
    ),
    'field_instance' => array(
      'active' => '1',
      'bundle' => 'gsb_news',
      'bundles' => array(
        'fieldable_panels_pane' => array(
          0 => 'gsb_image_cta_fpp',
        ),
        'node' => array(
          0 => 'business_insight',
          1 => 'gsb_event',
          2 => 'gsb_media_mention',
          3 => 'gsb_school_story',
          4 => 'gsb_video',
          5 => 'gsb_page',
        ),
      ),
      'cardinality' => '1',
      'columns' => array(
        'format' => array(
          'length' => 255,
          'not null' => FALSE,
          'type' => 'varchar',
        ),
        'value' => array(
          'not null' => FALSE,
          'size' => 'big',
          'type' => 'text',
        ),
      ),
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => 6,
        ),
        'featured' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'ical' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'tiny' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'entity_types' => array(),
      'field_name' => 'field_editorial_summary',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'label' => 'field_editorial_summary',
      'locked' => '0',
      'module' => 'text',
      'required' => FALSE,
      'settings' => array(
        'text_processing' => 0,
        'user_register_form' => FALSE,
      ),
      'storage' => array(
        'active' => '1',
        'details' => array(
          'sql' => array(
            'FIELD_LOAD_CURRENT' => array(
              'field_data_field_editorial_summary' => array(
                'format' => 'field_editorial_summary_format',
                'value' => 'field_editorial_summary_value',
              ),
            ),
            'FIELD_LOAD_REVISION' => array(
              'field_revision_field_editorial_summary' => array(
                'format' => 'field_editorial_summary_format',
                'value' => 'field_editorial_summary_value',
              ),
            ),
          ),
        ),
        'module' => 'field_sql_storage',
        'settings' => array(),
        'type' => 'field_sql_storage',
      ),
      'translatable' => '0',
      'type' => 'text_long',
      'widget' => array(
        'module' => 'text',
        'settings' => array(
          'rows' => 5,
        ),
        'type' => 'text_textarea',
        'weight' => 37,
      ),
    ),
  );

  // Exported field: 'node-gsb_news-field_file_single_public'.
  $fields['node-gsb_news-field_file_single_public'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_file_single_public',
      'foreign keys' => array(
        'fid' => array(
          'columns' => array(
            'fid' => 'fid',
          ),
          'table' => 'file_managed',
        ),
      ),
      'indexes' => array(
        'fid' => array(
          0 => 'fid',
        ),
      ),
      'locked' => '0',
      'module' => 'image',
      'settings' => array(
        'default_image' => 0,
        'uri_scheme' => 'public',
      ),
      'translatable' => '0',
      'type' => 'image',
    ),
    'field_instance' => array(
      'active' => '1',
      'bundle' => 'gsb_news',
      'bundles' => array(
        'fieldable_panels_pane' => array(
          0 => 'gsb_image_cta_fpp',
        ),
        'node' => array(
          0 => 'business_insight',
          1 => 'gsb_media_mention',
          2 => 'gsb_event',
          3 => 'gsb_video',
        ),
      ),
      'cardinality' => '1',
      'columns' => array(
        'alt' => array(
          'description' => 'Alternative image text, for the image\'s \'alt\' attribute.',
          'length' => 512,
          'not null' => FALSE,
          'type' => 'varchar',
        ),
        'fid' => array(
          'description' => 'The {file_managed}.fid being referenced in this field.',
          'not null' => FALSE,
          'type' => 'int',
          'unsigned' => TRUE,
        ),
        'height' => array(
          'description' => 'The height of the image in pixels.',
          'type' => 'int',
          'unsigned' => TRUE,
        ),
        'title' => array(
          'description' => 'Image title text, for the image\'s \'title\' attribute.',
          'length' => 1024,
          'not null' => FALSE,
          'type' => 'varchar',
        ),
        'width' => array(
          'description' => 'The width of the image in pixels.',
          'type' => 'int',
          'unsigned' => TRUE,
        ),
      ),
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'image',
          'settings' => array(
            'image_link' => '',
            'image_style' => '',
          ),
          'type' => 'image',
          'weight' => 7,
        ),
        'featured' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'ical' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'tiny' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'entity_types' => array(),
      'field_name' => 'field_file_single_public',
      'foreign keys' => array(
        'fid' => array(
          'columns' => array(
            'fid' => 'fid',
          ),
          'table' => 'file_managed',
        ),
      ),
      'indexes' => array(
        'fid' => array(
          0 => 'fid',
        ),
      ),
      'label' => 'field_file_single_public',
      'locked' => '0',
      'module' => 'image',
      'required' => FALSE,
      'settings' => array(
        'alt_field' => 0,
        'default_image' => 0,
        'file_directory' => '',
        'file_extensions' => 'png gif jpg jpeg',
        'max_filesize' => '',
        'max_resolution' => '',
        'min_resolution' => '',
        'title_field' => 0,
        'uri_scheme' => 'public',
        'user_register_form' => FALSE,
      ),
      'storage' => array(
        'active' => '1',
        'details' => array(
          'sql' => array(
            'FIELD_LOAD_CURRENT' => array(
              'field_data_field_file_single_public' => array(
                'alt' => 'field_file_single_public_alt',
                'fid' => 'field_file_single_public_fid',
                'height' => 'field_file_single_public_height',
                'title' => 'field_file_single_public_title',
                'width' => 'field_file_single_public_width',
              ),
            ),
            'FIELD_LOAD_REVISION' => array(
              'field_revision_field_file_single_public' => array(
                'alt' => 'field_file_single_public_alt',
                'fid' => 'field_file_single_public_fid',
                'height' => 'field_file_single_public_height',
                'title' => 'field_file_single_public_title',
                'width' => 'field_file_single_public_width',
              ),
            ),
          ),
        ),
        'module' => 'field_sql_storage',
        'settings' => array(),
        'type' => 'field_sql_storage',
      ),
      'translatable' => '0',
      'type' => 'image',
      'widget' => array(
        'module' => 'image',
        'settings' => array(
          'preview_image_style' => 'thumbnail',
          'progress_indicator' => 'throbber',
        ),
        'type' => 'image_image',
        'weight' => 38,
      ),
    ),
  );

  // Exported field: 'node-gsb_news-field_header_image_style'.
  $fields['node-gsb_news-field_header_image_style'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_header_image_style',
      'foreign keys' => array(),
      'indexes' => array(
        'value' => array(
          0 => 'value',
        ),
      ),
      'locked' => '0',
      'module' => 'list',
      'settings' => array(
        'allowed_values' => array(
          0 => 'No Image',
          'small-image' => 'Small Image',
          'large-image' => 'Large Image',
        ),
        'allowed_values_function' => '',
      ),
      'translatable' => '0',
      'type' => 'list_text',
    ),
    'field_instance' => array(
      'active' => '1',
      'bundle' => 'gsb_news',
      'bundles' => array(
        'node' => array(
          0 => 'business_insight',
          1 => 'gsb_school_story',
        ),
      ),
      'cardinality' => '1',
      'columns' => array(
        'value' => array(
          'length' => 255,
          'not null' => FALSE,
          'type' => 'varchar',
        ),
      ),
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_default',
          'weight' => 8,
        ),
        'featured' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'ical' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'tiny' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'entity_types' => array(),
      'field_name' => 'field_header_image_style',
      'foreign keys' => array(),
      'indexes' => array(
        'value' => array(
          0 => 'value',
        ),
      ),
      'label' => 'field_header_image_style',
      'locked' => '0',
      'module' => 'list',
      'required' => FALSE,
      'settings' => array(
        'allowed_values' => array(
          0 => 'No Image',
          'small-image' => 'Small Image',
          'large-image' => 'Large Image',
        ),
        'allowed_values_function' => '',
        'user_register_form' => FALSE,
      ),
      'storage' => array(
        'active' => '1',
        'details' => array(
          'sql' => array(
            'FIELD_LOAD_CURRENT' => array(
              'field_data_field_header_image_style' => array(
                'value' => 'field_header_image_style_value',
              ),
            ),
            'FIELD_LOAD_REVISION' => array(
              'field_revision_field_header_image_style' => array(
                'value' => 'field_header_image_style_value',
              ),
            ),
          ),
        ),
        'module' => 'field_sql_storage',
        'settings' => array(),
        'type' => 'field_sql_storage',
      ),
      'translatable' => '0',
      'type' => 'list_text',
      'widget' => array(
        'module' => 'options',
        'settings' => array(),
        'type' => 'options_select',
        'weight' => 39,
      ),
    ),
  );

  // Exported field: 'node-gsb_news-field_image_caption'.
  $fields['node-gsb_news-field_image_caption'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_image_caption',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(
        'max_length' => '255',
      ),
      'translatable' => '0',
      'type' => 'text',
    ),
    'field_instance' => array(
      'active' => '1',
      'bundle' => 'gsb_news',
      'bundles' => array(
        'node' => array(
          0 => 'business_insight',
          1 => 'gsb_media_mention',
          2 => 'gsb_event',
        ),
      ),
      'cardinality' => '1',
      'columns' => array(
        'format' => array(
          'length' => 255,
          'not null' => FALSE,
          'type' => 'varchar',
        ),
        'value' => array(
          'length' => '255',
          'not null' => FALSE,
          'type' => 'varchar',
        ),
      ),
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => 9,
        ),
        'featured' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'ical' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'tiny' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'entity_types' => array(),
      'field_name' => 'field_image_caption',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'label' => 'field_image_caption',
      'locked' => '0',
      'module' => 'text',
      'required' => FALSE,
      'settings' => array(
        'max_length' => '255',
        'text_processing' => 0,
        'user_register_form' => FALSE,
      ),
      'storage' => array(
        'active' => '1',
        'details' => array(
          'sql' => array(
            'FIELD_LOAD_CURRENT' => array(
              'field_data_field_image_caption' => array(
                'format' => 'field_image_caption_format',
                'value' => 'field_image_caption_value',
              ),
            ),
            'FIELD_LOAD_REVISION' => array(
              'field_revision_field_image_caption' => array(
                'format' => 'field_image_caption_format',
                'value' => 'field_image_caption_value',
              ),
            ),
          ),
        ),
        'module' => 'field_sql_storage',
        'settings' => array(),
        'type' => 'field_sql_storage',
      ),
      'translatable' => '0',
      'type' => 'text',
      'widget' => array(
        'module' => 'text',
        'settings' => array(
          'size' => 60,
        ),
        'type' => 'text_textfield',
        'weight' => 40,
      ),
    ),
  );

  // Exported field: 'node-gsb_news-field_industry'.
  $fields['node-gsb_news-field_industry'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_industry',
      'foreign keys' => array(
        'tid' => array(
          'columns' => array(
            'tid' => 'tid',
          ),
          'table' => 'taxonomy_term_data',
        ),
      ),
      'indexes' => array(
        'tid' => array(
          0 => 'tid',
        ),
      ),
      'locked' => '0',
      'module' => 'taxonomy',
      'settings' => array(
        'allowed_values' => array(
          0 => array(
            'vocabulary' => 'industry',
            'parent' => '0',
          ),
        ),
      ),
      'translatable' => '0',
      'type' => 'taxonomy_term_reference',
    ),
    'field_instance' => array(
      'active' => '1',
      'bundle' => 'gsb_news',
      'bundles' => array(
        'node' => array(
          0 => 'business_insight',
          1 => 'gsb_event',
          2 => 'gsb_media_mention',
          3 => 'gsb_school_story',
          4 => 'gsb_video',
        ),
      ),
      'cardinality' => '1',
      'columns' => array(
        'tid' => array(
          'not null' => FALSE,
          'type' => 'int',
          'unsigned' => TRUE,
        ),
      ),
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'taxonomy',
          'settings' => array(),
          'type' => 'taxonomy_term_reference_link',
          'weight' => 10,
        ),
        'featured' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'ical' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'tiny' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'entity_types' => array(),
      'field_name' => 'field_industry',
      'foreign keys' => array(
        'tid' => array(
          'columns' => array(
            'tid' => 'tid',
          ),
          'table' => 'taxonomy_term_data',
        ),
      ),
      'indexes' => array(
        'tid' => array(
          0 => 'tid',
        ),
      ),
      'label' => 'field_industry',
      'locked' => '0',
      'module' => 'taxonomy',
      'required' => FALSE,
      'settings' => array(
        'allowed_values' => array(
          0 => array(
            'vocabulary' => 'industry',
            'parent' => '0',
          ),
        ),
        'user_register_form' => FALSE,
      ),
      'storage' => array(
        'active' => '1',
        'details' => array(
          'sql' => array(
            'FIELD_LOAD_CURRENT' => array(
              'field_data_field_industry' => array(
                'tid' => 'field_industry_tid',
              ),
            ),
            'FIELD_LOAD_REVISION' => array(
              'field_revision_field_industry' => array(
                'tid' => 'field_industry_tid',
              ),
            ),
          ),
        ),
        'module' => 'field_sql_storage',
        'settings' => array(),
        'type' => 'field_sql_storage',
      ),
      'translatable' => '0',
      'type' => 'taxonomy_term_reference',
      'widget' => array(
        'module' => 'options',
        'settings' => array(),
        'type' => 'options_select',
        'weight' => 41,
      ),
    ),
  );

  // Exported field: 'node-gsb_news-field_region'.
  $fields['node-gsb_news-field_region'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_region',
      'foreign keys' => array(
        'tid' => array(
          'columns' => array(
            'tid' => 'tid',
          ),
          'table' => 'taxonomy_term_data',
        ),
      ),
      'indexes' => array(
        'tid' => array(
          0 => 'tid',
        ),
      ),
      'locked' => '0',
      'module' => 'taxonomy',
      'settings' => array(
        'allowed_values' => array(
          0 => array(
            'vocabulary' => 'region',
            'parent' => '0',
          ),
        ),
      ),
      'translatable' => '0',
      'type' => 'taxonomy_term_reference',
    ),
    'field_instance' => array(
      'active' => '1',
      'bundle' => 'gsb_news',
      'bundles' => array(
        'node' => array(
          0 => 'business_insight',
          1 => 'gsb_event',
          2 => 'gsb_media_mention',
          3 => 'gsb_school_story',
          4 => 'gsb_video',
        ),
      ),
      'cardinality' => '1',
      'columns' => array(
        'tid' => array(
          'not null' => FALSE,
          'type' => 'int',
          'unsigned' => TRUE,
        ),
      ),
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'taxonomy',
          'settings' => array(),
          'type' => 'taxonomy_term_reference_link',
          'weight' => 11,
        ),
        'featured' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'ical' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'tiny' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'entity_types' => array(),
      'field_name' => 'field_region',
      'foreign keys' => array(
        'tid' => array(
          'columns' => array(
            'tid' => 'tid',
          ),
          'table' => 'taxonomy_term_data',
        ),
      ),
      'indexes' => array(
        'tid' => array(
          0 => 'tid',
        ),
      ),
      'label' => 'field_region',
      'locked' => '0',
      'module' => 'taxonomy',
      'required' => FALSE,
      'settings' => array(
        'allowed_values' => array(
          0 => array(
            'vocabulary' => 'region',
            'parent' => '0',
          ),
        ),
        'user_register_form' => FALSE,
      ),
      'storage' => array(
        'active' => '1',
        'details' => array(
          'sql' => array(
            'FIELD_LOAD_CURRENT' => array(
              'field_data_field_region' => array(
                'tid' => 'field_region_tid',
              ),
            ),
            'FIELD_LOAD_REVISION' => array(
              'field_revision_field_region' => array(
                'tid' => 'field_region_tid',
              ),
            ),
          ),
        ),
        'module' => 'field_sql_storage',
        'settings' => array(),
        'type' => 'field_sql_storage',
      ),
      'translatable' => '0',
      'type' => 'taxonomy_term_reference',
      'widget' => array(
        'module' => 'options',
        'settings' => array(),
        'type' => 'options_select',
        'weight' => 42,
      ),
    ),
  );

  // Exported field: 'node-gsb_news-field_tag'.
  $fields['node-gsb_news-field_tag'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '-1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_tag',
      'foreign keys' => array(
        'tid' => array(
          'columns' => array(
            'tid' => 'tid',
          ),
          'table' => 'taxonomy_term_data',
        ),
      ),
      'indexes' => array(
        'tid' => array(
          0 => 'tid',
        ),
      ),
      'locked' => '0',
      'module' => 'taxonomy',
      'settings' => array(
        'allowed_values' => array(
          0 => array(
            'vocabulary' => 'tag',
            'parent' => '0',
          ),
        ),
      ),
      'translatable' => '0',
      'type' => 'taxonomy_term_reference',
    ),
    'field_instance' => array(
      'active' => '1',
      'bundle' => 'gsb_news',
      'bundles' => array(
        'node' => array(
          0 => 'business_insight',
          1 => 'gsb_event',
          2 => 'gsb_media_mention',
          3 => 'gsb_person',
          4 => 'gsb_school_story',
          5 => 'gsb_video',
        ),
      ),
      'cardinality' => '-1',
      'columns' => array(
        'tid' => array(
          'not null' => FALSE,
          'type' => 'int',
          'unsigned' => TRUE,
        ),
      ),
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'taxonomy',
          'settings' => array(),
          'type' => 'taxonomy_term_reference_link',
          'weight' => 12,
        ),
        'featured' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'ical' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'tiny' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'entity_types' => array(),
      'field_name' => 'field_tag',
      'foreign keys' => array(
        'tid' => array(
          'columns' => array(
            'tid' => 'tid',
          ),
          'table' => 'taxonomy_term_data',
        ),
      ),
      'indexes' => array(
        'tid' => array(
          0 => 'tid',
        ),
      ),
      'label' => 'field_tag',
      'locked' => '0',
      'module' => 'taxonomy',
      'required' => FALSE,
      'settings' => array(
        'allowed_values' => array(
          0 => array(
            'vocabulary' => 'tag',
            'parent' => '0',
          ),
        ),
        'user_register_form' => FALSE,
      ),
      'storage' => array(
        'active' => '1',
        'details' => array(
          'sql' => array(
            'FIELD_LOAD_CURRENT' => array(
              'field_data_field_tag' => array(
                'tid' => 'field_tag_tid',
              ),
            ),
            'FIELD_LOAD_REVISION' => array(
              'field_revision_field_tag' => array(
                'tid' => 'field_tag_tid',
              ),
            ),
          ),
        ),
        'module' => 'field_sql_storage',
        'settings' => array(),
        'type' => 'field_sql_storage',
      ),
      'translatable' => '0',
      'type' => 'taxonomy_term_reference',
      'widget' => array(
        'module' => 'options',
        'settings' => array(),
        'type' => 'options_select',
        'weight' => 43,
      ),
    ),
  );

  // Exported field: 'node-gsb_news-field_target_audience'.
  $fields['node-gsb_news-field_target_audience'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_target_audience',
      'foreign keys' => array(
        'tid' => array(
          'columns' => array(
            'tid' => 'tid',
          ),
          'table' => 'taxonomy_term_data',
        ),
      ),
      'indexes' => array(
        'tid' => array(
          0 => 'tid',
        ),
      ),
      'locked' => '0',
      'module' => 'taxonomy',
      'settings' => array(
        'allowed_values' => array(
          0 => array(
            'vocabulary' => 'target_audience',
            'parent' => '0',
          ),
        ),
      ),
      'translatable' => '0',
      'type' => 'taxonomy_term_reference',
    ),
    'field_instance' => array(
      'active' => '1',
      'bundle' => 'gsb_news',
      'bundles' => array(
        'node' => array(
          0 => 'business_insight',
          1 => 'gsb_event',
          2 => 'gsb_media_mention',
          3 => 'gsb_school_story',
          4 => 'gsb_video',
        ),
      ),
      'cardinality' => '1',
      'columns' => array(
        'tid' => array(
          'not null' => FALSE,
          'type' => 'int',
          'unsigned' => TRUE,
        ),
      ),
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'taxonomy',
          'settings' => array(),
          'type' => 'taxonomy_term_reference_link',
          'weight' => 13,
        ),
        'featured' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'ical' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'tiny' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'entity_types' => array(),
      'field_name' => 'field_target_audience',
      'foreign keys' => array(
        'tid' => array(
          'columns' => array(
            'tid' => 'tid',
          ),
          'table' => 'taxonomy_term_data',
        ),
      ),
      'indexes' => array(
        'tid' => array(
          0 => 'tid',
        ),
      ),
      'label' => 'field_target_audience',
      'locked' => '0',
      'module' => 'taxonomy',
      'required' => FALSE,
      'settings' => array(
        'allowed_values' => array(
          0 => array(
            'vocabulary' => 'target_audience',
            'parent' => '0',
          ),
        ),
        'user_register_form' => FALSE,
      ),
      'storage' => array(
        'active' => '1',
        'details' => array(
          'sql' => array(
            'FIELD_LOAD_CURRENT' => array(
              'field_data_field_target_audience' => array(
                'tid' => 'field_target_audience_tid',
              ),
            ),
            'FIELD_LOAD_REVISION' => array(
              'field_revision_field_target_audience' => array(
                'tid' => 'field_target_audience_tid',
              ),
            ),
          ),
        ),
        'module' => 'field_sql_storage',
        'settings' => array(),
        'type' => 'field_sql_storage',
      ),
      'translatable' => '0',
      'type' => 'taxonomy_term_reference',
      'widget' => array(
        'module' => 'options',
        'settings' => array(),
        'type' => 'options_select',
        'weight' => 44,
      ),
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Body');
  t('field_body');
  t('field_business_insight_topic');
  t('field_company_organization');
  t('field_date_published');
  t('field_discipline');
  t('field_editorial_summary');
  t('field_file_single_public');
  t('field_header_image_style');
  t('field_image_caption');
  t('field_industry');
  t('field_region');
  t('field_tag');
  t('field_target_audience');

  return $fields;
}
