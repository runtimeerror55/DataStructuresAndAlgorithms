#include <bits/stdc++.h>
using namespace std;

int staircase(int n)
{
    if (n < 0)
    {
        return 0;
    }
    else if (n == 0)
    {
        return 1;
    }
    return staircase(n - 1) + staircase(n - 2) + staircase(n - 3);
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, output;
    cin >> n;
    output = staircase(n);
    cout << output << endl;
}
