function arrayRoationCheck(input, size) {
    for (let i = 1; i < size; i++) {
        if (input[i - 1] > input[i]) {
            return i
        }
    }
    return 0
}


const readline = require("readline-sync")
let t = Number(readline.question())
while (t--) {
    let size = Number(readline.question());
    let input = readline.question().split(" ").map(x => parseInt(x))
    let answer = arrayRoationCheck(input, size)
    console.log(answer)
}