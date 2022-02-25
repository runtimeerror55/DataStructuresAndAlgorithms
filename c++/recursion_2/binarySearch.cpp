#include <bits/stdc++.h>
using namespace std;

int helper(int input[], int end, int x, int start)
{
    if (start <= end)
    {
        int mid = (start + end) / 2;
        if (input[mid] == x)
        {
            return mid;
        }
        else if (input[mid] < x)
        {
            return helper(input, end, x, mid + 1);
        }
        else
        {
            return helper(input, mid - 1, x, start);
        }
    }
    else
    {
        return -1;
    }
}
int binarySearch(int input[], int length, int x)
{

    return helper(input, length - 1, x, 0);
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int input[100000], length, element, ans;
    cin >> length;
    for (int i = 0; i < length; i++)
    {
        cin >> input[i];
        ;
    }

    cin >> element;
    ans = binarySearch(input, length, element);
    cout << ans << endl;
}