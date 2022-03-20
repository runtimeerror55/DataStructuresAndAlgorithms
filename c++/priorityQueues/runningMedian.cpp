#include <bits/stdc++.h>
using namespace std;

void findMedian(int input[], int size)
{
    if (size == 0)
    {
        return;
    }
    priority_queue<int> max;
    priority_queue<int, vector<int>, greater<int>> min;

    max.push(input[0]);
    int median = max.top();
    cout << median << " ";
    for (int i = 1; i < size; i++)
    {
        if (input[i] < max.top())
        {
            max.push(input[i]);
            if (max.size() - min.size() >= 2)
            {
                min.push(max.top());
                max.pop();
            }
        }
        else
        {
            min.push(input[i]);
            if (min.size() - max.size() >= 2)
            {
                max.push(min.top());
                min.pop();
            }
        }
        if ((max.size() + min.size()) % 2 == 0)
        {
            median = (max.top() + min.top()) / 2;
        }
        else
        {
            if (max.size() > min.size())
            {
                median = max.top();
            }
            else
            {
                median = min.top();
            }
        }
        cout << median << " ";
    }
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

    findMedian(arr, n);

    delete[] arr;
}
