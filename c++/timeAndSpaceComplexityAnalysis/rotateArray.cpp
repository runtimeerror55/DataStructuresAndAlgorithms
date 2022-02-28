#include <bits/stdc++.h>
using namespace std;
void swap(int input[], int i, int j)
{
    int temp = input[i];
    input[i] = input[j];
    input[j] = temp;
}
void rotate(int input[], int d, int size)
{
    for (int i = 0; i < d / 2; i++)
    {
        swap(input, i, d - i - 1);
    }
    for (int i = 0; i < (size - d) / 2; i++)
    {
        swap(input, i + d, size - 1 - i);
    }
    for (int i = 0; i < size / 2; i++)
    {
        swap(input, i, size - 1 - i);
    }
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

        int d;
        cin >> d;

        rotate(input, d, size);

        for (int i = 0; i < size; ++i)
        {
            cout << input[i] << " ";
        }

        delete[] input;
        cout << endl;
    }

    return 0;
}