let input = [2, 3, 4, 5, 6, 8]
let x = 5

function helper(input, x, start, end) {
    if (start <= end) {
        let mid = Math.floor((start + end) / 2)
        if (input[mid] == x) {
            return mid
        }
        else if (input[mid] < x) {
            return helper(input, x, mid + 1, end)
        }
        else {
            return helper(input, x, start, mid - 1)
        }
    }
    return -1
}

function binarySearch(input, x, length) {
    return helper(input, x, 0, length - 1)
}

let answer = binarySearch(input, x, input.length)
console.log(answer)