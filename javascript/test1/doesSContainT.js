function checkSequence(input1, input2) {
    if (input2[0] == undefined) {
        return true
    }
    else if (input1[0] == undefined && input2 != undefined) {
        return false
    }
    if (input1[0] == input2[0]) {
        return checkSequence(input1.slice(1), input2.slice(1))
    }
    else {
        return checkSequence(input1.slice(1), input2)
    }
}


const readline = require("readline-sync")
let input1 = readline.question()
let input2 = readline.question()
let answer = checkSequence(input1, input2)
console.log(answer)
