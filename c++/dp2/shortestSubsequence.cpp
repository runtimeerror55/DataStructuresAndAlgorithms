#include <bits/stdc++.h>
using namespace std;

int solve(string s, string v)
{
    vector<vector<int>> dp(s.length() + 1, vector<int>(v.length() + 1));
    vector<vector<int>> next(s.length() + 1, vector<int>(v.length() + 1));
    for (int i = 0; i < s.length(); i++)
    {
        int prev = -1;
        for (int j = 0; j < v.length(); j++)
        {
            if (s[i] == v[j])
            {
                prev = j;
            }
            next[i + 1][j + 1] = prev;
        }
    }
    for (int i = 1; i < s.length() + 1; i++)
    {
        dp[i][0] = 1;
    }
    for (int j = 0; j < v.length() + 1; j++)
    {
        dp[0][j] = 1001;
    }

    for (int i = 1; i < s.length() + 1; i++)
    {
        for (int j = 1; j < v.length() + 1; j++)
        {
            if (next[i][j] != -1)
            {
                dp[i][j] = min(1 + dp[i - 1][next[i][j]], dp[i - 1][j]);
            }
            else
            {
                dp[i][j] = 1;
            }
        }
    }

    return dp[s.length()][v.length()];
}
int main()
{
    string s, v;
    cin >> s >> v;
    cout << solve(s, v);
}