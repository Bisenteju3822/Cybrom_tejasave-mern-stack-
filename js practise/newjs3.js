const practise = [1, 2, 3, 4, 5, 'a'];  // 'a' should be a string
const practise2 = [2, 3, 4];

function all(...args1) {
  return function (...args2) {
    console.log(...args1, ...args2);
  }
}

const combined = all(...practise);
combined(...practise2);
