import {  } from 'react'
import  './App.css'
function App() {
//  let a=createElement("h1",[],"hello to react")
     let name="teju"
     let ob={
      name:"Tejasave bhai",
      age:24
     }
  return (
    <>
    <h1>
    my name is  {name}
    </h1>
    <h2>my name is{ob.name}</h2>
    <h2>my age is{ob.age}</h2>

    </>
    
  )
}

export default App
