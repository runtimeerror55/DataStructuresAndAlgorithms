let string = "CCooddiinnggNNiinnnnjjjjaaaassss"
let input = [...string]

function helper(input, currentIndex, newIndex) {
    if (input[currentIndex] == undefined) {
        return newIndex;
    }
    if (input[currentIndex] == input[currentIndex + 1]) {
        return helper(input, currentIndex + 1, newIndex)
    }
    else {
        input[newIndex] = input[currentIndex]
        return helper(input, currentIndex + 1, newIndex + 1)
    }
}

function removeDuplicates(input) {
    return helper(input, 0, 0)
}

let answer = removeDuplicates(input)
let newArray = input.slice(0, answer)
console.log(newArray)