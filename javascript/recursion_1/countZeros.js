let n = 10204
function countZeros(n) {
    if (n < 10) {
        if (n == 0) {
            return 1
        }
        else {
            return 0
        }
    }
    let subAnswer = countZeros(Math.floor(n / 10))
    if (n % 10 == 0) {
        return subAnswer + 1
    }
    else {
        return subAnswer
    }
}

let answer = countZeros(n)
console.log(answer)