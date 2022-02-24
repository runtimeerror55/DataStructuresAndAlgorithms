#include <bits/stdc++.h>
using namespace std;

int helper(int num, string output[], string keyStrings[])
{
    if (num == 0)
    {
        output[0] = "";
        return 1;
    }
    int subAnswer = helper(num / 10, output, keyStrings);
    int lastDigit = num % 10;
    string lastDigitString = keyStrings[lastDigit];
    for (int i = 0; i < lastDigitString.length() - 1; i++)
    {
        for (int j = 0; j < subAnswer; j++)
        {
            output[j + (i + 1) * subAnswer] = output[j];
        }
    }
    int k = 0;
    for (int i = 0; i < lastDigitString.length(); i++)
    {
        for (int j = 0; j < subAnswer; j++)
        {
            output[k++] += lastDigitString[i];
        }
    }
    return k;
}
int keypad(int num, string output[])
{
    string keyStrings[10] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};

    return helper(num, output, keyStrings);
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int num;
    cin >> num;

    string output[10000];
    int count = keypad(num, output);
    for (int i = 0; i < count && i < 10000; i++)
    {
        cout << output[i] << endl;
    }
}
