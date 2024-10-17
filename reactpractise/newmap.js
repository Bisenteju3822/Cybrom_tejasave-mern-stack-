/*let arr = [2, 3, 4, 5, 6]
console.log(arr.map((element) => { element = element * 2 }))*/
function mapm() {
  const arr = ["above",
    "move", "coverd"
  ]
  const out = document.getElementById("photo")
  out.innerHTML = arr.map((element) => arr)
    .join("bbb")
}
function mapm2() {
  let arr = ["https://th.bing.com/th/id/OIP.4siKIW3oZ4kEo0vkEVQ5hgHaLH?rs=1&pid=ImgDetMain",
    "https://th.bing.com/th/id/OIP.4siKIW3oZ4kEo0vkEVQ5hgHaLH?rs=1&pid=ImgDetMain",
    "https://th.bing.com/th/id/OIP.4siKIW3oZ4kEo0vkEVQ5hgHaLH?rs=1&pid=ImgDetMain"
  ]
  const otu2 = document.getElementById("p1")
  otu2.innerHTML = arr.map(element => `<img style="display:grid;width:400px;height:600px;" src="${element}" alt="set found">`).join("")
}