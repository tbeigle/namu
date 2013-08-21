(function ($) {
  Drupal.behaviors.namuMain = {
    attach: function(context, settings) {
      if ($('.field-name-field-glossary-item').length) {
        $('.field-name-field-glossary-item > .field-items > .field-item').each(function() {
          var $this = $(this),
              $term = $this.find('.field-name-field-glossary-term'),
              $def = $this.find('.field-name-field-glossary-definition');
          
          $term.click(function() {
            var is_vis = $def.hasClass('visible');
            
            $('.field-name-field-glossary-item > .field-items > .field-item .field-name-field-glossary-definition').slideUp(150);
            
            if (is_vis) {
              $def.removeClass('visible');
            }
            else {
              $def.slideDown(150, function() {
                $def.addClass('visible');
              });
            }
          });
        });
      }
    }
  }
})(jQuery);
