let n = 156

function count(n) {
    if (n < 10) {
        return 1;
    }
    return count(n / 10) + 1
}

let ans = count(n)
console.log(ans)