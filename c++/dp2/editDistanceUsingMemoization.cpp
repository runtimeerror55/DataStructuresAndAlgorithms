#include <bits/stdc++.h>
using namespace std;

int helper(string s1, string s2, int **dp)
{

    if (s1.size() == 0 || s2.size() == 0)
    {
        return max(s1.length(), s2.length());
    }
    if (dp[s1.length()][s2.length()] != -1)
    {
        return dp[s1.length()][s2.length()];
    }
    if (s1[0] == s2[0])
    {
        dp[s1.length()][s2.length()] = helper(s1.substr(1), s2.substr(1), dp);
    }
    else
    {
        int replaceOperation = helper(s1.substr(1), s2.substr(1), dp);
        int deleteOperation = helper(s1, s2.substr(1), dp);
        int insertOperation = helper(s1.substr(1), s2, dp);
        dp[s1.length()][s2.length()] = min(min(replaceOperation, deleteOperation), insertOperation) + 1;
    }
    return dp[s1.length()][s2.length()];
}

int editDistance(string s1, string s2)
{
    int **dp = new int *[s1.length() + 1];
    for (int i = 0; i < s1.length() + 1; i++)
    {
        dp[i] = new int[s2.length() + 1];
    }
    for (int i = 0; i < s1.length() + 1; i++)
    {
        for (int j = 0; j < s2.length() + 1; j++)
        {
            dp[i][j] = -1;
        }
    }
    return helper(s1, s2, dp);
}

int main()
{
    string s1;
    string s2;

    cin >> s1;
    cin >> s2;
    cout << editDistance(s1, s2) << endl;
}