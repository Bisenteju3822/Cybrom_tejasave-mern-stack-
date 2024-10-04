setTimeout(() => {
    console.log("hello")
    
}, 2000)
setTimeout(function() {
     console.log("new")
}, 4000)

const shw=function(){
    let a=document.querySelector("#website")
     let b=document.querySelector("#img")
     a.style.display="block"
     b.style.display="none"
}

const ondone=function(){
    setTimeout(function() {
        shw();console.log("switch content")
   }, 2000)
}
ondone()
function source(){
    console.log("new boy")
}
setTimeout(source 
,7000)



