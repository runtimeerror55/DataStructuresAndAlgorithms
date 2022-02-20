let input = ['t', 't', 't', 't']

function shiftCharacters(input, currentIndex) {
    for (let i = input.length - 1; i >= currentIndex; i--) {
        input[i + 1] = input[i]
    }
}

function pairStar(input, currentIndex) {

    if (input[currentIndex] == undefined) {
        return
    }
    if (input[currentIndex] == input[currentIndex + 1]) {
        shiftCharacters(input, currentIndex + 1)
        input[currentIndex + 1] = '*'
    }
    pairStar(input, currentIndex + 1)
}

pairStar(input, 0)
console.log(input)
