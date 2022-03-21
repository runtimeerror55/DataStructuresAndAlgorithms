#include <bits/stdc++.h>
using namespace std;

int highestFrequency(int input[], int size)
{
    if (size == 0)
    {
        return -1;
    }
    int maxCount = 0;
    int maxFrequentElement = input[0];
    unordered_map<int, int> um;
    for (int i = 0; i < size; i++)
    {
        um[input[i]]++;
    }
    for (int i = 0; i < size; i++)
    {
        if (maxCount < um[input[i]])
        {
            maxCount = um[input[i]];
            maxFrequentElement = input[i];
        }
    }

    return maxFrequentElement;
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

    cout << highestFrequency(arr, n);

    delete[] arr;
}