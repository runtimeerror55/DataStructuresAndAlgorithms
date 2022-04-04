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
        int input[n];
        int couples = 0;
        unordered_map<int, int> um;
        for (int i = 0; i < n; i++)
        {
            cin >> input[i];
            um[input[i]]++;
        }
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            count = count + (um[input[i]] % 2);

            couples = couples + um[input[i]] / 2;

            um[input[i]] = 0;
        }
        int ans = 0;
        int x = count / 2;
        int x1 = count % 2;
        ans = ans + (x * 2);
        int y = (couples * 2) % 4;

        if (x1 != 0 || y != 0)
        {
            ans = ans + 4 - y - x1;
        }

        cout << ans << endl;
    }
}