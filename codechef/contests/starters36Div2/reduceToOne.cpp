#include <iostream>
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
        int count = 0;
        long long int temp = n;

        if (temp == 1)
        {
            cout << 0 << endl;
        }
        else
        {
            while (temp % 2 == 0)
            {
                temp /= 2;
                count++;
            }
            if (count == 0)
            {
                cout << 1 << endl;
            }
            else if (count % 2 != 0)
            {
                cout << -1 << endl;
            }
            else
            {
                long long int x = sqrt(temp);
                if (x * x == temp)
                {
                    cout << 1 << endl;
                }
                else
                {
                    cout << 2 << endl;
                }
            }
        }
    }
}
