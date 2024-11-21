function insertdata() {
  let data = {
    name: document.querySelector("#name").value,
    age: document.querySelector("#age").value,
    address: document.querySelector("#address").value

  }
  fetch("http://localhost:3000/student", {
    method: 'POST',
    headers: {
      'content-type': 'applicaton/json'
    },
    body: JSON.stringify(data)
  })
    .then(res => alert("inserting "))
}