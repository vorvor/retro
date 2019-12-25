<?php

/**
 * @file
 * base.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function base_default_rules_configuration() {
  $items = array();
  $items['rules_login_redirect'] = entity_import('rules_config', '{ "rules_login_redirect" : {
      "LABEL" : "Login redirect",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "ON" : { "user_login" : [] },
      "DO" : [ { "redirect" : { "url" : "https:\\/\\/retrozenek.hu" } } ]
    }
  }');
  return $items;
}
