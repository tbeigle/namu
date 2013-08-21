<?php
/**
 * @file
 * Custom template for the homepage bio panel
 */
?>

<?php if (!empty($e['bio'])): ?>
  <div<?php print drupal_attributes($e['panel_attributes']); ?>>
    <?php if (!empty($e['img'])): ?>
      <div class="left">
        <?php print $e['img']; ?>
      </div>
    <?php endif; ?>
    
    <div class="right">
      <?php print $e['bio']; ?>
    </div>
    <!-- /.bio -->
  </div>
<?php endif; ?>
