function maximumProfit(input, size) {
    input.sort((a, b) => a - b)
    let max = 0
    for (let i = 0; i < size; i++) {
        if (max < input[i] * (size - i)) {
            max = input[i] * (size - i)
        }
    }
    return max;
}


const readline = require("readline-sync")
let size = Number(readline.question());
let input = readline.question().split(" ").map(x => parseInt(x))
let answer = maximumProfit(input, size)
console.log(answer)