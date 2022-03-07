#include <bits/stdc++.h>
using namespace std;

bool isBalanced(string input)
{

    stack<char> st;
    for (int i = 0; i < input.length(); i++)
    {
        if (input[i] == '(')
        {
            st.push('(');
        }
        else
        {
            if (st.empty())
            {
                return false;
            }
            else
            {
                st.pop();
            }
        }
    }
    return st.empty();
}

int main()
{
    string input;
    cin >> input;
    cout << ((isBalanced(input)) ? "true" : "false");
}