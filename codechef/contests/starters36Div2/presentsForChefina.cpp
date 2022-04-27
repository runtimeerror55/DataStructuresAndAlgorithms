#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        if (n % 5 == 1)
        {
            cout << ((n + 1) / 5) * 4 << endl;
        }
        else
        {
            cout << ((n / 5) * 4) + n % 5 << endl;
        }
    }
}