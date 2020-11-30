
timedelay = 1; 
count= 10;
i= 0;
spaming = setInterval(function(){
document.getElementsByClassName('composer_rich_textarea')[0].innerHTML = "Hello";
$('.im_submit_send').trigger('mousedown');	
i++;

if( i  === count )
clearInterval(spaming);
} , timedelay * 1000 ) ;
