let n = 3
let input = [9, 8, 9]

function sum(input, n) {
    if (n === 0) {
        return 0;
    }
    return sum(input.slice(1), n - 1) + input[0]
}

let ans = sum(input, n)
console.log(ans)