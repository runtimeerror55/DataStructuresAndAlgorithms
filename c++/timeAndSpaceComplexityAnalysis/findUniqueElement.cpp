#include <bits/stdc++.h>
using namespace std;

int findUnique(int input[], int size)
{

    int xorValue = 0;
    for (int i = 0; i < size; i++)
    {
        xorValue ^= input[i];
    }
    return xorValue;
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

        for (int i = 0; i < size; ++i)
        {
            cin >> input[i];
        }

        cout << findUnique(input, size) << endl;
    }
}