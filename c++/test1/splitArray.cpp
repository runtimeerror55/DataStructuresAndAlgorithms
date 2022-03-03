#include <bits/stdc++.h>
using namespace std;

bool helper(int input[], int size, int sum1, int sum2)
{
    if (size == 0)
    {
        if (sum1 == sum2)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    int temp = input[size - 1];

    if (temp % 5 == 0)
    {
        return helper(input, size - 1, sum1, sum2 + temp);
    }
    else if (temp % 3 == 0)
    {
        return helper(input, size - 1, sum1 + temp, sum2);
    }

    else
    {
        return helper(input, size - 1, sum1 + temp, sum2) || helper(input, size - 1, sum1, sum2 + temp);
    }
}
bool splitArray(int input[], int size)
{

    return helper(input, size, 0, 0);
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int size;
    cin >> size;
    int *input = new int[1 + size];

    for (int i = 0; i < size; i++)
        cin >> input[i];

    if (splitArray(input, size))
    {
        cout << "true" << endl;
    }
    else
    {
        cout << "false" << endl;
    }

    return 0;
}