#include <bits/stdc++.h>
using namespace std;

void helper(int num, string keyStrings[], string output)
{
    if (num == 0)
    {
        cout << output << endl;
        return;
    }
    int lastDigit = num % 10;
    string lastDigitString = keyStrings[lastDigit];
    for (int i = 0; i < lastDigitString.length(); i++)
    {
        string smallString = lastDigitString[i] + output;
        helper(num / 10, keyStrings, smallString);
    }
}

void printKeypad(int num)
{
    string keyStrings[10] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
    helper(num, keyStrings, "");
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int num;
    cin >> num;

    printKeypad(num);

    return 0;
}