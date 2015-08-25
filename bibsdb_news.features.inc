<?php
/**
 * @file
 * bibsdb_news.features.inc
 */

/**
 * Implements hook_field_group_info_alter().
 */
function bibsdb_news_field_group_info_alter(&$data) {
  if (isset($data['group_left_col_search|node|ding_news|search_result'])) {
    $data['group_left_col_search|node|ding_news|search_result']->data['children'][0] = 'field_ding_news_title_image'; /* WAS: 'field_ding_news_list_image' */
  }
}

/**
 * Implements hook_field_default_field_instances_alter().
 */
function bibsdb_news_field_default_field_instances_alter(&$data) {
  if (isset($data['node-ding_news-ding_news_groups_ref'])) {
    $data['node-ding_news-ding_news_groups_ref']['display']['search_result']['weight'] = 3; /* WAS: 0 */
    $data['node-ding_news-ding_news_groups_ref']['display']['teaser']['weight'] = 5; /* WAS: 0 */
  }
  if (isset($data['node-ding_news-field_ding_news_body'])) {
    $data['node-ding_news-field_ding_news_body']['display']['search_result']['weight'] = 5; /* WAS: 7 */
    $data['node-ding_news-field_ding_news_body']['display']['teaser']['weight'] = 9; /* WAS: 8 */
  }
  if (isset($data['node-ding_news-field_ding_news_files'])) {
    $data['node-ding_news-field_ding_news_files']['display']['search_result']['weight'] = 6; /* WAS: 8 */
    $data['node-ding_news-field_ding_news_files']['display']['teaser']['weight'] = 8; /* WAS: 6 */
  }
  if (isset($data['node-ding_news-field_ding_news_lead'])) {
    $data['node-ding_news-field_ding_news_lead']['display']['teaser']['weight'] = 2; /* WAS: 3 */
  }
  if (isset($data['node-ding_news-field_ding_news_list_image'])) {
    $data['node-ding_news-field_ding_news_list_image']['display']['search_result']['type'] = 'hidden'; /* WAS: 'cs_adaptive_image' */
    $data['node-ding_news-field_ding_news_list_image']['display']['search_result']['weight'] = 2; /* WAS: 1 */
    $data['node-ding_news-field_ding_news_list_image']['display']['teaser']['type'] = 'hidden'; /* WAS: 'cs_adaptive_image' */
    $data['node-ding_news-field_ding_news_list_image']['display']['teaser']['weight'] = 3; /* WAS: 0 */
    unset($data['node-ding_news-field_ding_news_list_image']['display']['search_result']['module']);
    unset($data['node-ding_news-field_ding_news_list_image']['display']['search_result']['settings']['image_link']);
    unset($data['node-ding_news-field_ding_news_list_image']['display']['search_result']['settings']['styles']);
    unset($data['node-ding_news-field_ding_news_list_image']['display']['teaser']['module']);
    unset($data['node-ding_news-field_ding_news_list_image']['display']['teaser']['settings']['image_link']);
    unset($data['node-ding_news-field_ding_news_list_image']['display']['teaser']['settings']['styles']);
  }
  if (isset($data['node-ding_news-field_ding_news_materials'])) {
    $data['node-ding_news-field_ding_news_materials']['display']['search_result']['weight'] = 4; /* WAS: 6 */
    $data['node-ding_news-field_ding_news_materials']['display']['teaser']['weight'] = 6; /* WAS: 4 */
  }
  if (isset($data['node-ding_news-field_ding_news_tags'])) {
    $data['node-ding_news-field_ding_news_tags']['display']['teaser']['weight'] = 7; /* WAS: 5 */
  }
  if (isset($data['node-ding_news-field_ding_news_title_image'])) {
    $data['node-ding_news-field_ding_news_title_image']['display']['default']['settings']['styles']['breakpoint_2'] = 480; /* WAS: 500 */
    $data['node-ding_news-field_ding_news_title_image']['display']['default']['settings']['styles']['fallback_style'] = 'bibsdb_masonry_large'; /* WAS: 'ding_panorama_primary_large' */
    $data['node-ding_news-field_ding_news_title_image']['display']['default']['settings']['styles']['max_style'] = 'bibsdb_masonry_large'; /* WAS: 'ding_panorama_primary_large' */
    $data['node-ding_news-field_ding_news_title_image']['display']['default']['settings']['styles']['style_1'] = 'ding_primary_small'; /* WAS: 'ding_panorama_primary_medium' */
    $data['node-ding_news-field_ding_news_title_image']['display']['default']['settings']['styles']['style_2'] = 'ding_primary_small'; /* WAS: 'ding_panorama_primary_small' */
    $data['node-ding_news-field_ding_news_title_image']['display']['search_result']['module'] = 'cs_adaptive_image'; /* WAS: '' */
    $data['node-ding_news-field_ding_news_title_image']['display']['search_result']['settings']['image_link'] = ''; /* WAS: '' */
    $data['node-ding_news-field_ding_news_title_image']['display']['search_result']['settings']['styles'] = array(
      'breakpoint_1' => 768,
      'breakpoint_2' => 500,
      'fallback_style' => 'bibsdb_list_large',
      'max_style' => 'bibsdb_list_large',
      'style_1' => 'bibsdb_list_medium',
      'style_2' => 'bibsdb_list_small',
    ); /* WAS: '' */
    $data['node-ding_news-field_ding_news_title_image']['display']['search_result']['type'] = 'cs_adaptive_image'; /* WAS: 'hidden' */
    $data['node-ding_news-field_ding_news_title_image']['display']['search_result']['weight'] = 2; /* WAS: 5 */
    $data['node-ding_news-field_ding_news_title_image']['display']['teaser']['label'] = 'hidden'; /* WAS: 'above' */
    $data['node-ding_news-field_ding_news_title_image']['display']['teaser']['module'] = 'cs_adaptive_image'; /* WAS: '' */
    $data['node-ding_news-field_ding_news_title_image']['display']['teaser']['settings']['image_link'] = ''; /* WAS: '' */
    $data['node-ding_news-field_ding_news_title_image']['display']['teaser']['settings']['styles'] = array(
      'breakpoint_1' => 768,
      'breakpoint_2' => 500,
      'fallback_style' => 'bibsdb_list_large',
      'max_style' => 'bibsdb_list_large',
      'style_1' => 'bibsdb_list_medium',
      'style_2' => 'bibsdb_list_small',
    ); /* WAS: '' */
    $data['node-ding_news-field_ding_news_title_image']['display']['teaser']['type'] = 'cs_adaptive_image'; /* WAS: 'hidden' */
    $data['node-ding_news-field_ding_news_title_image']['display']['teaser']['weight'] = 0; /* WAS: 7 */
  }
  if (isset($data['node-ding_news-og_group_ref'])) {
    $data['node-ding_news-og_group_ref']['display']['search_result']['weight'] = 7; /* WAS: 9 */
    $data['node-ding_news-og_group_ref']['display']['teaser']['weight'] = 4; /* WAS: 0 */
  }
}

/**
 * Implements hook_strongarm_alter().
 */
function bibsdb_news_strongarm_alter(&$data) {
  if (isset($data['field_bundle_settings_node__ding_news'])) {
    $data['field_bundle_settings_node__ding_news']->value['view_modes']['diff_standard'] = array(
      'custom_settings' => FALSE,
    ); /* WAS: '' */
    $data['field_bundle_settings_node__ding_news']->value['view_modes']['workflow_tab'] = array(
      'custom_settings' => FALSE,
    ); /* WAS: '' */
  }
  if (isset($data['node_options_ding_news'])) {
    unset($data['node_options_ding_news']->value[0]);
  }
}
