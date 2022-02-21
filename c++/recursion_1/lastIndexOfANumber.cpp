#include <bits/stdc++.h>
using namespace std;

int lastIndex(int input[], int n, int x)
{
    if (n == 0)
    {
        return -1;
    }
    int ans = lastIndex(input + 1, n - 1, x);
    if (ans != -1)
    {
        return ans + 1;
    }
    else if (input[0] == x)
    {
        return 0;
    }
    else
    {
        return -1;
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    int *input = new int[n];

    for (int i = 0; i < n; i++)
    {
        cin >> input[i];
    }

    int x;

    cin >> x;

    cout << lastIndex(input, n, x) << endl;
}