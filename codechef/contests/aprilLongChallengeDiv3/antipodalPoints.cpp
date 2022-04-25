#include <iostream>
#include <bits/stdc++.h>
using namespace std;

double helper(long long int x1, long long int y1, long long int x2, long long int y2)
{
    double numerator = (y2 - y1);
    double denominator = (x2 - x1);
    return double(numerator) / denominator;
}

double helper1(long long int x1, long long int y1, long long int x2, long long int y2)
{
    double numerator = (y2 - y1);
    double denominator = (x2 - x1);

    return double(denominator) / numerator;
}

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
        vector<pair<int, int>> v(n);

        long long int count = 0;

        for (int i = 0; i < n; i++)
        {
            int x, y;
            cin >> x >> y;
            v[i].first = x;
            v[i].second = y;
        }
        for (int i = 0; i < n; i++)

        {
            unordered_map<double, int> um;
            for (int j = 0; j < n; j++)
            {
                double slope = helper(v[i].first, v[i].second, v[j].first, v[j].second);
                double reverse = helper1(v[i].first, v[i].second, v[j].first, v[j].second);
                if (reverse == 0)
                {
                    if (um.find(-reverse) != um.end())
                    {

                        count = count + um[-reverse];
                    }
                    if (um.find(reverse) != um.end())
                    {

                        count = count + um[-reverse];
                    }
                }
                else

                    if (um.find(-reverse) != um.end())
                {

                    count = count + um[-reverse];
                }
                um[slope]++;
            }
        }
        if (-0 == -0)
        {
            cout << count << endl;
        }
    }
}
