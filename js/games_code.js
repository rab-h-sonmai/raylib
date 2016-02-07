$(document).ready(function() {
    
    // Init fancybox
    $('.fancybox').fancybox();

    var exampleName = [ 
        'sample_arkanoid',
        'sample_missile_commander',
        'sample_gorilas',
        'sample_snake',
        'sample_asteroids',
        'sample_asteroids_survival',
        'sample_pang',
        'sample_space_invaders',
        'sample_floppy',
        'sample_tetris',
        'sample_gold_fever',
        'sample_doom',
        'game_raylib_features',
        'game_drturtle',
        'game_just_do',
        'game_skully_escape',
        'game_koala_seasons',
        'game_light_my_ritual'];

    var exampleDesc = [
        'arkanoid',
        'missile commander',
        'gorilas',
        'snake',
        'asteroids',
        'asteroids survival',
        'pang',
        'space invaders',
        'floppy',
        'tetris',
        'gold fever',
        'doom',
        'raylib Features DEMO',
        'Dr Turtle & Mr Gamera',
        'JUST DO',
        'Skully Escape',
        'Koala Seasons',
        'LIGHT MY RITUAL'];

    for (var i = 0; i < exampleName.length; i++)
    {
        var filterType = exampleName[i].substring(0, exampleName[i].indexOf("_"));
        
        // TODO: samples open an exmain.html samples page while full games open a brand new page
        
        var linkTag
        
        if (filterType == 'sample') linkTag = '<a class="fancybox fancybox.iframe" href="games/sample_main.html?name=' + exampleName[i] + '" title="' + exampleDesc[i] + '">'
        else if (filterType == 'game') linkTag = '<a target="_blank" href="games/' + exampleName[i].substring(5) + '.html" title="' + exampleDesc[i] + '">'
        
        if (exampleName[i] == 'game_koala_seasons') linkTag = '<a target="_blank" href="http://www.koalaseasons.com" title="' + exampleDesc[i] + '">'

        $('#container').append(
            '<div class="mix f' + filterType + '">' + linkTag +
            '<img width="400" height="225" src="../games/img/' + exampleName[i] + '.png"><div class="extext"><p>' + exampleDesc[i] + '</p></div></a>' +
            '</div>');

        $('#container a .extext').hide();
    }

    // Instantiate MixItUp:
	$('#container').mixItUp();

    $("#container a").hover(
        function(){ $(this).find(".extext").show(); },
        function(){ $(this).find(".extext").hide(); });

/*
    $("#container a img").hover(
        function() { $(this).stop().animate({ opacity:0.6 }, 200, "easeOutQuad" ); },
        function() { $(this).stop().animate({ opacity:0 }, 200, "easeOutQuad" ); }
    )
*/
});