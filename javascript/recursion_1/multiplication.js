let m = 3
let n = 5

function multiplyNumbers(m, n) {
    if (m == 0 || n == 0) {
        return 0
    }
    return m + multiplyNumbers(m, n - 1)
}

let ans = multiplyNumbers(m, n)
console.log(ans)