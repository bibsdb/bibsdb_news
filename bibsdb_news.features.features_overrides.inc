<?php
/**
 * @file
 * bibsdb_news.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function bibsdb_news_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: field_group
  $overrides["field_group.group_left_col_search|node|ding_news|search_result.data|children|0"] = 'field_ding_news_title_image';

  // Exported overrides for: field_instance
  $overrides["field_instance.node-ding_news-ding_news_groups_ref.display|search_result|weight"] = 3;
  $overrides["field_instance.node-ding_news-ding_news_groups_ref.display|teaser|weight"] = 5;
  $overrides["field_instance.node-ding_news-field_ding_news_body.display|search_result|weight"] = 5;
  $overrides["field_instance.node-ding_news-field_ding_news_body.display|teaser|weight"] = 9;
  $overrides["field_instance.node-ding_news-field_ding_news_files.display|search_result|weight"] = 6;
  $overrides["field_instance.node-ding_news-field_ding_news_files.display|teaser|weight"] = 8;
  $overrides["field_instance.node-ding_news-field_ding_news_lead.display|teaser|weight"] = 2;
  $overrides["field_instance.node-ding_news-field_ding_news_list_image.display|search_result|module"]["DELETED"] = TRUE;
  $overrides["field_instance.node-ding_news-field_ding_news_list_image.display|search_result|settings|image_link"]["DELETED"] = TRUE;
  $overrides["field_instance.node-ding_news-field_ding_news_list_image.display|search_result|settings|styles"]["DELETED"] = TRUE;
  $overrides["field_instance.node-ding_news-field_ding_news_list_image.display|search_result|type"] = 'hidden';
  $overrides["field_instance.node-ding_news-field_ding_news_list_image.display|search_result|weight"] = 2;
  $overrides["field_instance.node-ding_news-field_ding_news_list_image.display|teaser|module"]["DELETED"] = TRUE;
  $overrides["field_instance.node-ding_news-field_ding_news_list_image.display|teaser|settings|image_link"]["DELETED"] = TRUE;
  $overrides["field_instance.node-ding_news-field_ding_news_list_image.display|teaser|settings|styles"]["DELETED"] = TRUE;
  $overrides["field_instance.node-ding_news-field_ding_news_list_image.display|teaser|type"] = 'hidden';
  $overrides["field_instance.node-ding_news-field_ding_news_list_image.display|teaser|weight"] = 3;
  $overrides["field_instance.node-ding_news-field_ding_news_materials.display|search_result|weight"] = 4;
  $overrides["field_instance.node-ding_news-field_ding_news_materials.display|teaser|weight"] = 6;
  $overrides["field_instance.node-ding_news-field_ding_news_tags.display|teaser|weight"] = 7;
  $overrides["field_instance.node-ding_news-field_ding_news_title_image.display|default|settings|styles|fallback_style"] = 'bibsdb_news_title_image';
  $overrides["field_instance.node-ding_news-field_ding_news_title_image.display|default|settings|styles|max_style"] = 'bibsdb_news_title_image';
  $overrides["field_instance.node-ding_news-field_ding_news_title_image.display|default|settings|styles|style_1"] = 'bibsdb_news_title_image';
  $overrides["field_instance.node-ding_news-field_ding_news_title_image.display|default|settings|styles|style_2"] = 'bibsdb_news_title_image';
  $overrides["field_instance.node-ding_news-field_ding_news_title_image.display|search_result|module"] = 'cs_adaptive_image';
  $overrides["field_instance.node-ding_news-field_ding_news_title_image.display|search_result|settings|image_link"] = '';
  $overrides["field_instance.node-ding_news-field_ding_news_title_image.display|search_result|settings|styles"] = array(
    'breakpoint_1' => 768,
    'breakpoint_2' => 500,
    'fallback_style' => 'bibsdb_list_large',
    'max_style' => 'bibsdb_list_large',
    'style_1' => 'bibsdb_list_medium',
    'style_2' => 'bibsdb_list_small',
  );
  $overrides["field_instance.node-ding_news-field_ding_news_title_image.display|search_result|type"] = 'cs_adaptive_image';
  $overrides["field_instance.node-ding_news-field_ding_news_title_image.display|search_result|weight"] = 2;
  $overrides["field_instance.node-ding_news-field_ding_news_title_image.display|teaser|label"] = 'hidden';
  $overrides["field_instance.node-ding_news-field_ding_news_title_image.display|teaser|module"] = 'cs_adaptive_image';
  $overrides["field_instance.node-ding_news-field_ding_news_title_image.display|teaser|settings|image_link"] = '';
  $overrides["field_instance.node-ding_news-field_ding_news_title_image.display|teaser|settings|styles"] = array(
    'breakpoint_1' => 768,
    'breakpoint_2' => 500,
    'fallback_style' => 'bibsdb_list_large',
    'max_style' => 'bibsdb_list_large',
    'style_1' => 'bibsdb_list_medium',
    'style_2' => 'bibsdb_list_small',
  );
  $overrides["field_instance.node-ding_news-field_ding_news_title_image.display|teaser|type"] = 'cs_adaptive_image';
  $overrides["field_instance.node-ding_news-field_ding_news_title_image.display|teaser|weight"] = 0;
  $overrides["field_instance.node-ding_news-og_group_ref.display|search_result|weight"] = 7;
  $overrides["field_instance.node-ding_news-og_group_ref.display|teaser|weight"] = 4;

  // Exported overrides for: variable
  $overrides["variable.field_bundle_settings_node__ding_news.value|view_modes|diff_standard"] = array(
    'custom_settings' => FALSE,
  );
  $overrides["variable.node_options_ding_news.value|0"]["DELETED"] = TRUE;

  // Exported overrides for: views_view
  $overrides["views_view.ding_news.display|default|display_options|fields|field_ding_news_list_image|field"] = 'field_ding_news_title_image';
  $overrides["views_view.ding_news.display|default|display_options|fields|field_ding_news_list_image|id"] = 'field_ding_news_title_image';
  $overrides["views_view.ding_news.display|default|display_options|fields|field_ding_news_list_image|table"] = 'field_data_field_ding_news_title_image';
  $overrides["views_view.ding_news.display|ding_news_frontpage_list|display_options|fields|field_ding_news_list_image"]["DELETED"] = TRUE;
  $overrides["views_view.ding_news.display|ding_news_frontpage_list|display_options|fields|field_ding_news_title_image"] = array(
    'id' => 'field_ding_news_title_image',
    'table' => 'field_data_field_ding_news_title_image',
    'field' => 'field_ding_news_title_image',
    'ui_name' => 'Image (title image as list image)',
    'label' => '',
    'element_type' => 'div',
    'element_class' => 'news-image-wrapper',
    'element_label_colon' => FALSE,
    'element_default_classes' => FALSE,
    'click_sort_column' => 'fid',
    'type' => 'cs_adaptive_image',
    'settings' => array(
      'image_link' => '',
      'styles' => array(
        'breakpoint_1' => 768,
        'style_1' => 'bibsdb_list_medium',
        'breakpoint_2' => 500,
        'style_2' => 'bibsdb_list_small',
        'max_style' => 'bibsdb_list_large',
        'fallback_style' => 'bibsdb_list_large',
      ),
    ),
  );
  $overrides["views_view.ding_news.display|ding_news_groups_list|display_options|fields|field_ding_news_list_image"]["DELETED"] = TRUE;
  $overrides["views_view.ding_news.display|ding_news_groups_list|display_options|fields|field_ding_news_title_image"] = array(
    'id' => 'field_ding_news_title_image',
    'table' => 'field_data_field_ding_news_title_image',
    'field' => 'field_ding_news_title_image',
    'ui_name' => 'Title Image (used as list image)',
    'label' => '',
    'element_type' => 'div',
    'element_class' => 'news-image-wrapper',
    'element_label_colon' => FALSE,
    'element_default_classes' => FALSE,
    'click_sort_column' => 'fid',
    'type' => 'cs_adaptive_image',
    'settings' => array(
      'image_link' => '',
      'styles' => array(
        'breakpoint_1' => 768,
        'style_1' => 'bibsdb_list_medium',
        'breakpoint_2' => 500,
        'style_2' => 'bibsdb_list_small',
        'max_style' => 'bibsdb_list_large',
        'fallback_style' => 'bibsdb_list_large',
      ),
    ),
  );
  $overrides["views_view.ding_news.display|panel_pane_1|display_options|fields|field_ding_news_list_image"]["DELETED"] = TRUE;
  $overrides["views_view.ding_news.display|panel_pane_1|display_options|fields|field_ding_news_title_image"] = array(
    'id' => 'field_ding_news_title_image',
    'table' => 'field_data_field_ding_news_title_image',
    'field' => 'field_ding_news_title_image',
    'ui_name' => 'Title Image used as list image',
    'label' => '',
    'element_type' => 'div',
    'element_class' => 'news-image-wrapper',
    'element_label_colon' => FALSE,
    'click_sort_column' => 'fid',
    'type' => 'cs_adaptive_image',
    'settings' => array(
      'image_link' => '',
      'styles' => array(
        'breakpoint_1' => 768,
        'style_1' => 'bibsdb_list_medium',
        'breakpoint_2' => 500,
        'style_2' => 'bibsdb_list_small',
        'max_style' => 'bibsdb_list_large',
        'fallback_style' => 'bibsdb_list_large',
      ),
    ),
  );

 return $overrides;
}
