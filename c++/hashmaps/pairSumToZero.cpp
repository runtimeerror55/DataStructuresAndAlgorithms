#include <bits/stdc++.h>
using namespace std;

int pairSum(int input[], int size)
{
    unordered_map<int, int> um;
    int count = 0;
    bool flag = true;
    for (int i = 0; i < size; i++)
    {
        um[input[i]]++;
        if (i != size - 1 && input[i] != input[i + 1])
        {
            flag = false;
        }
    }

    if (flag)
    {
        if (input[0] == 0)
        {
            return ((size - 1) * (size)) / 2;
        }
    }

    for (int i = 0; i < size; i++)
    {
        int elementOneCount = um[input[i]];

        if (elementOneCount > 0)
        {
            int elementTwoCount = um[-input[i]];
            if (elementTwoCount > 0)
            {
                if (input[i] == 0)
                {
                    count += (elementOneCount - 1) * (elementOneCount) / 2;
                }
                else
                {
                    count += elementOneCount * elementTwoCount;
                }
                um[input[i]];
                um[-input[i]] = 0;
            }
        }
    }
    return count;
}
int main()
{
    int n;
    cin >> n;

    int *arr = new int[n];

    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }

    cout << pairSum(arr, n);

    delete[] arr;
}