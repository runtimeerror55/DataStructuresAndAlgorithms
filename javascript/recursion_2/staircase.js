let n = 5;
function staircase(n) {
    if (n < 0) {
        return 0;
    }
    else if (n == 0) {
        return 1;
    }
    return staircase(n - 1) + staircase(n - 2) + staircase(n - 3);
}

let answer = staircase(n)
console.log(answer)