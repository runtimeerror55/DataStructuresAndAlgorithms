#include <iostream>
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
        int n, x;
        cin >> n;
        long long int input[n];
        for (int i = 0; i < n; i++)
        {
            cin >> input[i];
        }
        cin >> x;

        long long int temp[n];
        unordered_map<long long int, long long int> um;
        long long int count = 0;
        for (int i = 0; i < n; i++)
        {
            temp[i] = input[i] & x;
            um[temp[i]]++;
        }
        for (int i = 0; i < n; i++)
        {
            count += um[temp[i]] * um[temp[i]];
            um[temp[i]] = 0;
        }
        cout << count << endl;
    }
}
