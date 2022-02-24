#include <bits/stdc++.h>
using namespace std;

bool helper(char input[], int startIndex)
{
    if (input[startIndex] == '\0')
    {
        return true;
    }
    if (input[startIndex] != 'a')
    {
        return false;
    }
    else if (input[startIndex + 1] != '\0' && input[startIndex + 2] != '\0')
    {
        if (input[startIndex + 1] == 'b' && input[startIndex + 2] == 'b')
        {
            return helper(input, startIndex + 3);
        }
    }
    return helper(input, startIndex + 1);
}
bool checkAB(char input[])
{
    return helper(input, 0);
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    char input[100];
    bool ans;
    cin >> input;
    ans = checkAB(input);
    if (ans)
        cout << "true" << endl;
    else
        cout << "false" << endl;
}
