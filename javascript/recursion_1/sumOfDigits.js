let n = 12345
function sumOfDigits(n) {
    if (n <= 9) {
        return n;
    }
    return sumOfDigits(Math.floor(n / 10)) + n % 10
}

let answer = sumOfDigits(n)
console.log(answer)