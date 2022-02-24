let string = "abababa"
let input = [...string]

function helper(input, startIndex) {
    if (input[startIndex] == undefined) {
        return true
    }
    else if (input[startIndex] != "a") {
        return false
    }
    if (input[startIndex + 1] == "b" && input[startIndex + 2] == "b") {
        return helper(input, startIndex + 2)
    }
    return helper(input, startIndex + 3)
}

function checkAB(input) {
    return helper(input, 0)
}
let answer = checkAB(input)
console.log(answer)
