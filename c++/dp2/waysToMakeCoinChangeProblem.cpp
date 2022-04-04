#include <bits/stdc++.h>
using namespace std;

int helper(int denominations[], int numDenominations, int value, int **dp)
{

    for (int i = 0; i < numDenominations + 1; i++)
    {
        dp[i][0] = 1;
    }
    for (int i = 1; i < value + 1; i++)
    {
        dp[0][i] = 0;
    }
    for (int i = 1; i < numDenominations + 1; i++)
    {
        for (int j = 1; j < value + 1; j++)
        {
            if (j - denominations[i - 1] >= 0)
            {
                dp[i][j] = dp[i - 1][j] + dp[i][j - denominations[i - 1]];
            }
            else
            {
                dp[i][j] = dp[i - 1][j];
            }
        }
    }
    return dp[numDenominations][value];
}
int countWaysToMakeChange(int denominations[], int numDenominations, int value)
{
    int **dp = new int *[numDenominations + 1];
    for (int i = 0; i < numDenominations + 1; i++)
    {
        dp[i] = new int[value + 1];
    }
    return helper(denominations, numDenominations, value, dp);
}

int main()
{

    int numDenominations;
    cin >> numDenominations;

    int *denominations = new int[numDenominations];

    for (int i = 0; i < numDenominations; i++)
    {
        cin >> denominations[i];
    }

    int value;
    cin >> value;

    cout << countWaysToMakeChange(denominations, numDenominations, value);

    delete[] denominations;
}