<?php
/**
 * @file
 * Custom template for the site footer
 */
?>

<?php if (!empty($e['year']) && !empty($e['text'])): ?>
  <div class="namu-site-footer">
    <p class="left copyright">&copy; <?php print $e['year']; ?> <?php print $e['text']; ?></p>
    
    <?php if (!empty($e['links'])): ?>
      <div class="right links">
        <ul class="no-style">
          <?php foreach ($e['links'] as $link): ?>
            <li><?php print $link; ?></li>
          <?php endforeach; ?>
        </ul>
      </div>
    <?php endif; ?>
  </div>
<?php endif; ?>
