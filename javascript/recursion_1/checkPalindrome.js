let input = "pablo"
function helper(input, startIndex, endIndex) {
    if (startIndex < endIndex) {
        if (input[startIndex] != input[endIndex]) {
            return false
        }
        return helper(input, startIndex + 1, endIndex - 1)
    }
    return true
}

function checkPanlindrome(input) {
    return helper(input, 0, input.length - 1)
}

let answer = checkPanlindrome(input)
console.log(answer)