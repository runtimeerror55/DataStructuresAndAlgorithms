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
        string s;
        cin >> s;
        int noOfOnes = 0;
        bool flag = false;
        for (int i = 0; i < n; i++)
        {
            if (i != n - 1 && s[i] == '1' && s[i + 1] == '1')
            {
                flag = true;
            }
            if (s[i] == '1')
            {
                noOfOnes++;
            }
        }

        if (noOfOnes == 0)
        {
            cout << 0 << endl;
        }
        else if (noOfOnes > 0 && flag == false)
        {
            cout << 1 << endl;
        }
        else
        {
            cout << 2 << endl;
        }
    }
}