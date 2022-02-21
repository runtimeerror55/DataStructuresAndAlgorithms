#include <bits/stdc++.h>
using namespace std;

void shiftCharacters(char input[])
{
    for (int i = strlen(input); i >= 0; i--)
    {
        input[i + 1] = input[i];
    }
}
void pairStar(char input[])
{
    if (input[0] == '\0')
    {
        return;
    }
    if (input[0] == input[1])
    {
        shiftCharacters(input + 1);
        input[1] = '*';
    }
    pairStar(input + 1);
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    char input[100];
    cin.getline(input, 100);
    pairStar(input);
    cout << input << endl;
}