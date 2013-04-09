<?php
/**
 * @file
 * feature_promotion.features.field.inc
 */

/**
 * Implements hook_field_default_fields().
 */
function feature_promotion_field_default_fields() {
  $fields = array();

  // Exported field: 'user-user-field_promotion'.
  $fields['user-user-field_promotion'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_promotion',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'number',
      'settings' => array(),
      'translatable' => '0',
      'type' => 'number_integer',
    ),
    'field_instance' => array(
      'bundle' => 'user',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'L\'année de votre promotion.',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'number',
          'settings' => array(
            'decimal_separator' => '.',
            'prefix_suffix' => TRUE,
            'scale' => 0,
            'thousand_separator' => ' ',
          ),
          'type' => 'number_integer',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'user',
      'field_name' => 'field_promotion',
      'label' => 'Promotion',
      'required' => 0,
      'settings' => array(
        'max' => '',
        'min' => '',
        'prefix' => '',
        'suffix' => '',
        'user_register_form' => 0,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'number',
        'settings' => array(),
        'type' => 'number',
        'weight' => '7',
      ),
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('L\'année de votre promotion.');
  t('Promotion');

  return $fields;
}
