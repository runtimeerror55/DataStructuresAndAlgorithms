let x = 5
let n = 3

function power(x, n) {
    if (n == 0) {
        return 1;
    }
    return power(x, n - 1) * x;
}

let ans = power(x, n)
console.log(ans)
