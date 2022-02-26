#include <bits/stdc++.h>
using namespace std;

void helper(int input[], int length, int output[], int outputSize)
{
    if (length == 0)
    {
        for (int i = 0; i < outputSize; i++)
        {
            cout << output[i] << " ";
        }
        cout << endl;
        return;
    }

    helper(input + 1, length - 1, output, outputSize);
    output[outputSize] = input[0];
    helper(input + 1, length - 1, output, outputSize + 1);
}

void printSubsetsOfArray(int input[], int length)
{
    int output[length];
    helper(input, length, output, 0);
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int input[1000], length;
    cin >> length;
    for (int i = 0; i < length; i++)
        cin >> input[i];
    printSubsetsOfArray(input, length);
}