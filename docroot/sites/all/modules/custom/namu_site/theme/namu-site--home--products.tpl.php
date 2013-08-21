<?php
/**
 * @file
 * Custom template for the homepage products panel
 */
?>

<?php if (!empty($e['products'])): ?>
  <div<?php print drupal_attributes($e['panel_attributes']); ?>>
    <?php if (!empty($e['img'])): ?>
      <div class="left">
        <?php print $e['img']; ?>
      </div>
    <?php endif; ?>
    
    <div class="right">
      <?php if (!empty($e['label'])): ?>
        <h2 class="namu-home-products-label">
          <?php print $e['label']; ?>
        </h2>
      <?php endif; ?>
      
      <ul class="no-style img-bullets">
        <?php foreach ($e['products'] as $product): ?>
          <li><?php print $product; ?></li>
        <?php endforeach; ?>
      </ul>
      <!-- /.no-style /.img-bullets -->
      
      <?php if (!empty($e['link'])): ?>
        <p class="products-panel-link-wrapper"><?php print $e['link']; ?></p>
      <?php endif; ?>
    </div>
    <!-- /.right -->
  </div>
<?php endif; ?>
