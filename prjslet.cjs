/**
 * @param {number[]} arr
 * @param {Function} fn
 * @return {number[]}
 */
var filter = function (arr, fn) {


  const filteredArr = [];

  for (let i = 0; i < arr.length; i++) {
    if (fn(arr[i], i)) {
      filteredArr.push(arr[i]);
    }
  }

  return filteredArr;
}

// Test cases
console.log(filter([0, 10, 20, 30], function greaterThan10(n) { return n > 10; })); // Output: [20, 30]
console.log(filter([1, 2, 3], function plusOne(n) { return n + 1; })); 