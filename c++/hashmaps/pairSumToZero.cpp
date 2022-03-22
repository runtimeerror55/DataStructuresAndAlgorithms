#include <bits/stdc++.h>
using namespace std;

int pairSum(int input[], int size)
{

    unordered_map<int, int> frequency;
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        int compliment = -input[i];
        if (frequency.find(compliment) != frequency.end())
        {
            count += frequency[compliment];
        }
        frequency[input[i]]++;
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