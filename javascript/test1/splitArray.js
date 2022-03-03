function helper(input, size, leftSum, rightSum) {

    if (size == 0) {

        if (leftSum == rightSum) {
            return true;
        }
        else {
            return false;
        }
    }
    let temp = input[size - 1];

    if (temp % 5 == 0) {
        return helper(input, size - 1, leftSum + temp, rightSum)
    }
    else if (temp % 3 == 0) {
        return helper(input, size - 1, leftSum, rightSum + temp);
    }
    else {
        return helper(input, size - 1, leftSum + temp, rightSum) || helper(input, size - 1, leftSum, rightSum + temp)

    }
}

function splitArray(input, size) {
    return helper(input, size, 0, 0);
}


const readline = require("readline-sync")

let size = Number(readline.question());
let input = readline.question().split(" ").map(x => parseInt(x))
let answer = splitArray(input, size)
console.log(answer)
