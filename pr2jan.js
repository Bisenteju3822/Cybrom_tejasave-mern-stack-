function outerFunction() {
    let outerVariable = "I'm an outer variable";

    function innerFunction() {
        console.log(outerVariable);
    }

    return innerFunction;
}

const myClosure = outerFunction();
myClosure(); // Output: "I'm an outer variable"
