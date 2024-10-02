function fun() {
  const b = document.querySelector("#t1").value
  const c = document.querySelector("#t2").value
  const d = document.querySelector("#t3").value
  const e = document.querySelector("#t4").value
  console.log(b, c, d, e)

  if (b === "") {
    document.querySelector("#error").innerHTML = "Enter your name"
    let selname = document.querySelector("#t1")
    selname.style.border = "10px solid red"

    return false
  }


  else if (c === "") {
    document.querySelector("#erroremail").innerHTML = "Enter your email"
    let name1 = document.querySelector("#t2")
    name1.style.border = "20px solid red"

    name1.style.outlineColor = "red"
    return false
  }

  else if (e === "") {
    document.querySelector("#errornum").innerHTML = "Enter your number"
    let name3 = document.querySelector("#t4")
    name3.style.borderColor = "red"
    name3.style.outlineColor = "red"
    return false


  }
}
/*
else if(!(email.includes("@")&&email.include("gmail"))){
  document.querySelector('#erroremail').innerHTML="please enter your gmail corectly"
  selectname=document.querySelector("t1")
  selectname.style.borderColor="5px solid red"
  return false
 }
 else if(t3!==10){
  document.querySelector('#errornum').innerHTML="please enter your gmail corectly"
  selectname=document.querySelector("t1")
  selectname.style.borderColor="5px solid red"
  return false
 }
 else if(isNaN(t3)){
  document.querySelector('#errornum').innerHTML="please enter your gmail corectly"
  selectname=document.querySelector("t1")
  selectname.style.borderColor="5px solid red"
  return false
 }
 
}*/


/* function bond(arg){
   let  selectinput=document.querySelector(`#${arg}`)
   selectinput.style.borderColor="black"
   selecterrorinput.style.outlineColor="black"
 return false
 }*/











