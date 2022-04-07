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
        long long int sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum += input[i];
        }
        long long int sum1 = 0;
        long long int ans = 1;
        for (int i = 1; sum1 <= sum; i++)
        {
            sum1 = sum1 + i;
            if (sum1 > sum)
            {

                ans = i;
                break;
            }
        }
        cout << ans - 1 << endl;
    }
}