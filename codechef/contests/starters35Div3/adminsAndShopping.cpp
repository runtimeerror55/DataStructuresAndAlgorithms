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
        long long int n, x;
        cin >> n >> x;
        long long int input[n];
        long long int capacities = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> input[i];
            capacities += input[i];
        }
        sort(input, input + n);
        long long int ans = (x / (input[0]));
        if (x % (input[0]) > 0)
        {
            ans++;
        }
        cout << max(ans, n) << endl;
    }
}