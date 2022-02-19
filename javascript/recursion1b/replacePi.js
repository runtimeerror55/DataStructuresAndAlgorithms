let input = ["p", "i", "p", "i"]

function shiftCharacters(input) {
    for (let i = input.length - 1; i >= 0; i--) {
        input[i + 2] = input[i]
    }
}

function replacePi(input, currentIndex) {
    console.log(input[currentIndex])
    if (input[currentIndex + 1] == undefined) {
        return
    }
    replacePi(input, currentIndex + 1)
    if (input[currentIndex] === 'p' && input[currentIndex + 1] === 'i') {
        shiftCharacters(input, currentIndex + 3)
        input[currentIndex] = '3'
        input[currentIndex + 1] = '.'
        input[currentIndex + 2] = '1'
        input[currentIndex + 3] = '4'
    }
}

replacePi(input, 0)
console.log(input)