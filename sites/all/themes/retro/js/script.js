/**
 * @file
 * A JavaScript file for the theme.
 *
 * In order for this JavaScript to be loaded on pages, see the instructions in
 * the README.txt next to this file.
 */

// JavaScript should be made compatible with libraries other than jQuery by
// wrapping it with an "anonymous closure". See:
// - https://drupal.org/node/1446420
// - http://www.adequatelygood.com/2010/3/JavaScript-Module-Pattern-In-Depth
(function ($, Drupal, window, document) {

  'use strict';

  // To understand behaviors, see https://drupal.org/node/756722#behaviors
  Drupal.behaviors.base = {
    attach: function (context, settings) {

    	$('.front-page-top .views-field-title').each(function() {
	    		var height = $(this).height() * -1;
	    		$(this).css('margin-top', height + 'px');
	    	})
    	if ($(window).width() > 600) {
    		var rightHeight = $('#front-top-right').height();
    		$('#front-top-left').height(rightHeight);
    	}
	    $(window).resize(function() {
	    	$('.front-page-top .views-field-title').each(function() {
	    		var height = $(this).height() * -1;
	    		$(this).css('margin-top', height + 'px');
	    	})
	    	if ($(window).width() > 600) {
	    		var rightHeight = $('#front-top-right').height();
	    		$('#front-top-left').height(rightHeight);
	    	}
	    })
	    
    	

    }
  };

})(jQuery, Drupal, this, this.document);
