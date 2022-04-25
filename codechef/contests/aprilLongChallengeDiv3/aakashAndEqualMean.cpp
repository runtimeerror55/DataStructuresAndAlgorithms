#include <bits/stdc++.h>
using namespace std;

long long int helper(long long int input[], long long int temp, long long int n)
{
    int start = 0;
    int end = n - 1;
    int count = 0;
    unordered_map<int, int> um;
    for (int i = 0; i < n; i++)
    {
        um[input[i]]++;
    }
    while (start < end)
    {
        if (input[start] + input[end] == temp)
        {

            if (input[start] == input[end])
            {
                count += ((um[input[start]] - 1) * (um[input[start]])) / 2;
            }
            else
            {
                count += um[input[start]] * um[input[end]];
            }

            start += um[input[start]];
            end -= um[input[end]];
        }
        else if (input[start] + input[end] < temp)
        {
            start++;
        }
        else
        {
            end--;
        }
    }
    return count;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        long long int n;
        cin >> n;
        long long int input[n];
        long double sum = 0.0;
        long long int previous = -1;
        for (int i = 0; i < n; i++)
        {
            cin >> input[i];
            sum += input[i];
        }
        long double mean = sum / n;
        sort(input, input + n);
        long double temp = sum - (mean * (n - 2));
        if (floor(temp) != ceil(temp))
        {
            cout << 0 << endl;
        }
        else
        {
            long long int ans = helper(input, temp, n);
            cout << ans << endl;
        }
    }
}