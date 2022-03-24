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
        int x = 0;
        int temp = 0;
        if (n % 2 == 0)
        {
            temp = n / 2;
        }
        else
        {
            temp = (n + 1) / 2;
            temp = -temp;
        }
        cout << temp << endl;
    }
}