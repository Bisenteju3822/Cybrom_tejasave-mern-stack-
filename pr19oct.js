/*const a = Math.SQRT2
console.log(a)
const b = 22.7
console.log(Math.round(b))
console.log(Math.floor(b))
console.log(Math.ceil(b))
console.log(Math.trunc(b))
console.log(Math.abs(b))
console.log(Math.pow(b))
console.log(Math.random(b))*/
/*document.getElementById("selectit").addEventListener('click', show);

function show() {
  let str = ["https://th.bing.com/th/id/OIP.k_pa6lYCG7VMTcIljLB_XQHaJI?w=236&h=291&c=7&o=5&dpr=1.3&pid=1.20", "https://th.bing.com/th/id/OIP.fH20bxRyuRo2C93KbtG6OAHaNK?w=236&h=419&c=7&o=5&dpr=1.3&pid=1.20", "https://tse4.mm.bing.net/th/id/OIP.RqBUYSGcnir9xIZkKthRZQHaJP?w=236&h=294&c=7&o=5&dpr=1.3&pid=1.20"];
  let stor = "";
  for (let i = 0; i < 6; i++) {
    const random = Math.random();
    let ans = random * str;
    let aft = Math.;
    let cha = str.charAt(aft);
    stor = stor + cha;
  }
  console.log(stor);
  document.getElementById("new1").innerHTML = stor;
}*/
document.getElementById("selectit").addEventListener('click', show);

function show() {
  let str = [
    "https://th.bing.com/th/id/OIP.k_pa6lYCG7VMTcIljLB_XQHaJI?w=236&h=291&c=7&o=5&dpr=1.3&pid=1.20",
    "https://th.bing.com/th/id/OIP.fH20bxRyuRo2C93KbtG6OAHaNK?w=236&h=419&c=7&o=5&dpr=1.3&pid=1.20",
    "https://tse4.mm.bing.net/th/id/OIP.RqBUYSGcnir9xIZkKthRZQHaJP?w=236&h=294&c=7&o=5&dpr=1.3&pid=1.20"
  ];

  const randomIndex = Math.trunc(Math.random() * str.length);
  const selectedImage = str[randomIndex];

  console.log(selectedImage);
  document.getElementById("new1").innerHTML = `<img src="${selectedImage}" alt="Selected Image" />`;
}

