var speed=50; //delay (in ms)
var i = setInterval(spam,speed);
function spam(){
        var message="Hi"; //message
        var textbox= document.getElementsByClassName("composer_rich_textarea");
        textbox[0].innerHTML=message;
        //press send button
        $(".btn").trigger('mousedown');
}