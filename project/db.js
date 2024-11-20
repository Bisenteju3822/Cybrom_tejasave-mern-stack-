async function okey() {
  let a = await fetch("http://localhost:3000/student")
  let b = await a.json();
  let c = b.map((e) => `
 <h1>${e.id}</h1>
 <h1>${e.name}</h1>
 <h1>${e.age}</h1>
 <h1>${e.address}</h1>`
  ).join("")
  document.querySelector("#n1").innerHTML = c
  console.log(c)
}
okey()