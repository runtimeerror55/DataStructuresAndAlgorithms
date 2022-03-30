#include <bits/stdc++.h>
using namespace std;

int getMsb(int n)
{
    if (n == 0)
    {
        return 0;
    }
    int msb = 0;
    n = n / 2;
    while (n != 0)
    {
        n = n / 2;
        msb++;
    }
    return msb;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> input(n), msbCount(32, 0);
        int64_t validPairs = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> input[i];
            int msb = getMsb(input[i]);
            msbCount[msb]++;
        }

        for (int i = 0; i < n; i++)
        {
            int msb = getMsb(input[i]);
            validPairs += max(0, msbCount[msb] - 1);
        }

        cout << validPairs / 2 << endl;
    }
}
