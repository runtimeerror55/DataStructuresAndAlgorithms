#include <bits/stdc++.h>
using namespace std;

int lengthOfLongestSubsetWithZeroSum(int input[], int size)
{
    unordered_map<int, int> um;
    int sum = 0;
    int maxLength = 0;
    for (int i = 0; i < size; i++)
    {
        sum += input[i];

        if (sum == 0)
        {
            maxLength = i + 1;
                }
        else if (um.find(sum) != um.end())
        {
            maxLength = max(maxLength, i - um[sum]);
        }
        else
        {
            um[sum] = i;
        }
    }
    return maxLength;
}
int main()
{
    int size;
    cin >> size;

    int *arr = new int[size];

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    cout << lengthOfLongestSubsetWithZeroSum(arr, size);

    delete[] arr;
}