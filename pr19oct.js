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
document.getElementById("selectit").addEventListener('click', show);

function show() {
  let str = "erggijrrjior05058y09544t343334";
  let stor = "";
  for (let i = 0; i < 6; i++) {
    const random = Math.random();
    let ans = random * str.length;
    let aft = Math.floor(ans);
    let cha = str.charAt(aft);
    stor = stor + cha;
  }
  console.log(stor);
  document.getElementById("new1").innerHTML = stor;
}
