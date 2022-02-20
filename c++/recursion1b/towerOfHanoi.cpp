#include <bits/stdc++.h>
using namespace std;

void towerOfHanoi(int n, char source, char auxilary, char destination)
{
    if (n == 0)
    {
        return;
    }
    towerOfHanoi(n - 1, source, destination, auxilary);
    cout << source << " " << destination << endl;
    towerOfHanoi(n - 1, auxilary, source, destination);
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    towerOfHanoi(n, 'a', 'b', 'c');
}