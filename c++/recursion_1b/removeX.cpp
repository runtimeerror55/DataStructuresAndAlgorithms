#include <bits/stdc++.h>
using namespace std;

void shiftCharacters(char input[])
{
    for (int i = 0; i < strlen(input); i++)
    {
        input[i] = input[i + 1];
    }
}

void removeX(char input[])
{
    if (input[0] == '\0')
    {
        return;
    }
    removeX(input + 1);
    if (input[0] == 'x')
    {
        shiftCharacters(input);
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    char input[100];
    cin.getline(input, 100);
    removeX(input);
    cout << input << endl;
}