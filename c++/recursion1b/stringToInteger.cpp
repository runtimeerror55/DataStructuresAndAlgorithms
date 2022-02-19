#include <bits/stdc++.h>
using namespace std;

int stringToNumber(char input[])
{
    if (input[0] == '\0')
    {
        return 0;
    }
    int smallAnswer = stringToNumber(input + 1);
    return smallAnswer + (input[0] - 48) * pow(10, strlen(input) - 1);
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    char input[50];
    cin >> input;
    cout << stringToNumber(input) << endl;
}
