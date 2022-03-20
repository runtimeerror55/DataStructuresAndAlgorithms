#include <bits/stdc++.h>
using namespace std;

int kthLargest(int input[], int size, int k)
{

    priority_queue<int> pq;
    for (int i = 0; i < size; i++)
    {
        pq.push(input[i]);
    }
    for (int i = 0; i < k; i++)
    {
        if (i == k - 1)
        {
            return pq.top();
        }
        pq.pop();
    }
    return -1;
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

    cout << kthLargest(arr, n, k);

    delete[] arr;
}