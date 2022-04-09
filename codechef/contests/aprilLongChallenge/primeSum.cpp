#include <iostream>
using namespace std;
long long int gcd(long long int a, long long int b)
{
    return b == 0 ? a : gcd(b, a % b);
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
        if (a % 2 == 0 || b % 2 == 0)
        {
            cout << 0 << endl;
        }
        else
        {
            long long int x = gcd(a, b);
            if (x == 1)
            {
                cout << x << endl;
            }
            else
            {
                cout << x << endl;
            }
        }
    }
}
