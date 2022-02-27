function findDuplicate(input, size) {
    let sumOfArrayElements = 0;
    for (let i of input) {
        sumOfArrayElements += i
    }
    let sumOfNaturalNumbers = ((size - 2) * (size - 1)) / 2
    return sumOfArrayElements - sumOfNaturalNumbers
}



const readline = require("readline-sync");
let t = Number(readline.question());
while (t--) {
    let size = Number(readline.question());
    let input = [];
    for (let i = 0; i < size; ++i) {
        input.push(Number(readline.question()));
    }
    let answer = findDuplicate(input, size)
    console.log(answer)
}