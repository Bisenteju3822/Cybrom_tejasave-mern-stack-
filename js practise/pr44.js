function fun(){
    const b=document.querySelector("#t1").value
    const c=document.querySelector("#t2").value
    const d=document.querySelector("#t3").value
    const e=document.querySelector("#t4").value
    const f=document.querySelector("#t5").value
    console.log(b,c,d,e,f)
   
  if(b===""){
      document.querySelector("#error").innerHTML="Enter your name"
     let selname=document.querySelector("#t1")
     selname.style.borderColor="red"
     selname.style.outlineColor="red"
    
     
  return false
  }
 

   else if(c===""){
    document.querySelector("#erroremail").innerHTML="Enter your email"
     let name1=document.querySelector("#t2")
     name1.style.borderColor="red"
     name1.style.outlineColor="red"
     return false
   } 
  }
  function bond(){
    let  selectinput=document.querySelector('#t1')
    const selecterrorinput=document.querySelector('#error')
    selectinput.style.borderColor="black"
    selecterrorinput.style.outlineColor="black"
    return false
  }

  /*
   else if(d===""){
    document.querySelector("#error").innerHTML="Enter your name"
    let name2=document.querySelector("#t3")
    name2.style.borderColor="red"
    name2.style.outlineColor="red"
    
    
  }
   else if(e===""){
    document.querySelector("#error").innerHTML="Enter your name"
     let name3=document.querySelector("#t4")
     name3.style.borderColor="red"
     name3.style.outlineColor="red"
     
     
  }
   else if(f===""){
    document.querySelector("#error").innerHTML="Enter your n"
     let name4=document.querySelector("#t5")
     name4.style.borderColor="red"
     name4.style.outlineColor="red"
     

     
     
  }
   function bond(){
    const selectinput=document.querySelector('#t1')
    const selecterrorinput=document.querySelector('#error')
    selectinput.style.borderColor="black"
    selecterrorinput.style.outlineColor="black"
  }*/


