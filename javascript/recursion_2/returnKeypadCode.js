let n = 23
let output = []

function helper(n, output, keyStrings) {
    if (n == 0) {
        output.push("")
        return 1;
    }
    let smallNumber = Math.floor(n / 10);
    let subAnswer = helper(smallNumber, output, keyStrings);
    let lastDigit = n % 10;
    let lastDigitString = keyStrings[lastDigit];
    for (let i = 0; i < keyStrings[lastDigit].length - 1; i++) {
        for (let j = 0; j < subAnswer; j++) {
            output[j + (i + 1) * subAnswer] = output[j];
        }
    }
    let k = 0;
    for (let i = 0; i < keyStrings[lastDigit].length; i++) {
        for (let j = 0; j < subAnswer; j++) {
            output[k] = output[k] + lastDigitString[i];
            k++;
        }
    }
    return k;
}

function keypad(n, output) {
    let keyStrings = ["", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"]
    return k = helper(n, output, keyStrings)
}

let answer = keypad(n, output)
console.log(output)