var countClicks = 0, btn = document.getElementById('btn');  //sets up button to btn
btn.className = "btn";
btn.innerHTML = countClicks;

btn.addEventListener("click",function() {
    countClicks++;
    this.innerHTML = countClicks;
});