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
        int a, b;
        cin >> a >> b;
        if (a * 10 > b * 5)
        {
            cout << "first" << endl;
        }
        else if (a * 10 < b * 5)
        {
            cout << "second" << endl;
        }
        else
        {
            cout << "any" << endl;
        }
    }
}