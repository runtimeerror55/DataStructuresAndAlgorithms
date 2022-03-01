#include <bits/stdc++.h>
using namespace std;

bool checkSequence(char large[], char small[])
{
    if (small[0] == '\0')
    {
        return true;
    }
    else if (large[0] == '\0' && small[0] != '\0')
    {
        return false;
    }
    if (small[0] == large[0])
    {
        return checkSequence(large + 1, small + 1);
    }
    else
    {
        return checkSequence(large + 1, small);
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    char large[10000];
    char small[10000];
    cin >> large;
    cin >> small;
    bool x = checkSequence(large, small);

    if (x)
        cout << "true";
    else
        cout << "false";
}
