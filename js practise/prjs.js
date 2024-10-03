 function clickHandler(color){
         return function(){   
            
            document.body.style.backgroundColor=`${color}`
    }

 }
document.getElementById("blue").onclick=clickHandler("blue")

document.getElementById("black").onclick=clickHandler("red")

function outer(){
    const name="Teju"
    
    function inner1(){
        const sur="bisen"
         console.log(name)
         console.log(sur)
    }
    function inner2(){
        console.log(name)
       
   }
   inner1()
   inner2()
}outer()

