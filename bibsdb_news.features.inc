<?php
/**
 * @file
 * bibsdb_news.features.inc
 */

/**
 * Implements hook_strongarm_alter().
 */
function bibsdb_news_strongarm_alter(&$data) {
  if (isset($data['node_options_ding_news'])) {
    unset($data['node_options_ding_news']->value[0]);
  }
}
