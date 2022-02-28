#include <bits/stdc++.h>
using namespace std;

int pairSum(int input[], int size, int x)
{
    sort(input, input + size);
    int i = 0, j = size - 1;
    int count = 0;
    while (i < j)
    {
        if (input[i] + input[j] == x)
        {
            int i1 = i, j1 = j;
            while (input[i] == input[i1] && i1 <= j)
            {
                i1++;
            }
            while (input[j] == input[j1] && j1 >= i)
            {
                j1--;
            }
            if (input[i] == input[j])
            {
                count += (i1 - i) * (i1 - i - 1) / 2; // no of combinations formula nC2
            }
            else
            {
                count += (i1 - i) * (j - j1);
            }
            i = i1;
            j = j1;
        }
        else if (input[i] + input[j] < x)
        {
            i++;
        }
        else
        {
            j--;
        }
    }
    return count;
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
        int x;

        cin >> size;
        int *input = new int[size];

        for (int i = 0; i < size; i++)
        {
            cin >> input[i];
        }

        cin >> x;
        cout << pairSum(input, size, x) << endl;

        delete[] input;
    }

    return 0;
}
