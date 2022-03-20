#include <bits/stdc++.h>
using namespace std;

bool isMaxHeap(int input[], int size)
{
    int parentIndex = 0;
    int leftChildIndex = 1;
    int rightChildIndex = 2;
    while (leftChildIndex < size)
    {
        if (input[parentIndex] < input[leftChildIndex] || input[parentIndex] < input[rightChildIndex])
        {
            return false;
        }
        parentIndex++;
        leftChildIndex = 2 * parentIndex + 1;
        rightChildIndex = leftChildIndex + 1;
    }
    return true;
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

    cout << (isMaxHeap(arr, n) ? "true\n" : "false\n");

    delete[] arr;
}