let count = 0;  // Use 'let' since 'count' will be incremented
const slid = function() {
  setInterval(run, 3000);

    function run() {
        let selectarticle = document.querySelector("#sliderdiv");  // Use '#' for ID selector

        if (count === 0) {
            selectarticle.style.marginLeft = "0px";
            selectarticle.style.transition = "margin-left .5s";
            count++;
        } else if (count === 1) {
            selectarticle.style.marginLeft = "-1000px";
            selectarticle.style.transition = "margin-left .5s";
            count++;
        } else if (count === 2) {
            selectarticle.style.marginLeft = "-2000px";
            selectarticle.style.transition = "margin-left .5s";
            count = 0;  // Reset the counter correctly
        }
     
    }
    run();
    alert("on");
}

window.onload = slid;

