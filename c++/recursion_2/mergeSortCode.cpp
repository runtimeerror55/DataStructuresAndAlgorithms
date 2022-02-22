#include <bits/stdc++.h>
using namespace std;

void merge(int input[], int start, int mid, int end)
{
    int outputArray[end + 1];
    int i = start;
    int j = mid + 1;
    int k = 0;
    while (i < mid + 1 && j < end + 1)
    {
        if (input[i] < input[j])
        {
            outputArray[k++] = input[i++];
        }
        else
        {
            outputArray[k++] = input[j++];
        }
    }

    while (j < end + 1)
    {
        outputArray[k++] = input[j++];
    }

    while (i < mid + 1)
    {
        outputArray[k++] = input[i++];
    }

    k = 0;
    for (int i = start; i < end + 1; i++)
    {
        input[i] = outputArray[k++];
    }
}

void helper(int input[], int start, int end)
{
    if (start < end)
    {
        int mid = (start + end) / 2;
        helper(input, start, mid);
        helper(input, mid + 1, end);
        merge(input, start, mid, end);
    }
}
void mergeSort(int input[], int length)
{
    helper(input, 0, length - 1);
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int length;
    cin >> length;
    int *input = new int[length];
    for (int i = 0; i < length; i++)
    {
        cin >> input[i];
    }
    mergeSort(input, length);
    for (int i = 0; i < length; i++)
    {
        cout << input[i] << " ";
    }
}