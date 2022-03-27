#include <bits/stdc++.h>
using namespace std;

int minCount(int n)
{
    int dp[n + 1];
    for (int i = 0; i < n + 1; i++)
    {
        dp[i] = 0;
    }

    dp[0] = 0;
    dp[1] = 1;
    dp[2] = 2;
    for (int i = 3; i < n + 1; i++)
    {
        dp[i] = i;
        for (int j = 1; j <= floor(sqrt(i)); j++)
        {
            int square = j * j;
            dp[i] = min(dp[i], 1 + dp[i - square]);
        }
    }
    return dp[n];
}
int main()
{
    int n;
    cin >> n;
    cout << minCount(n);
}