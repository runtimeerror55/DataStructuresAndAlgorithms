#include <bits/stdc++.h>
using namespace std;

void helper(int input[], int n, int x, int output[], int &count, int currentIndex)
{
    if (n == 0)
    {
        return;
    }
    else if (input[0] == x)
    {
        output[count++] = currentIndex;
    }
    helper(input + 1, n - 1, x, output, count, currentIndex + 1);
}

int allIndexes(int input[], int n, int x, int output[])
{
    int count = 0;
    helper(input, n, x, output, count, 0);
    return count;
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

    int *output = new int[n];

    int size = allIndexes(input, n, x, output);
    for (int i = 0; i < size; i++)
    {
        cout << output[i] << " ";
    }

    delete[] input;

    delete[] output;
}