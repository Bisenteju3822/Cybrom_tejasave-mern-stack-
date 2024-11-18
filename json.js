async function fett() {
  let a = await fetch('https://jsonplaceholder.typicode.com/albums')
  let b = await a.json()
  console.log(b)
  const answ = b.map((e) => `<h1>${e.userid}</h1>
  <h1>${e.title}</h1>
  <h1> ${e.id}</h1>
  `).join(" ")

  document.querySelector('#demo').innerHTML = answ
}
fett()