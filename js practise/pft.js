
/*const a=parseInt(prompt("Enter your number"))
const b=parseInt(prompt("Enter your number"))
const c=parseInt(prompt("Enter your number"))



const avr=(a+b+c)/3

a*//*
const change=function(){
    let b=document.querySelector("#change")
    b.src="dataScience.36dd03b9.jpg"
    b.style.width="500px"
}*/
  
/*function valid() {
    let jsname = document.querySelector("#name").value;
    let jsnumber = document.querySelector("#number").value;
    let jsemail = document.querySelector("#email").value;
    let jsage = document.querySelector("#age").value;

    console.log(jsname, jsnumber, jsemail, jsage);
    alert("yes");

    if (jsname.trim() === "") {
        document.querySelector("#errorname").innerHTML = "Enter Name";
        document.querySelector("#name").style.borderColor = "red"; // Use a color value
        alert("ok");
        return false;
    }

    // Add additional validation checks for jsnumber, jsemail, jsage as needed
   if(jsnumber!==123456789){
      document.querySelector("#errornumber").innerHTML="Enter number between 1 to 9"
      document.querySelector("#number").style.borderColor="red"
      alert("conform")
   }
   if(jsemail.match!=='@gmail#$'){
    document.querySelector("#erroremail").innerHTML="Enter special character@,gmail,#,$"
     document.querySelector("#gmail").style.borderColor="red"
     alert("d")
   }
   
}
const correct=()=>{
    const onblur=document.querySelector("#name").style.borderColor="black"
    alert("done")
}*/
function practise(){
    let cout = 0;  // Use 'let' since 'cout' will be incremented
    const run = function(){
        
        document.querySelector("#n1").innerText = "Count: " + cout;
        cout++;
    }
    setInterval(run, 2000);  // Runs 'run' every 2 seconds
    run();  // Initial call to run()
}
console.log("hello");


