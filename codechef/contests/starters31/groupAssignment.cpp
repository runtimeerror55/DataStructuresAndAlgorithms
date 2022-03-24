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
        int n, x;
        cin >> n >> x;
        int groupNumber = n;
        int partnerNumber = (2 * n) - (x - 1);
        cout << partnerNumber << endl;
    }
}