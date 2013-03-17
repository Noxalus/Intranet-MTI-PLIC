<?php
/**
 * @file
 * feature_debut.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function feature_debut_user_default_roles() {
  $roles = array();

  // Exported role: Etudiant.
  $roles['Etudiant'] = array(
    'name' => 'Etudiant',
    'weight' => '3',
  );

  // Exported role: Professeur.
  $roles['Professeur'] = array(
    'name' => 'Professeur',
    'weight' => '4',
  );

  // Exported role: administrator.
  $roles['administrator'] = array(
    'name' => 'administrator',
    'weight' => '2',
  );

  return $roles;
}
