<!-- // --- TEMPLATE | Header (HTML) -->
<head>

    <!-- Variante 1: Einbindung per MINIFY-Addon -->
    REX_MINIFY[type=css set=resources_CSS]

    <!-- Variante 2: Einbindung per CSS -->
    <!-- Core CSS file -->
    <link rel="stylesheet" href="<?php echo rex_url::base('assets/photoswipe/photoswipe.css') ?>">
    <!-- Skin CSS file (styling of UI - buttons, caption, etc.)
     In the folder of skin CSS file there are also:
     - .png and .svg icons sprite,
     - preloader.gif (for browsers that do not support CSS animations) -->
    <link rel="stylesheet" href="<?php echo rex_url::base('assets/photoswipe/default-skin/default-skin.css') ?>">

</head>

<!-- // --- TEMPLATE | BODY -->
<body>

    <!-- // --- TEMPLATE | JS -->

    <!-- Variante 1 bzw. 2 gilt auch für die JS-Dateien -->

    <!-- jQuery // Nur notwendig wenn jQuery nicht anders eingebunden wird // -->
    <script src="<?php echo rex_url::base('assets/photoswipe/plugins/jquery/jquery-3.1.1.min.js') ?>"></script>

    ...

    <!-- photoswipe/js-file -->
    <!-- Core JS file -->
    <script src="<?php echo rex_url::base('assets/photoswipe/photoswipe.min.js') ?>"></script>
    <!-- UI JS file -->
    <script src="<?php echo rex_url::base('assets/photoswipe/photoswipe-ui-default.min.js') ?>"></script>

    <!-- photoswipe/script -->
    // GALERIE - photoswipe
    function bs_photoswipe(obj) {

        if(!obj.length) return;

        obj.photoswipe({
        // TODO
        <!--
        thumbnail: true,
        selector: ".photoswipe__button"
        -->
        });

    }//end function


    // READY - START
    jQuery(document).ready(function(){

        "use strict";

        // Call BS_photoswipe
        bs_photoswipe($(".gallery"));

    });
    // Ende ready function()

</body>
