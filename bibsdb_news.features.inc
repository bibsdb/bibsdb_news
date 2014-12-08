<?php
/**
 * @file
 * bibsdb_news.features.inc
 */

/**
 * Implements hook_field_default_field_instances_alter().
 */
function bibsdb_news_field_default_field_instances_alter(&$data) {
  if (isset($data['node-ding_news-field_ding_news_list_image'])) {
    $data['node-ding_news-field_ding_news_list_image']['display']['search_result']['settings']['image_link'] = 'content'; /* WAS: '' */
    $data['node-ding_news-field_ding_news_list_image']['display']['search_result']['settings']['styles']['breakpoint_1'] = 768; /* WAS: '' */
    $data['node-ding_news-field_ding_news_list_image']['display']['search_result']['settings']['styles']['breakpoint_2'] = 500; /* WAS: '' */
    $data['node-ding_news-field_ding_news_list_image']['display']['search_result']['settings']['styles']['fallback_style'] = 'ding_list_large'; /* WAS: '' */
    $data['node-ding_news-field_ding_news_list_image']['display']['search_result']['settings']['styles']['max_style'] = 'ding_list_large'; /* WAS: '' */
    $data['node-ding_news-field_ding_news_list_image']['display']['search_result']['settings']['styles']['style_1'] = 'ding_list_medium'; /* WAS: '' */
    $data['node-ding_news-field_ding_news_list_image']['display']['search_result']['settings']['styles']['style_2'] = 'ding_list_small'; /* WAS: '' */
  }
}

/**
 * Implements hook_strongarm_alter().
 */
function bibsdb_news_strongarm_alter(&$data) {
  if (isset($data['node_options_ding_news'])) {
    unset($data['node_options_ding_news']->value[0]);
  }
}
