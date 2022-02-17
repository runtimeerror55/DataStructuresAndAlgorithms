let n = 10

function print(n) {
    if (n == 1) {
        console.log(n)
        return
    }
    print(n - 1);
    console.log(n)
}

print(n)