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
        int x, y;
        cin >> x >> y;
        if (x * 3 < y * 2)
        {
            cout << x * 3 << endl;
        }
        else
        {
            cout << y * 2 << endl;
        }
    }
}