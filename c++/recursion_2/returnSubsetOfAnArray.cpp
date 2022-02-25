#include <bits/stdc++.h>
using namespace std;

int subset(int input[], int length, int output[][20])
{
    if (length == 0)
    {
        output[0][0] = 0;
        return 1;
    }
    int subAnswer = subset(input + 1, length - 1, output);
    for (int i = 0; i < subAnswer; i++)
    {
        int newRow = i + subAnswer;
        int newSize = output[i][0] + 1;
        output[newRow][0] = newSize;
        output[newRow][1] = input[0];
        for (int j = 0; j < newSize - 1; j++)
        {
            output[newRow][j + 2] = output[i][j + 1];
        }
    }
    return 2 * subAnswer;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int input[20], length, output[35000][20];
    cin >> length;
    for (int i = 0; i < length; i++)
        cin >> input[i];

    int size = subset(input, length, output);

    for (int i = 0; i < size; i++)
    {
        for (int j = 1; j <= output[i][0]; j++)
        {
            cout << output[i][j] << " ";
        }
        cout << endl;
    }
}