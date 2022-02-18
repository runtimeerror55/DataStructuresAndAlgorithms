#include <bits/stdc++.h>
using namespace std;

bool helper(char input[], int startIndex, int endIndex)
{
    if (startIndex < endIndex)
    {

        if (input[startIndex] != input[endIndex])
        {
            return false;
        }
        return helper(input, startIndex + 1, endIndex - 1);
    }
    return true;
}

bool checkPalindrome(char input[])
{
    return helper(input, 0, strlen(input) - 1);
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    char input[50];
    cin >> input;

    if (checkPalindrome(input))
    {
        cout << "true" << endl;
    }
    else
    {
        cout << "false" << endl;
    }
}