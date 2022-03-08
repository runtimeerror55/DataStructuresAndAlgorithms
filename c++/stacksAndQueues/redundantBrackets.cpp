#include <bits/stdc++.h>
using namespace std;

bool checkRedundantBrackets(string input)
{
    stack<char> st;
    for (int i = 0; i < input.length(); i++)
    {
        if (input[i] != ')')
        {
            st.push(input[i]);
        }
        else
        {
            char top = st.top();
            st.pop();
            int count = 0;
            while (top != '(')
            {
                count++;
                top = st.top();
                st.pop();
            }
            if (count < 2)
            {
                return true;
            }
        }
    }
    return false;
}

int main()
{
    string input;
    cin >> input;
    cout << ((checkRedundantBrackets(input)) ? "true" : "false");
}