#include <bits/stdc++.h>
using namespace std;

int getPairsWithDifferenceK(int input[], int size, int k)
{

    unordered_map<int, int> frequency;
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        int compliment = input[i] + k;

        count += frequency[compliment];

        if (k != 0)
        {
            compliment = input[i] - k;
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

    int *input = new int[n];

    for (int i = 0; i < n; i++)
    {
        cin >> input[i];
    }

    int k;
    cin >> k;

    cout << getPairsWithDifferenceK(input, n, k);

    delete[] input;
}