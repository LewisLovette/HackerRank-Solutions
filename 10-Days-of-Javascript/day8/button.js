var countClicks = 0, btn = document.getElementById('btn');  //sets up button to btn
btn.className = "btn";  //so works with CSS and HTML for the style in css and event listener in this
//btn.style.css = "width: 96px; height: 48px; font-size: 24px;"

btn.addEventListener('click',function(){ 
    countClicks++;
    btn.innerHTML = countClicks;
})