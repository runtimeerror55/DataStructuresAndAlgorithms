function swap(input, i, j) {
    let temp = input[i]
    input[i] = input[j]
    input[j] = temp
}
function rotate(input, d, size) {
    for (let i = 0; i < Math.floor(d / 2); i++) {
        swap(input, i, d - i - 1)
    }
    for (let i = 0; i < Math.floor((size - d) / 2); i++) {
        swap(input, i + d, size - 1 - i)
    }
    for (let i = 0; i < Math.floor((size / 2)); i++) {
        swap(input, i, size - 1 - i)
    }
}


const readline = require("readline-sync");
let t = Number(readline.question());
while (t--) {
    let size = Number(readline.question());
    let input = readline.question().split(" ").map(x => parseInt(x));
    let d = Number(readline.question())
    rotate(input, d, size)
    console.log(input)
}