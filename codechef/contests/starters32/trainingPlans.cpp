#include <bits/stdc++.h>
using namespace std;
typedef long double ld;

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
        vector<vector<int>> vv(n);
        priority_queue<int> pq;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i].first;
        }
        for (int i = 0; i < n; i++)
        {
            cin >> v[i].second;
        }

        for (int i = 0; i < n; i++)
        {
            vv[v[i].second].push_back(v[i].first);
        }
        long double maxSum = 0.0;
        long long int sum = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < vv[i].size(); j++)
            {
                pq.push(vv[i][j]);
            }
            if (pq.size() != 0)
            {
                int temp = pq.top();
                sum += temp;
                maxSum = max(maxSum, ld(sum) / (i + 1));
                pq.pop();
            }
            else
            {
                break;
            }
        }
        cout << fixed << setprecision(8) << maxSum << endl;
    }
}
