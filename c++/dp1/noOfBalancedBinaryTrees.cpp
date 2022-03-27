#include <bits/stdc++.h>
using namespace std;
#define modulo 10e+9
int balancedBTs(int n)
{
    long long int mod = 1e9 + 7;
    long long int dp[n + 1];
    for (int i = 0; i < n; i++)
    {
        dp[i] = 0;
    }

    dp[0] = 1;
    dp[1] = 1;
    for (int i = 2; i < n + 1; i++)
    {
        dp[i] = ((dp[i - 1] * dp[i - 1]) % mod + (dp[i - 2] * dp[i - 1] * 2) % mod) % mod;
    }
    return dp[n];
}

int main()
{
    int n;
    cin >> n;
    cout << balancedBTs(n);
}