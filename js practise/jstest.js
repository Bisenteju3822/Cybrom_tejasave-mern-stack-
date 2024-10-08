let salary = parseFloat(prompt("Enter your salary"));

if (salary < 300000) {
    alert("No tax needs to be paid.");
} else if (salary >= 300000 && salary < 750000) {
    let tax = salary * 0.10;
    let total = salary + tax;
    alert(`Salary plus 10% tax: ${total}`);
} else if (salary >= 750000) {
    let tax = salary * 0.20; 
    let total = salary + tax;
    alert(`Salary plus 20% tax: ${total}`);
}


let a=parseInt(prompt("Enter a number"))
let b=parseInt(prompt("Enter a number"))
let c=parseInt(prompt("Enter a number"))
average=(a+b+c)/3
alert(`the averageof :${average}`)



