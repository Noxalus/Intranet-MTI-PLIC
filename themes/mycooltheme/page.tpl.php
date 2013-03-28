
<div id="page-wrapper">

	<div id="page">
		<div id="header">
			<a id="logo" href="<?php print $front_page;?>">
			  <img title="Accueil" src="<?php print $base_path?>/<?php print $directory;?>/images/logo.png" alt="<?php print $site_name;?>" />
			</a>
			
			<div id="name-and-slogan">
				<h1 id="site-name">
					<a rel="home" title="Accueil" href="/Intranet-MTI-PLIC/">
						<span>Intranet MTI</span>
					</a>
				</h1>
			</div>
			
			<a id="logo-EPITA" href="www.epita.fr">
			  <img title="EPITA" src="<?php print $base_path?>/<?php print $directory;?>/images/logo-EPITA.png" />
			</a>
			
			<div id="menu_placement">
				<ul id="trans-nav">
					<li><a class="mainmenu" href="<?php print $front_page;?>">Accueil</a></li>
					
					<li><a class="mainmenu" href="#">Cours</a>
						<ul>
							<li><a href="#">*Gérer les cours*</a></li>
						</ul>
					</li>
					
					<li><a class="mainmenu" href="#">Projets</a>
						<ul>
							<li><a href="#">PLIC</a></li>
							<li><a href="#">DOT.NET</a></li>
						</ul>
					</li>
					
					<li><a class="mainmenu" href="#">Services</a>
						<ul>
							<li><a href="#">Matériel</a></li>
							<li><a href="#">Budget</a></li>
						</ul>
					</li>
					
					<li><a class="mainmenu" href="#">Communauté</a>
						<ul>
							<li><a href="#">Forum</a></li>
							<li><a href="#">Wiki</a></li>
							<li><a href="#">Promotion</a></li>
						</ul>
					</li>
					
					<li><a class="mainmenu" href="#">Mon Compte</a>
						<ul>
							<li><a href="#">Parametres</a></li>
							<li><a href="#">Mes notes</a></li>
							<li><a href="#">*Lister les profils*</a></li>
						</ul>
					</li>
					<li class="mainmenu"id="dernier"><a href="#">Nous contacter</a></li>
				</ul>
			</div>
		</div>
		
		<div id="wrapper">  
			<div id="content">
				<?php print render($title_prefix); ?>
				<?php if ($title): ?><h1><?php print $title; ?></h1><?php endif; ?>
				<?php print render($title_suffix); ?>

				<?php print render($messages); ?>
				<?php if ($tabs): ?><div class="tabs"><?php print render($tabs); ?></div><?php endif; ?>
				<?php if ($action_links): ?><ul class="action-links"><?php print render($action_links); ?></ul><?php endif; ?>

				<?php print render($page['content']); ?>
			</div>
		</div>

		<div id="footer">
				COPYRIGHT © Intranet MTI 2013 Tous droits reservés
		</div>
	  
	</div>
</div>