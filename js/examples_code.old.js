$(document).ready(function() {
    $('.fancybox').fancybox();
    
    var exNums = ['ex01', 'ex02a', 'ex02b', 'ex02c', 'ex03a', 'ex03b', 'ex03c', 'ex04a', 'ex04b',
                  'ex05a', 'ex05b', 'ex06a', 'ex06b', 'ex06c', 'ex07a', 'ex07b', 'ex07c', 'ex08'];
    var exDesc = ['basic window', 'logo raylib', 'basic shapes', 'color palette', 'input keys', 'input mouse',
                  'input gamepad', 'textures', 'texture rectangle', 'sprite fonts', 'rbmf fonts', 'color select',
                  'logo anim', 'font select', '3d mode', '3d shapes', '3d models', 'audio'];
    var exType = ['core', 'shapes', 'shapes', 'shapes', 'core', 'core', 'core', 'textures', 'textures', 
                  'text', 'text', 'core', 'shapes', 'text', 'models', 'models', 'models', 'audio'];
    
    $('#basicgrid').append('<a href="down/SETUP.txt"><div class="specialBox"><div class="in"><div class="boxintext">setup</div></div></div></a>');
    $('#basicgrid').append('<a href="cheatsheet.html"><div class="specialBox"><div class="in"><div class="boxintext">cheat sheet</div></div></div></a>');
    
    for (var i = 0; i < exNums.length; i++)
    {
        $('#basicgrid').append('<a class="fancybox fancybox.iframe" href="exmain.html?name=' + exNums[i] + '_' + exDesc[i].replace(' ', '_') + '" title="' + exNums[i] + ' - ' + exDesc[i] + '">' +
                          '<div num=' + i.toString() + ' id="' + exNums[i] + '" class="exampleBox ' + exType[i] + '"><div class="in">' + exNums[i].replace('ex','') +'</div></div></a>');
    }
    
    // Bind on enter and on leave functions
    $('.exampleBox').hover(
        function() { 
            var exNum = parseInt($(this).attr('num'), 10);
            
            // Small PATH to fit text on the box...
            if (exNum == 6) { $('#' + exNums[exNum] + ' .in').text('input pad'); $('#' + exNums[exNum] + ' .in').addClass("boxintextex"); }
            else if (exNum == 7) { $('#' + exNums[exNum] + ' .in').text('texture'); $('#' + exNums[exNum] + ' .in').addClass("boxintextex"); }
            else if (exNum == 8) { $('#' + exNums[exNum] + ' .in').text('texture rect'); $('#' + exNums[exNum] + ' .in').addClass("boxintextex"); }
            else { $('#' + exNums[exNum] + ' .in').text(exDesc[exNum]); $('#' + exNums[exNum] + ' .in').addClass("boxintextex"); }
        },
        function() { 
            var exNum = parseInt($(this).attr('num'), 10);
            $('#' + exNums[exNum] + ' .in').text(exNums[exNum].replace('ex', '')); $('#' + exNums[exNum] + ' .in').removeClass("boxintextex");
        } 
    );
    
    // Fancy lightning when mouseenter on legend buttons
    $('#core').hover(
        function(){
            $('#' + exNums[0] + ' .in').text(exDesc[0]); 
            $('#' + exNums[0] + ' .in').addClass("boxintextex");
            $('#' + exNums[0]).toggleClass("coreHovered");
            
            $('#' + exNums[4] + ' .in').text(exDesc[4]); 
            $('#' + exNums[4] + ' .in').addClass("boxintextex");
            $('#' + exNums[4]).toggleClass("coreHovered");
            
            $('#' + exNums[5] + ' .in').text(exDesc[5]); 
            $('#' + exNums[5] + ' .in').addClass("boxintextex");
            $('#' + exNums[5]).toggleClass("coreHovered");
            
            $('#' + exNums[6] + ' .in').text('input pad'); 
            $('#' + exNums[6] + ' .in').addClass("boxintextex");
            $('#' + exNums[6]).toggleClass("coreHovered");
            
            $('#' + exNums[11] + ' .in').text(exDesc[11]); 
            $('#' + exNums[11] + ' .in').addClass("boxintextex");
            $('#' + exNums[11]).toggleClass("coreHovered");
        },
        function() {
            $('#' + exNums[0] + ' .in').text(exNums[0].replace('ex', '')); 
            $('#' + exNums[0] + ' .in').removeClass("boxintextex");
            $('#' + exNums[0]).toggleClass("coreHovered");
    
            $('#' + exNums[4] + ' .in').text(exNums[4].replace('ex', '')); 
            $('#' + exNums[4] + ' .in').removeClass("boxintextex");
            $('#' + exNums[4]).toggleClass("coreHovered");
            
            $('#' + exNums[5] + ' .in').text(exNums[5].replace('ex', '')); 
            $('#' + exNums[5] + ' .in').removeClass("boxintextex");
            $('#' + exNums[5]).toggleClass("coreHovered");
            
            $('#' + exNums[6] + ' .in').text(exNums[6].replace('ex', '')); 
            $('#' + exNums[6] + ' .in').removeClass("boxintextex");
            $('#' + exNums[6]).toggleClass("coreHovered");
            
            $('#' + exNums[11] + ' .in').text(exNums[11].replace('ex', '')); 
            $('#' + exNums[11] + ' .in').removeClass("boxintextex");
            $('#' + exNums[11]).toggleClass("coreHovered");
        }
    );
    
    $('#shapes').hover(
        function(){
            $('#' + exNums[1] + ' .in').text(exDesc[1]); 
            $('#' + exNums[1] + ' .in').addClass("boxintextex");
            $('#' + exNums[1]).toggleClass("shapesHovered");
            
            $('#' + exNums[2] + ' .in').text(exDesc[2]); 
            $('#' + exNums[2] + ' .in').addClass("boxintextex");
            $('#' + exNums[2]).toggleClass("shapesHovered");
            
            $('#' + exNums[3] + ' .in').text(exDesc[3]); 
            $('#' + exNums[3] + ' .in').addClass("boxintextex");
            $('#' + exNums[3]).toggleClass("shapesHovered");
            
            $('#' + exNums[12] + ' .in').text(exDesc[12]); 
            $('#' + exNums[12] + ' .in').addClass("boxintextex");
            $('#' + exNums[12]).toggleClass("shapesHovered");
        },
        function() {
            $('#' + exNums[1] + ' .in').text(exNums[1].replace('ex', '')); 
            $('#' + exNums[1] + ' .in').removeClass("boxintextex");
            $('#' + exNums[1]).toggleClass("shapesHovered");
    
            $('#' + exNums[2] + ' .in').text(exNums[2].replace('ex', '')); 
            $('#' + exNums[2] + ' .in').removeClass("boxintextex");
            $('#' + exNums[2]).toggleClass("shapesHovered");
            
            $('#' + exNums[3] + ' .in').text(exNums[3].replace('ex', '')); 
            $('#' + exNums[3] + ' .in').removeClass("boxintextex");
            $('#' + exNums[3]).toggleClass("shapesHovered");
            
            $('#' + exNums[12] + ' .in').text(exNums[12].replace('ex', '')); 
            $('#' + exNums[12] + ' .in').removeClass("boxintextex");
            $('#' + exNums[12]).toggleClass("shapesHovered");
        }
    );
    
    $('#textures').hover(
        function(){
            $('#' + exNums[7] + ' .in').text('texture'); 
            $('#' + exNums[7] + ' .in').addClass("boxintextex");
            $('#' + exNums[7]).toggleClass("texturesHovered");
            
            $('#' + exNums[8] + ' .in').text('texture rect'); 
            $('#' + exNums[8] + ' .in').addClass("boxintextex");
            $('#' + exNums[8]).toggleClass("texturesHovered");
        },
        function() {
            $('#' + exNums[7] + ' .in').text(exNums[7].replace('ex', '')); 
            $('#' + exNums[7] + ' .in').removeClass("boxintextex");
            $('#' + exNums[7]).toggleClass("texturesHovered");
    
            $('#' + exNums[8] + ' .in').text(exNums[8].replace('ex', '')); 
            $('#' + exNums[8] + ' .in').removeClass("boxintextex");
            $('#' + exNums[8]).toggleClass("texturesHovered");
        }
    );
    
    $('#text').hover(
        function(){
            $('#' + exNums[9] + ' .in').text(exDesc[9]); 
            $('#' + exNums[9] + ' .in').addClass("boxintextex");
            $('#' + exNums[9]).toggleClass("textHovered");
            
            $('#' + exNums[10] + ' .in').text(exDesc[10]); 
            $('#' + exNums[10] + ' .in').addClass("boxintextex");
            $('#' + exNums[10]).toggleClass("textHovered");
            
            $('#' + exNums[13] + ' .in').text(exDesc[13]); 
            $('#' + exNums[13] + ' .in').addClass("boxintextex");
            $('#' + exNums[13]).toggleClass("textHovered");
        },
        function() {
            $('#' + exNums[9] + ' .in').text(exNums[9].replace('ex', '')); 
            $('#' + exNums[9] + ' .in').removeClass("boxintextex");
            $('#' + exNums[9]).toggleClass("textHovered");
    
            $('#' + exNums[10] + ' .in').text(exNums[10].replace('ex', '')); 
            $('#' + exNums[10] + ' .in').removeClass("boxintextex");
            $('#' + exNums[10]).toggleClass("textHovered");
            
            $('#' + exNums[13] + ' .in').text(exNums[13].replace('ex', '')); 
            $('#' + exNums[13] + ' .in').removeClass("boxintextex");
            $('#' + exNums[13]).toggleClass("textHovered");
        }
    );
    
    $('#models').hover(
        function(){
            $('#' + exNums[14] + ' .in').text(exDesc[14]); 
            $('#' + exNums[14] + ' .in').addClass("boxintextex");
            $('#' + exNums[14]).toggleClass("modelsHovered");
            
            $('#' + exNums[15] + ' .in').text(exDesc[15]); 
            $('#' + exNums[15] + ' .in').addClass("boxintextex");
            $('#' + exNums[15]).toggleClass("modelsHovered");
            
            $('#' + exNums[16] + ' .in').text(exDesc[16]); 
            $('#' + exNums[16] + ' .in').addClass("boxintextex");
            $('#' + exNums[16]).toggleClass("modelsHovered");
        },
        function() {
            $('#' + exNums[14] + ' .in').text(exNums[14].replace('ex', '')); 
            $('#' + exNums[14] + ' .in').removeClass("boxintextex");
            $('#' + exNums[14]).toggleClass("modelsHovered");
    
            $('#' + exNums[15] + ' .in').text(exNums[15].replace('ex', '')); 
            $('#' + exNums[15] + ' .in').removeClass("boxintextex");
            $('#' + exNums[15]).toggleClass("modelsHovered");
            
            $('#' + exNums[16] + ' .in').text(exNums[16].replace('ex', '')); 
            $('#' + exNums[16] + ' .in').removeClass("boxintextex");
            $('#' + exNums[16]).toggleClass("modelsHovered");
        }
    );
    
    $('#audio').hover(
        function(){
            $('#' + exNums[17] + ' .in').text(exDesc[17]); 
            $('#' + exNums[17] + ' .in').addClass("boxintextex");
            $('#' + exNums[17]).toggleClass("audioHovered");
        },
        function() {
            $('#' + exNums[17] + ' .in').text(exNums[17].replace('ex', '')); 
            $('#' + exNums[17] + ' .in').removeClass("boxintextex");
            $('#' + exNums[17]).toggleClass("audioHovered");
        }
    );

    // Quicksand jquery effects
    $('#source').quicksand($('#destination li'));
    
});