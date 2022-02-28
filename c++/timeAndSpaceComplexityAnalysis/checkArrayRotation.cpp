#include <bits/stdc++.h>
using namespace std;

int arrayRotateCheck(int input[], int size)
{
    for (int i = 1; i < size; i++)
    {
        if (input[i - 1] > input[i])
        {
            return i;
        }
    }
    return 0;
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

        cout << arrayRotateCheck(input, size) << endl;
        delete[] input;
    }

    return 0;
}