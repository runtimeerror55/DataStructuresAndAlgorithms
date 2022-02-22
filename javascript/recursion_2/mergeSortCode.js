let n = 6
let input = [2, 6, 8, 5, 4, 3]


function merge(input, start, mid, end) {
    let outputArray = []
    let i = start;
    let j = mid + 1;
    while (i < mid + 1 && j < end + 1) {
        if (input[i] < input[j]) {
            console.log(input[i] + " " + input[j])
            outputArray.push(input[i++]);
        }
        else {
            outputArray.push(input[j++])
            console.log(input[i] + " " + input[j])
        }
    }

    while (i < mid + 1) {
        outputArray.push(input[i++])
    }

    while (j < end + 1) {
        outputArray.push(input[j++])
    }

    for (let i of outputArray) {
        input[start++] = i
    }

}


function helper(input, start, end) {
    if (start < end) {
        let mid = Math.floor((start + end) / 2)
        helper(input, start, mid)
        helper(input, mid + 1, end)
        merge(input, start, mid, end)
    }
}
function mergeSort(input, n) {
    helper(input, 0, n - 1);
}

mergeSort(input, n)
console.log(input)