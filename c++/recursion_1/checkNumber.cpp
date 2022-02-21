#include <bits/stdc++.h>
using namespace std;

bool checkNumber(int input[], int n, int x)
{
    if (n == 0)
    {
        return false;
    }
    else if (input[0] == x)
    {
        return true;
    }
    return checkNumber(input + 1, n - 1, x);
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
    if (checkNumber(input, n, x))
    {
        cout << "true" << endl;
    }
    else
    {
        cout << "false" << endl;
    }
}