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
        long long int n;
        cin >> n;
        int b = 1;
        
        long long int temp = 3;
        if (n % 4 == 0)
        {
            cout << temp + (4 * (n / 4)) << endl;
        }
        else if (n % 4 == 1)
        {
            cout << temp + (4 * (n / 4)) - 2 << endl;
        }
        else
        {
            cout << 3 << endl;
        }
    }
}