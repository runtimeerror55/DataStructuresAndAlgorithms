let n = 23

function helper(n, keyStrings, output) {
    if (n == 0) {
        console.log(output);
        return;
    }
    let lastDigit = n % 10
    let lastDigitString = keyStrings[lastDigit]
    for (let i = 0; i < lastDigitString.length; i++) {
        let smallString = lastDigitString[i] + output
        let smallNumber = Math.floor(n / 10)
        helper(smallNumber, keyStrings, smallString)

    }
}


function printKeypad(n) {
    let keyStrings = ["", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"]
    helper(n, keyStrings, "");
}

printKeypad(n)