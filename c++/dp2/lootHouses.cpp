#include <bits/stdc++.h>
using namespace std;
int maxMoneyLooted(int input[], int n)
{
    int dp[n + 1];
    dp[0] = 0;
    dp[1] = input[0];
    for (int i = 2; i < n + 1; i++)
    {

        dp[i] = max(dp[i - 2] + input[i - 1], dp[i - 1]);
    }

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

    cout << maxMoneyLooted(arr, n);

    delete[] arr;
}