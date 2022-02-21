let input = ["x", "a", "x", "b"]

function shiftCharacters(input, currentIndex) {
    for (let i = currentIndex; i < input.length - 1; i++) {
        input[i] = input[i + 1]
    }
    delete input[input.length - 1]
}

function removeX(input, currentIndex) {
    if (input[currentIndex] == undefined) {
        return
    }
    removeX(input, currentIndex + 1)
    if (input[currentIndex] == 'x') {
        shiftCharacters(input, currentIndex)
    }
}

removeX(input, 0)
for (i of input) {
    console.log(i)
}