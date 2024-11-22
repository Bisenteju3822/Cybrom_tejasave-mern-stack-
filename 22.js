async function myedit(id) {
  let myupdate = await fetch("http://localhost:3000/student")

  let redata = await myupdate.json()
  let senddata = `
<input type="text" value="${redata.id}" readonly><br>
<input type="text" value="${redata.name}" readonly><br>
<input type="text" value="${redata.age}" readonly><br>
<input type="text" value="${redata.address}" readonly><br>
<input type="submit">`

  document.querySelector('#edittable').innerHTML = senddata


}
myedit()
function finalupdate() {
  let fdata = {
    name: document.querySelector('#name1').value,
    age: document.querySelector('#age1').value,
    address: document.querySelector('#address').value


  }
  fetch('http://localhost:3000/student/${id}',
    {
      method: 'PUT',
      headers: {
        'content-type': 'application/json'
      },
      body: JSON.stringify(fdata)
    }
  )
    .then(r => alert("update.!!!!!!!!"))
}