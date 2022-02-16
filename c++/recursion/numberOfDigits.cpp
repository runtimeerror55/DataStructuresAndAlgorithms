#include <bits/stdc++.h>
using namespace std;

int count(int n)
{
    if (n < 10)
    {
        return 1;
    }
    return count(n / 10) + 1;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    cout << count(n) << endl;
}