let n = 3
let input = [15, 20, 12]

function helper(input, n, output, currentIndex, outputSize) {
    if (n == 0) {
        var result = ""
        for (let i = 0; i < outputSize; i++) {
            result += output[i] + " "
        }
        console.log(result)
        return
    }

    helper(input, n - 1, output, currentIndex + 1, outputSize)
    output[outputSize] = input[currentIndex]
    helper(input, n - 1, output, currentIndex + 1, outputSize + 1)
}

function printSubsetsOfArray(input, n) {
    let output = []
    helper(input, n, output, 0, 0)
}

printSubsetsOfArray(input, n)

