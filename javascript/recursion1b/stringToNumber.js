let input = ["0", "0", "0", "1", "2", "3", "4"]

function stringToNuber(input) {
    if (input[0] === undefined) {
        return 0;
    }
    let smallAnswer = stringToNuber(input.slice(1))
    return smallAnswer + (10 ** (input.length - 1)) * input[0]

}

let answer = stringToNuber(input)
console.log(answer)