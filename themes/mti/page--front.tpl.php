
<div id="page-wrapper">
	<div id="connexion">
		<img title="Connexion" src="<?php print $base_path?>/<?php print $directory;?>/images/logo.png" alt="<?php print $site_name;?>" />
		
		<?php print render($title_prefix); ?>
		<?php if ($title): ?><h1><?php print $title; ?></h1><?php endif; ?>
		<?php print render($title_suffix); ?>

		<?php print render($messages); ?>
		<?php if ($tabs): ?><div class="tabs"><?php print render($tabs); ?></div><?php endif; ?>
		<?php if ($action_links): ?><ul class="action-links"><?php print render($action_links); ?></ul><?php endif; ?>

		<?php print render($page['content']); ?>
	</div>
</div>