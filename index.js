const express = require("express");
const app = express();
const port = 8000;

const routes = require("./Routes/EmpRoute");
app.set("view engine", "ejs");

app.use("/student", routes);

app.listen(port, () => {
  console.log("Server running successfully on port 8000");
});
