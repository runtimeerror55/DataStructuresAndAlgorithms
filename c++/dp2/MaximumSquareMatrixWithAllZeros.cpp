#include <iostream>
using namespace std;

int findMaxSquareWithAllZeros(int **input, int row, int col)
{
        int dp[row][col];
        for (int i = 0; i < row; i++)
        {
                for (int j = 0; j < col; j++)
                {
                        if (input[i][j] == 0)
                        {
                                dp[i][j] = 1;
                        }
                        else
                        {
                                dp[i][j] = 0;
                        }
                }
        }

        int max = 0;
        for (int i = 1; i < row; i++)
        {
                for (int j = 1; j < col; j++)
                {
                        if (input[i][j] == 0)
                        {

                                dp[i][j] = min(dp[i - 1][j - 1], min(dp[i - 1][j], dp[i][j - 1])) + 1;
                        }
                        if (max < dp[i][j])
                        {
                                max = dp[i][j];
                        }
                }
        }

        return max;
}
int main()
{
        int **arr, n, m, i, j;
        cin >> n >> m;
        arr = new int *[n];

        for (i = 0; i < n; i++)
        {
                arr[i] = new int[m];
        }

        for (i = 0; i < n; i++)
        {
                for (j = 0; j < m; j++)
                {
                        cin >> arr[i][j];
                }
        }

        cout << findMaxSquareWithAllZeros(arr, n, m) << endl;

        return 0;
}