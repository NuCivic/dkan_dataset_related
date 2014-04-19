<?php
/**
 * @file
 * dkan_dataset_related.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function dkan_dataset_related_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function dkan_dataset_related_views_api() {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function dkan_dataset_related_node_info() {
  $items = array(
    'related' => array(
      'name' => t('Related'),
      'base' => 'node_content',
      'description' => t('related content '),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
