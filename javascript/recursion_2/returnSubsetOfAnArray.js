let n = 3
let input = [15, 20, 12]
let output = [[]]

function returnSubet(input, length, currentIndex, output) {
    if (length == 0) {
        output[0][0] = 0
        return 1
    }
    let subAnswer = returnSubet(input, length - 1, currentIndex + 1, output)
    for (let i = 0; i < subAnswer; i++) {
        let newRow = i + subAnswer
        let newSize = output[i][0] + 1
        output[newRow] = []
        output[newRow][0] = newSize;
        output[newRow][1] = input[currentIndex]
        for (let j = 0; j < newSize - 1; j++) {
            output[newRow][j + 2] = output[i][j + 1]
        }
    }
    return 2 * subAnswer
}

let answer = returnSubet(input, 3, 0, output)
console.log(output)