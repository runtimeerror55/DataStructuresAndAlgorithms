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
        int n, r;
        cin >> n >> r;
        int cost[n];
        int cashBack[n];
        map<long long int, long long int> mp;
        for (int i = 0; i < n; i++)
        {

            cin >> cost[i];
        }

        for (int i = 0; i < n; i++)
        {

            cin >> cashBack[i];
        }

        for (int i = 0; i < n; i++)
        {
            if (cost[i] <= r)
            {

                if (mp.find(cost[i] - cashBack[i]) != mp.end())
                {
                    if (mp[cost[i] - cashBack[i]] > cost[i])
                    {
                        mp[cost[i] - cashBack[i]] = cost[i];
                    }
                }
                else
                {
                    mp[cost[i] - cashBack[i]] = cost[i];
                }
            }
        }

        long long int count = 0;
        for (auto i : mp)
        {

            if (r > i.second)
            {
                count += (r - (i.second) + i.first) / i.first;
                r = (r - (i.second + i.first)) + ((r - (i.second + i.first)) % i.first);
            }
            else if (r == i.second)
            {
                count++;
                r = i.first;
            }
        }
        cout << count << endl;
    }
}