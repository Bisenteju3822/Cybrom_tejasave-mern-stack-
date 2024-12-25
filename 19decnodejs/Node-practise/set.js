let dish = new Set(["teju", "pallu", "pallu", "hiya"]);
console.log(dish);

let index = 0;
for (let item of dish) {
  console.log(`Index: ${index}, Element: ${item}`);
  index++;
}
