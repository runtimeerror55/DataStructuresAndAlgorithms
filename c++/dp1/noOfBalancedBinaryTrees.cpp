#include <bits/stdc++.h>
using namespace std;
#define modulo 10e+9
int balancedBTs(int n)
{
    if (n <= 1)
    {
        return 1;
    }

    long long int mod = 1e9 + 7;
    long long x = balancedBTs(n - 1);
    long long y = balancedBTs(n - 2);

    return ((x * x) % mod + (2 * x * y) % mod) % mod;
}

int main()
{
    int n;
    cin >> n;
    cout << balancedBTs(n);
}