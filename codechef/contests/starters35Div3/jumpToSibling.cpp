#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int input[n];
        for (int i = 0; i < n; i++)
        {
            cin >> input[i];
        }

        int oddPrefixSum[n];
        int evenPrefixSum[n];
        int noOfOdds = 0;
        int noOfEvens = 0;
        int count = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            if (input[i] % 2 == 0)
            {
                noOfEvens++;
            }
            else
            {
                noOfOdds++;
            }
            oddPrefixSum[i] = noOfOdds;
            evenPrefixSum[i] = noOfEvens;
        }
        if (input[0] % 2 == 0 && input[n - 1] % 2 == 0)
        {
            cout << noOfEvens - 1 << endl;
        }
        else if (input[0] % 2 != 0 && input[n - 1] % 2 != 0)
        {
            cout << noOfOdds - 1 << endl;
        }
        else
        {
            if (input[0] % 2 == 0)
            {
                for (int i = 0; i < n; i++)
                {
                    if (input[i] % 2 == 0)
                    {
                        count = min(count, oddPrefixSum[n - 1] - oddPrefixSum[i] + evenPrefixSum[i] - 1);
                    }
                }
            }
            else
            {
                for (int i = 0; i < n; i++)
                {
                    if (input[i] % 2 != 0)
                    {
                        count = min(count, evenPrefixSum[n - 1] - evenPrefixSum[i] + oddPrefixSum[i] - 1);
                    }
                }
            }
            cout << count << endl;
        }
    }
}