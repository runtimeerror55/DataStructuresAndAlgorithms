let n = 10
let input = [21, 22, 46, 12, 61, 21, 33, 16, 99, 96]
let x = 25

function firstIndex(input, n, x) {
    if (n == 0) {
        return -1;
    }
    else if (input[0] == x) {
        return 0;
    }
    let subAnswer = firstIndex(input.slice(1), n - 1, x)
    return subAnswer >= 0 ? subAnswer + 1 : subAnswer
}


let answer = firstIndex(input, n, x)
console.log(answer)