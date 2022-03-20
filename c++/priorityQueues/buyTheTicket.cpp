#include <bits/stdc++.h>
using namespace std;

int buyTicket(int input[], int size, int index)
{
    priority_queue<int> maxHeap;
    int myPriority = input[index];
    for (int i = 0; i < size; i++)
    {
        maxHeap.push(input[i]);
    }

    int count = 0;
    int i = 0;
    while (true)
    {
        if (i == size)
        {
            i = 0;
        }

        if (input[i] == maxHeap.top())
        {
            if (index == i)
            {
                count++;
                break;
            }
            else
            {
                maxHeap.pop();
                count++;
            }
        }
        i++;
    }
    return count;
}

int main()
{
    int n;
    cin >> n;

    int *arr = new int[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int k;
    cin >> k;

    cout << buyTicket(arr, n, k);

    delete[] arr;
}