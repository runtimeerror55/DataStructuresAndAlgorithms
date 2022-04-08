#include <iostream>
#include <bits/stdc++.h>
using namespace std;
long long int smallestDivisor(long long int n)
{

    if (n % 2 == 0)
    {
        return 2;
    }

    for (long long int i = 3; i * i <= n; i += 2)
    {
        if (n % i == 0)
            return i;
    }

    return n;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        long long int a, b;
        cin >> a >> b;
        if (b - a == 1)
        {
            cout << -1 << endl;
        }
        else if (a == 1)
        {
            if (a + 3 <= b)
            {
                cout << a + 1 << " " << a + 3 << endl;
            }
            else
            {
                cout << -1 << endl;
            }
        }
        else
        {
            if (a % 2 == 0)
            {
                cout << a << " " << a + 2 << endl;
            }
            else
            {

                long long int x = smallestDivisor(a);
                long long int temp1 = a + x + a;
                long long int temp2 = a + 1 + a + 3;
                if (temp1 <= temp2 && a + x <= b)
                {
                    cout << a << " " << a + x << endl;
                }
                else if (a + 3 <= b)
                {
                    cout << a + 1 << " " << a + 3 << endl;
                }
                else
                {
                    cout << -1 << endl;
                }
            }
        }
    }
}
