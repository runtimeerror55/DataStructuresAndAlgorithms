#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int input[n];
        for (int i = 0; i < n; i++)
        {
            cin >> input[i];
        }
        sort(input, input + n);
        if (k >= n - 1)
        {
            cout << input[n - 1] << endl;
        }
        else
        {
            cout << input[k] << endl;
        }
    }
}