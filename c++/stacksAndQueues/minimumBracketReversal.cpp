#include <bits/stdc++.h>
using namespace std;

int countBracketReversals(string input)
{
    stack<char> st;
    int count = 0;
    for (int i = 0; i < input.length(); i++)
    {
        if (input[i] == '{')
        {
            st.push(input[i]);
        }
        else
        {
            if (st.empty())
            {
                st.push('{');
                count++;
            }
            else if (st.top() == '{')
            {
                st.pop();
            }
        }
    }
    if (st.size() % 2 == 0)
    {
        return count + st.size() / 2;
    }
    else
    {
        return -1;
    }
}

int main()
{
    string input;
    cin >> input;
    cout << countBracketReversals(input);
}