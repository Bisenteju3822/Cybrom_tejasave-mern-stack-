const fs = require('fs');

fs.writeFile("ranu.pdf", "tey were consume ter work", (error, data) => {
  if (error)
    res.write('File not found');

  else {
    console.log("created")
  }

  console.log("file created")
});
