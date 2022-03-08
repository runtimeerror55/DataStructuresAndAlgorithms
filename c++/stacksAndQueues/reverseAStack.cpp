#include <bits/stdc++.h>
using namespace std;

void helper(stack<int> &input, stack<int> &extra)
{
    if (extra.size() == 0)
    {
        return;
    }
    int top = extra.top();
    extra.pop();
    helper(input, extra);
    input.push(top);
}
void reverseStack(stack<int> &input, stack<int> &extra)
{
    if (input.size() == 0)
    {
        return;
    }
    int top = input.top();
    extra.push(top);
    input.pop();
    reverseStack(input, extra);

    helper(input, extra);
}

int main()
{
    stack<int> input, extra;
    int size;
    cin >> size;

    for (int i = 0, val; i < size; i++)
    {
        cin >> val;
        input.push(val);
    }

    reverseStack(input, extra);

    while (!input.empty())
    {
        cout << input.top() << " ";
        input.pop();
    }
}