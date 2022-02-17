let k = 4;

function sum(k) {
    if (k == 0) {
        return 1;
    }
    let subAnswer = sum(k - 1) + 1 / (2 ** k)
    return subAnswer
}

let answer = sum(k)
console.log(answer.toFixed(5))