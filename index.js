const express = require('express'); // Ensure 'express' is in quotes
const app = express();

app.get("/", (req, res) => {
  res.send("<h1>Server running on port 8000 successfully</h1>");
});

app.get("/Home", (req, res) => {
  res.send("<h1>Server Home running on port 8000 successfully</h1>");
});


app.get("/About", (req, res) => {
  res.send("<h1>Server About successfully</h1>");
});

app.listen(8000, () => {
  console.log("Server is running on port 8000");
});
