#include <iostream>
using namespace std;

#include <bits/stdc++.h>
int longestIncreasingSubsequence(int input[], int n)
{

    int dp[n + 1];
    dp[0] = 0;
    dp[1] = 1;
    for (int i = 2; i < n + 1; i++)
    {
        dp[i] = 1;
        for (int j = 1; j < i; j++)
        {
            if (input[i - 1] > input[j - 1])
            {
                dp[i] = max(dp[i], 1 + dp[j]);
            }
        }
    }
    sort(dp, dp + n + 1);
    return dp[n];
}

int main()
{
    int n;
    cin >> n;
    int *arr = new int[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << longestIncreasingSubsequence(arr, n);
}