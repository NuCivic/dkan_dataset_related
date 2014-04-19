<?php
/**
 * @file
 * dkan_dataset_related.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function dkan_dataset_related_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'related';
  $context->description = '';
  $context->tag = 'Node';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'related' => 'related',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'dkan_dataset-dkan_dataset_social' => array(
          'module' => 'dkan_dataset',
          'delta' => 'dkan_dataset_social',
          'region' => 'postscript_first',
          'weight' => '-10',
        ),
        'views-dataset_related-block' => array(
          'module' => 'views',
          'delta' => 'dataset_related-block',
          'region' => 'postscript_first',
          'weight' => '-9',
        ),
        'dkan_dataset-dkan_dataset_resource_additional' => array(
          'module' => 'dkan_dataset',
          'delta' => 'dkan_dataset_resource_additional',
          'region' => 'postscript_second',
          'weight' => '-10',
        ),
      ),
    ),
    'breadcrumb' => 'dataset',
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Node');
  $export['related'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'related-create';
  $context->description = '';
  $context->tag = 'Create';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'node/add/related' => 'node/add/related',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'dkan_forms-dkan_forms_resource_help' => array(
          'module' => 'dkan_forms',
          'delta' => 'dkan_forms_resource_help',
          'region' => 'sidebar_first',
          'weight' => '-13',
        ),
        'views-dataset_related-block' => array(
          'module' => 'views',
          'delta' => 'dataset_related-block',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
      ),
    ),
    'breadcrumb' => 'dataset',
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Create');
  $export['related-create'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'related-edit';
  $context->description = '';
  $context->tag = 'Edit';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'related' => 'related',
      ),
      'options' => array(
        'node_form' => '2',
      ),
    ),
    'path' => array(
      'values' => array(
        '~node/add*' => '~node/add*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'dkan_forms-dkan_forms_resource_help' => array(
          'module' => 'dkan_forms',
          'delta' => 'dkan_forms_resource_help',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
        'views-dataset_related-block' => array(
          'module' => 'views',
          'delta' => 'dataset_related-block',
          'region' => 'sidebar_first',
          'weight' => '-9',
        ),
      ),
    ),
    'breadcrumb' => 'dataset',
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Edit');
  $export['related-edit'] = $context;

  return $export;
}
