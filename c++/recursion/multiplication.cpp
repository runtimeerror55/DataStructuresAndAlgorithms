#include <bits/stdc++.h>
using namespace std;

int multiplyNumbers(int m, int n)
{
    if (m == 0 || n == 0)
    {
        return 0;
    }
    if (n == 1)
    {
        return m;
    }
    return m + multiplyNumbers(m, n - 1);
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int m, n;
    cin >> m >> n;
    cout << multiplyNumbers(m, n) << endl;
}
