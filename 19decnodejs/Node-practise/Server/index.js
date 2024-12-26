const http = require("http")
const fs = require("fs")
const url = require("url")
const express = require("express")
const app = express();
app.get('/', (req, res) => {
  return res.send
    ("hello from home Page")
})
app.get("/about", (req, res) => {
  return res.send("hello from about Page")
})
const myServer = http.createServer((req, res) => {
  if (req.url === "/favicon.ico") return res.end()
  const log = `${Date.now()}: ${req.url} New Req Received\n`
  const myUrl = url.parse(req.url)
  console.log(myUrl)
  fs.appendFile("./log.txt", log, (err, data) => {
    res.end("hello from server again")
  })
})
myServer.listen(, () => console.log("Server started")) 