function findUnique(input) {
    let xorValue = 0
    for (let i of input) {
        xorValue ^= i
    }
    return xorValue
}

const readline = require("readline-sync");
let t = Number(readline.question());
while (t--) {
    let size = Number(readline.question());
    let input = [];
    for (let i = 0; i < size; ++i) {
        input.push(Number(readline.question()));
    }
    let answer = findUnique(input)
    console.log(answer)
}