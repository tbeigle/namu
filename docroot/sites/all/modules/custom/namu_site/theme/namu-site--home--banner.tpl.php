<?php
/**
 * @file
 * Custom template for the homepage banner
 */
?>

<?php if (!empty($e['line1']) || !empty($e['line2'])): ?>
  <h1<?php print drupal_attributes($e['title_attributes']); ?>>
    <?php if (!empty($e['line1'])): ?>
      <?php print $e['line1']; ?>
    <?php endif; ?>
    
    <?php if (!empty($e['line2'])): ?>
      <strong class="line2"><?php print $e['line2']; ?></strong>
    <?php endif; ?>
  </h1>
<?php endif; ?>
