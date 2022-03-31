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
        int n, x, y;
        cin >> n >> x >> y;
        string input;
        cin >> input;
        int noOfZeros = 0;
        int noOfOnes = 0;
        for (int i = 0; i < n; i++)
        {
            if (input[i] == '0')
            {
                noOfZeros++;
            }
            else
            {
                noOfOnes++;
            }
        }
        if (noOfZeros == 0 || noOfOnes == 0)
        {
            cout << 0 << endl;
        }
        else
        {
            int minCount = x < y ? x : y;
            cout << minCount << endl;
        }
    }
}