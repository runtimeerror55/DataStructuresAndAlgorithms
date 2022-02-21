#include <bits/stdc++.h>
using namespace std;

void shiftCharacters(char input[])
{
    for (int i = strlen(input) - 1; i >= 0; i--)
    {
        input[i + 2] = input[i];
    }
}
void replacePi(char input[])
{
    if (input[1] == '\0')
    {
        return;
    }
    replacePi(input + 1);
    if (input[0] == 'p' && input[1] == 'i')
    {
        shiftCharacters(input + 2);

        input[0] = '3';
        input[1] = '.';
        input[2] = '1';
        input[3] = '4';
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    char input[10000];
    cin.getline(input, 10000);
    replacePi(input);
    cout << input << endl;
}
