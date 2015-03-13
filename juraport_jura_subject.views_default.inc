<?php
/**
 * @file
 * juraport_jura_subject.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function juraport_jura_subject_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'jura_subject_overview';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Jura subject overview';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Emneoversigt';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'juraport_jura_subject_column_overview';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_jura_subject_category',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Kategori */
  $handler->display->display_options['fields']['field_jura_subject_category']['id'] = 'field_jura_subject_category';
  $handler->display->display_options['fields']['field_jura_subject_category']['table'] = 'field_data_field_jura_subject_category';
  $handler->display->display_options['fields']['field_jura_subject_category']['field'] = 'field_jura_subject_category';
  $handler->display->display_options['fields']['field_jura_subject_category']['label'] = '';
  $handler->display->display_options['fields']['field_jura_subject_category']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_jura_subject_category']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_jura_subject_category']['type'] = 'taxonomy_term_reference_plain';
  /* Sort criterion: Content: Kategori (field_jura_subject_category) */
  $handler->display->display_options['sorts']['field_jura_subject_category_tid']['id'] = 'field_jura_subject_category_tid';
  $handler->display->display_options['sorts']['field_jura_subject_category_tid']['table'] = 'field_data_field_jura_subject_category';
  $handler->display->display_options['sorts']['field_jura_subject_category_tid']['field'] = 'field_jura_subject_category_tid';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'jura_subject' => 'jura_subject',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'emneoversigt';
  $translatables['jura_subject_overview'] = array(
    t('Master'),
    t('Emneoversigt'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Page'),
  );
  $export['jura_subject_overview'] = $view;

  return $export;
}
