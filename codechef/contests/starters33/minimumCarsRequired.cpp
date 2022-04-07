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
        if (n <= 4)
        {
            cout << 1 << endl;
        }
        else if (n % 4 == 0)
        {
            cout << n / 4 << endl;
        }
        else
        {
            cout << n / 4 + 1 << endl;
        }
    }
}