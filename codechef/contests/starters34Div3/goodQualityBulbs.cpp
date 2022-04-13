#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, x;
    cin >> n >> x;
    int input[n];
    int sum = 0;
    for (int i = 0; i < n - 1; i++)
    {
        cin >> input[i];
        sum += input[i];
    }

    bool found = false;
    for (int i = 0; i <= 1000; i++)
    {
        if ((sum + i) / n)
        {
            cout << i << endl;
            found = true;
            break;
        }
    }
}