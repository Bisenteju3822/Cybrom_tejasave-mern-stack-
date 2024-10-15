/*const arr = [
  2, 3, 4, 5, 6,
  "Hello",
  function () {
    console.log("function run")
  },
  6 < 8
  // Uncomment the next line if `a` and `b` are defined
  // a != b
];

console.log(typeof (arr)); // "object"
arr[6](); // Calls the function within the array
console.log(arr[5][3])
for (let i = 0; i < arr.length; i++) {
  console.log(arr[i])
}
for (let i in arr) {
  console.log(arr[i])
}
for (let value of arr) {
  console.log(arr[value])
}*/
const string1 = "hello teju";

// Output will be "ujet olleh"

/*const reverseString = function (str) {
  return str.split('').reverse().join('');
};
const string2 = reverseString(string1);

document.getElementById("str33").innerHTML = reverseString(string1);
console.log(string2); */
/**
 //
 */
/*var minimumSteps = function (s) {
  let count = 0;
  let minswaps = 0;

  for (let ch of s) {
    if (ch === '0') {
      count++;
    } else {
      minswaps += count;
    }
  }
  return minswaps;
};

const s2 = "100";
console.log(minimumSteps(s2));*/
const str = "hello"
str[0] = "h"
console.log(str)
const str1 = str.replace("e", "l")
console.log(str)
const arr = [1, 2, 3, 4, 5]
arr[0] = 6
console.log(arr)
