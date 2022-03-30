#include <bits/stdc++.h>
using namespace std;

int knapsack(int weights[], int values[], int n, int maxWeight)
{
    int dp[n + 1][maxWeight + 1];
    for (int i = 0; i < n + 1; i++)
    {
        dp[i][0] = 0;
    }

    for (int j = 0; j < maxWeight + 1; j++)
    {
        dp[0][j] = 0;
    }

    for (int i = 1; i < n + 1; i++)
    {
        for (int j = 1; j < maxWeight + 1; j++)
        {
            if (j >= weights[i - 1])
            {
                dp[i][j] = max(values[i - 1] + dp[i - 1][j - weights[i - 1]], dp[i - 1][j]);
            }
            else
            {
                dp[i][j] = dp[i - 1][j];
            }
        }
    }
    return dp[n][maxWeight];
}

int main()
{
    int n;
    cin >> n;
    int *wt = new int[n];
    int *val = new int[n];

    for (int i = 0; i < n; i++)
    {
        cin >> wt[i];
    }

    for (int j = 0; j < n; j++)
    {
        cin >> val[j];
    }

    int w;
    cin >> w;

    cout << knapsack(wt, val, n, w) << endl;

    delete[] wt;
    delete[] val;
}