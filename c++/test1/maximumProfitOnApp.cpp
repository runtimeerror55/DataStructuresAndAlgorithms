#include <bits/stdc++.h>
using namespace std;

int maximumProfit(int input[], int n)
{
    sort(input, input + n);
    int max = 0;
    for (int i = 0; i < n; i++)
    {
        if (max < input[i] * (n - i))
        {
            max = input[i] * (n - i);
        }
    }

    return max;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, *input, i, *cost;
    cin >> n;
    input = new int[n];
    for (i = 0; i < n; i++)
        cin >> input[i];

    cout << maximumProfit(input, n) << endl;
}