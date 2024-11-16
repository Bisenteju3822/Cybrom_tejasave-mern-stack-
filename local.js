
const comfort = () => {
  let data = {
    name: document.getElementById("first").value,
    surname: document.getElementById("sirst").value,
    number: document.getElementById("tirst").value,
    age: document.getElementById("dirst").value,
  };
  localStorage.setItem("newdata", JSON.stringify(data));
};

// Optional: Retrieve and log the stored data
/* let storedData = localStorage.getItem("newdata");
 if (storedData) {
    console.log(JSON.parse(storedData));
 }*/
