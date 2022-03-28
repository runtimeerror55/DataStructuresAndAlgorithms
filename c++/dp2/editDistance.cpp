#include <bits/stdc++.h>
using namespace std;

int editDistance(string s1, string s2)
{

    int subAnswer = 0;
    if (s1.length() == 0 || s2.length() == 0)
    {
        return max(s1.length(), s2.length());
    }
    if (s1[0] == s2[0])
    {
        subAnswer = editDistance(s1.substr(1), s2.substr(1));
    }
    else
    {
        int replaceOperation = editDistance(s1.substr(1), s2.substr(1));
        int deleteOperation = editDistance(s1, s2.substr(1));
        int insertOperation = editDistance(s1.substr(1), s2);
        subAnswer = min(min(replaceOperation, deleteOperation), insertOperation) + 1;
    }
    return subAnswer;
}
int main()
{
    string s1;
    string s2;

    cin >> s1;
    cin >> s2;

    cout << editDistance(s1, s2);
}