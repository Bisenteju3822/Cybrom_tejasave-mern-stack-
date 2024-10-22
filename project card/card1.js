let arr = [
  {
    image: '81BgJVyXEsL._AC_CR0,0,0,0_SX615_SY462_.jpg',
    name: 'famous painting art ',
    price: 400,
    hight: 40 * 20,
    rating: document.getElementById("my-icon")

  },
  {
    image: '51eJAY8XlFL._SX300_SY300_QL70_FMwebp_.webp',
    name: 'famous painting art ',
    price: 800,
    hight: 40 * 20,
    rating: document.getElementById("my-icon")

  },
  {
    image: '51fppdAtAwL._SX300_SY300_QL70_FMwebp_.webp',
    name: 'famous painting art ',
    price: 900,
    hight: 40 * 20,
    rating: document.getElementById("my-icon")

  },
  {
    image: '71+ceKToIDL._AC_CR0,0,0,0_SX615_SY462_.jpg',
    name: 'famous painting art ',
    price: 800,
    hight: 40 * 20,
    rating: document.getElementById("my-icon")

  },
  {
    image: '71Fu5MOFZmL._AC_CR0,0,0,0_SX615_SY462_.jpg',
    name: 'famous painting art ',
    price: 400,
    hight: 40 * 20,
    rating: document.getElementById("my-icon")

  },
  {
    image: '81BgJVyXEsL._AC_CR0,0,0,0_SX615_SY462_.jpg',
    name: 'famous painting art ',
    price: 200,
    hight: 40 * 20,
    rating: document.getElementById("my-icon")

  },
  {
    image: '81fwBzCV+LL._SX355_.jpg',
    name: 'famous painting art ',
    price: 600,
    hight: 40 * 20,
    rating: document.getElementById("my-icon")

  },
  {
    image: '81HnZSATL6L._SX522_.jpg',
    name: 'famous painting art ',
    price: 700,
    hight: 40 * 20,
    rating: document.getElementById("my-icon")

  },
  {
    image: '81zC0yXNo1L._AC_CR0,0,0,0_SX615_SY462_.jpg',
    name: 'famous painting art ',
    price: 900,
    hight: 40 * 20,
    rating: document.getElementById("my-icon")

  },
  {
    image: '812PMc4F0+L._AC_CR0,0,0,0_SX615_SY462_.jpg',
    name: 'famous painting art ',
    price: 400,
    hight: 40 * 20,
    rating: document.getElementById("my-icon")

  },
  {
    image: '51eJAY8XlFL._SX300_SY300_QL70_FMwebp_.webp',
    name: 'famous painting art ',
    price: 550,
    hight: 40 * 20,
    rating: document.getElementById("my-icon")

  },
  {
    image: '81BgJVyXEsL._AC_CR0,0,0,0_SX615_SY462_.jpg',
    name: 'famous painting art ',
    price: 400,
    hight: 40 * 20,
    rating: document.getElementById("my-icon")

  }
]


const cards = arr.map((item) => {
  return `
    <div  class="card">
      <img  src="${item.image}" alt="${item.name}">
      <p>Name: ${item.name}</p>
      <p>Price: ${item.price}</p>
      <p>Height: ${item.height}</p>
      <div><i class="fa-solid fa-star"></i>
      </div>
      <button>Buy</button>
    </div>
  `
});

document.getElementById('output').innerHTML = cards.join('');
