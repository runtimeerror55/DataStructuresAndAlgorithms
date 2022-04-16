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
        int x, y, z;
        cin >> x >> y >> z;
        int min = z - (y / x);
        if (min <= 0)
        {
            cout << 0 << endl;
        }
        else
        {
            cout << min << endl;
        }
    }
}