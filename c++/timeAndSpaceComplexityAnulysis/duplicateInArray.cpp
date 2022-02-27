#include <bits/stdc++.h>
using namespace std;

int findDuplicate(int input[], int size)
{
    9 for (int i = 0; i < size; i++)
    {
        sumOfArrayElements += input[i];
    }
    int sumOfNaturalNumbers = (size - 2) * (size - 1) / 2;
    return sumOfArrayElements - sumOfNaturalNumbers;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--)
    {
        int size;
        cin >> size;
        int *input = new int[size];

        for (int i = 0; i < size; i++)
        {
            cin >> input[i];
        }

        cout << findDuplicate(input, size) << endl;
    }
}