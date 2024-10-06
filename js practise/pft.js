
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
  
function valid() {
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

   
}
