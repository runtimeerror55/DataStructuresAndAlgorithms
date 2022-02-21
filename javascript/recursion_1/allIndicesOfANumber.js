let n = 5
let input = [9, 8, 10, 8, 8]
let x = 8
let output = new Array(n)


function allIndexes(input, n, x, output) {
    let count = 0
    function helper(currentIndex) {
        if (n == 0) {
            return;
        }
        --n;
        helper(currentIndex + 1);
        if (input[currentIndex] == x) {
            output[count++] = currentIndex
        }
    }
    helper(0)
    return count
}

let answer = allIndexes(input, n, x, output)
for (let i = 0; i < answer; i++) {
    console.log(output[i])
}