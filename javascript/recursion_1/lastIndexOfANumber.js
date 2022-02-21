let n = 4
let input = [9, 8, 10, 8]
let x = 8

function lastIndex(input, n, x) {
    if (n === 0) {
        return -1;
    }
    let subAnswer = lastIndex(input.slice(1), n - 1, x)
    if (subAnswer !== -1) {
        return subAnswer + 1;
    }
    else if (input[0] === x) {
        return 0;
    }
    else {
        return -1;
    }

}

let answer = lastIndex(input, n, x)
console.log(answer)