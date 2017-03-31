<!-- // --- TEMPLATE | PHOTOSWIPE-START -->

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

<!-- // --- TEMPLATE | PHOTOSWIPE-END -->