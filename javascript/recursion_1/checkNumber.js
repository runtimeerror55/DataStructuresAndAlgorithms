let n = 3
let input = [9, 7, 10]
let x = 8

function checkNumber(input, n, x) {
    if (n === 0) {
        return false
    }
    else if (input[0] === x) {
        return true
    }

    return checkNumber(input.slice(1), n - 1, x)

}

let ans = checkNumber(input, n, x)
console.log(ans)