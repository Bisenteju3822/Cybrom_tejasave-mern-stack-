async function okey() {
  let first = await fetch("http://localhost:3000/student")
  let second = await first.json()
  let third = second.map((e) =>
    `<tr>
   <td>${e.name}</td>
      <td>${e.age}</td>
        <td>${e.address}</td>
   <td>${e.id}</td> 
   <td><button onclick="mydelete(${e.id})">Delete</button></td>
  </tr>`
  ).join("")
  document.querySelector("#showdata").innerHTML = third



}
okey()
function mydelete() {
  fetch(`http://localhost:3000/student/${id}`, {
    /**
     * 
     */
    method: "DELETE"
  })
    .then(first => alert("it suceesfully delete"))
}
mydelete()