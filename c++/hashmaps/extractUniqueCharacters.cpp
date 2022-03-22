#include <bits/stdc++.h>
using namespace std;

string uniqueChar(string input)
{
    unordered_set<char> us;
    string output = "";
    for (int i = 0; i < input.length(); i++)
    {
        if (us.find(input[i]) == us.end())
        {
            output.push_back(input[i]);
            us.insert(input[i]);
        }
    }

    return output;
}
int main()
{
    string str;
    cin >> str;
    cout << uniqueChar(str);
}