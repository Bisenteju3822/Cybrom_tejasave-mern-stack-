const fs = require("fs")
/*fs.writeFile("./test.txt",
  "utf-8", "heloo this is async")*/
//console.log(result)
fs.appendFileSync("./test.txt", `Hey There\n`)
fs