#include <bits/stdc++.h>
using namespace std;

void helper(char input[], int currentIndex, int newIndex)
{
    if (input[currentIndex] == '\0')
    {
        input[newIndex] = input[currentIndex];
        return;
    }
    if (input[currentIndex] == input[currentIndex + 1])
    {
        helper(input, currentIndex + 1, newIndex);
    }
    else
    {
        input[newIndex] = input[currentIndex];

        helper(input, currentIndex + 1, newIndex + 1);
    }
}
void removeConsecutiveDuplicates(char input[])
{

    helper(input, 0, 0);
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    char s[100000];
    cin >> s;
    removeConsecutiveDuplicates(s);
    cout << s << endl;
}
