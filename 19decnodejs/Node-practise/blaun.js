const fs = require("fs");

// Blocking I/O operation
console.log("1");
const n1 = fs.readFileSync("./test.txt", "utf-8");
console.log(n1); // This will print the content of the file
console.log("2");
