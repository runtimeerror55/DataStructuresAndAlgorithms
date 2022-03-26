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
        int x, y, a, b;
        int count = 0;
        cin >> x >> y >> a >> b;
        if (x != a && x != b)
        {
            count++;
        }
        if (y != a && y != b)
        {
            count++;
        }
        cout << count << endl;
    }
}