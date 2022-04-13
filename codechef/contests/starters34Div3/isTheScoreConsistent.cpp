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
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        if (c < a || d < b)
        {
            cout << "impossible" << endl;
        }
        else
        {
            cout << "possible" << endl;
        }
    }
}