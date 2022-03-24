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
        int countZeros = 0;
        int countOnes = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '0')
            {
                countZeros++;
            }
            else
            {
                countOnes++;
            }
        }
        int temp = min(countZeros, countOnes);

        if (countZeros == countOnes)
        {
            temp = temp * 2;
        }
        else
        {
            temp = temp * 2 + 1;
        }
        cout << temp << endl;
    }
}