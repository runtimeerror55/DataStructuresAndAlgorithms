#include <bits/stdc++.h>
using namespace std;

int countStepsToOne(int n)
{
    int arr[n + 1];

    for (int i = 0; i < n + 1; i++)
    {
        arr[i] = 0;
    }
    for (int i = 2; i < n + 1; i++)
    {
        int subAnswer = 1 + arr[i - 1];
        if (i % 2 == 0)
        {
            subAnswer = min(subAnswer, 1 + arr[i / 2]);
        }
        if (i % 3 == 0)
        {
            subAnswer = min(subAnswer, 1 + arr[i / 3]);
        }
        arr[i] = subAnswer;
    }
    return arr[n];
}

int main()
{
    int n;
    cin >> n;
    cout << countStepsToOne(n);
}