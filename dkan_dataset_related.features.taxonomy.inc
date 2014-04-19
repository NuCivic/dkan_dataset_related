<?php
/**
 * @file
 * dkan_dataset_related.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function dkan_dataset_related_taxonomy_default_vocabularies() {
  return array(
    'related_type' => array(
      'name' => 'Related Type',
      'machine_name' => 'related_type',
      'description' => 'Related type',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
  );
}
