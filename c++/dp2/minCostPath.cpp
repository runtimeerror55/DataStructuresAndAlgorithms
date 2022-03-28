#include <bits/stdc++.h>
using namespace std;

int minCostPath(int **input, int m, int n)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int left, up, diagnol, minimum = INT_MAX;
            if (j != 0)
            {
                left = input[i][j - 1];
                minimum = min(minimum, left);
            }
            if (i != 0)
            {
                up = input[i - 1][j];
                minimum = min(minimum, up);
            }
            if (i != 0 && j != 0)
            {
                diagnol = input[i - 1][j - 1];
                minimum = min(minimum, diagnol);
            }
            if (minimum != INT_MAX)
            {
                input[i][j] += minimum;
            }
        }
    }
    return input[m - 1][n - 1];
}
int main()
{
    int **arr, n, m;
    cin >> n >> m;
    arr = new int *[n];
    for (int i = 0; i < n; i++)
    {
        arr[i] = new int[m];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }
    cout << minCostPath(arr, n, m) << endl;
}