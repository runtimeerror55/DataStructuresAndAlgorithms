function arrayIntersection(input1, input2, n, m) {
    input1.sort()
    input2.sort()
    let i = 0, j = 0
    let result = []
    while (i < n && j < m) {
        if (input1[i] == input2[j]) {
            result.push(input1[i])
            i++
            j++
        }
        else if (input1[i] < input2[j]) {
            i++
        }
        else {
            j++
        }
    }
    console.log(result)
}


const readline = require("readline-sync");
let t = Number(readline.question());
while (t--) {
    let n = Number(readline.question());
    let input1 = readline.question().split(" ").map(x => parseInt(x));
    let m = Number(readline.question());
    let input2 = readline.question().split(" ").map(x => parseInt(x));
    arrayIntersection(input1, input2, n, m)
}