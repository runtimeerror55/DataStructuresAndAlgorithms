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
        int n, k;
        cin >> n >> k;
        if (k == 0)
        {
            if (n % 4 == 0)
            {
                cout << "off" << endl;
            }
            else
            {
                cout << "on" << endl;
            }
        }
        else
        {
            if (n % 4 == 0)
            {
                cout << "on" << endl;
            }
            else
            {
                cout << "Ambiguous" << endl;
            }
        }
    }
}