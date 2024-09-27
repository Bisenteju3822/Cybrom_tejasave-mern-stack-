function fun(){
    const b=document.querySelector("#t1").value
    const c=document.querySelector("#t2").value
    const d=document.querySelector("#t3").value
    const e=document.querySelector("#t4").value
    const f=document.querySelector("#t5").value
    console.log(b,c,d,e,f)
   
  if(b ===""){
    document.querySelector("#error").innerHTML="Enter your name"
     let selname=document.querySelector("#t1")
     selname.style.borderColor="red"
     selname.style.outlineColor="red"
    
     

  }
   if(c===""){
    document.querySelector("#error").innerHTML="Enter your name"
     let name1=document.querySelector("#t2")
     name1.style.borderColor="red"
     name1.style.outlineColor="red"
     
     
  }
  if(d===""){
    document.querySelector("#error").innerHTML="Enter your name"
    let name2=document.querySelector("#t3")
    name2.style.borderColor="red"
    name2.style.outlineColor="red"
    
    
  }
  if(e===""){
    document.querySelector("#error").innerHTML="Enter your name"
     let name3=document.querySelector("#t4")
     name3.style.borderColor="red"
     name3.style.outlineColor="red"
     
     
  }
  if(f===""){
    document.querySelector("#error").innerHTML="Enter your n"
     let name4=document.querySelector("#t5")
     name4.style.borderColor="red"
     name4.style.outlineColor="red"
     
     
  }


}