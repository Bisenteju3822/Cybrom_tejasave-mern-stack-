const count=0;
const slider=function(){
      setInterval(run,3000)

      function run(){
        if(count===0){
        let selectarticle=document.querySelector("sldierdiv")
        selectarticle.style.marginLeft="0px"
        selectarticle.transition="margin-left .5s"
        count++;
        }
        if(count===1){
            let selectarticle=document.querySelector("sldierdiv")
            selectarticle.style.marginLeft="-1000px"
            selectarticle.transition="margin-left .5s"
            count++;
            }
            if(count===2){
                let selectarticle=document.querySelector("sldierdiv")
                selectarticle.style.marginLeft="-2000px"
                selectarticle.transition="margin-left .5s"
                count==0
                }
      }
}
