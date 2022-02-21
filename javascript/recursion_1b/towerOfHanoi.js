let n = 2
function towerOfHanoi(n, source, auxilary, destination) {
    if (n == 0) {
        return
    }
    towerOfHanoi(n - 1, source, destination, auxilary)
    console.log(source + " " + destination)
    towerOfHanoi(n - 1, auxilary, source, destination)
}

towerOfHanoi(n, 'a', 'b', 'c')
