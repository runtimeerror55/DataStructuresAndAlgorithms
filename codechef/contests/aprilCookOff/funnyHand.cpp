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
        int n, a, b;
        cin >> n >> a >> b;
        int ans = 0;

        if (abs(a - b) == 1)
        {
            if (a == 1 || b == 1)
            {
                ans = 1;
            }
            else if (a == n || b == n)
            {
                ans = 1;
            }
            else
            {
                ans = 2;
            }
        }
        else
        {
            ans = 0;
        }
        cout << ans << endl;
    }
}