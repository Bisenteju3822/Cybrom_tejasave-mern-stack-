/*const obj = {
  name: "teju",
  class: "12th",
  percentage: "78"
}

const obj3 = {
  name: "teju",
  class: "12th",
  percentage: "78"
}

const obj2 = {
  ...obj, ...obj3
  /*version: "nice",
  function: "task",
  develop: "task"
  *
}
console.log(obj2)//update
*/
const obj7 = {
  name: "teju",
  class: "12th",
  percentage: "78",
  version: "nice",
  function: "task",
  develop: "task"

}
const { name, ...rest } = obj7
console.log(rest)