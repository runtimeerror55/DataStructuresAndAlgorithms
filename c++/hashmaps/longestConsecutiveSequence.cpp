#include <bits/stdc++.h>
using namespace std;

vector<int> longestConsecutiveIncreasingSequence(int input[], int size)
{
    vector<int> output;
    unordered_map<int, pair<int, int>> um;
    for (int i = 0; i < size; i++)
    {
        um[input[i]].first++;
        um[input[i]].second = i;
    }

    int longestSequence = 0;
    int i = 0;
    while (i < size)
    {
        if (um[input[i]].first > 0)
        {
            int count = 0;
            int temp = input[i];
            while (um[temp].first > 0)
            {
                count++;
                um[temp].first = 0;
                temp++;
            }
            int lastElement = temp - 1;
            temp = input[i] - 1;
            while (um[temp].first > 0)
            {
                count++;
                um[temp].first = 0;
                temp--;
            }
            if (longestSequence < count)
            {

                longestSequence = count;
                output.clear();
                output.push_back(temp + 1);
                if (input[i] != temp - 1)
                {
                    output.push_back(lastElement);
                }
            }
            else if (longestSequence == count)
            {
                if (output.size() == 0 || um[temp + 1].second < um[output[0]].second)
                {
                    longestSequence = count;
                    output.clear();
                    output.push_back(temp + 1);
                    if (input[i] != temp - 1)
                    {
                        output.push_back(lastElement);
                    }
                }
            }
        }
        i++;
    }

    return output;
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

    vector<int> ans = longestConsecutiveIncreasingSequence(arr, size);

    for (auto i = ans.begin(); i != ans.end(); ++i)
        cout << *i << " ";

    delete[] arr;
}
