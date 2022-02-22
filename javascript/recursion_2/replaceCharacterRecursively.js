let input = ['a', 'b', 'a', 'c', 'd']
let c1 = 'a'
let c2 = 'x'

function replaceCharcter(input, c1, c2, currentIndex) {
    if (input[currentIndex] == undefined) {
        return
    }
    if (input[currentIndex] == c1) {
        input[currentIndex] = c2
    }
    replaceCharcter(input, c1, c2, currentIndex + 1)
}

replaceCharcter(input, c1, c2, 0)
console.log(input)