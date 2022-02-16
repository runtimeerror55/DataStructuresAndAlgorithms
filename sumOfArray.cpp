#include <bits/stdc++.h>
using namespace std;

int sum(int input[], int n)
{
    if (n == 1)
    {
        return input[0];
    }
    return sum(input + 1, n - 1) + input[0];
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
    cout << sum(input, n) << endl;
}