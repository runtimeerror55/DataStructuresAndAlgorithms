#include <bits/stdc++.h>
using namespace std;

int *stockSpan(int input[], int size)
{
    int *output = new int[size];
    output[0] = 1;
    stack<int> st;
    st.push(0);
    for (int i = 1; i < size; i++)
    {

        if (input[i] > input[i - 1])
        {
            while (!st.empty() && input[i] > input[st.top()])
            {
                st.pop();
            }
            if (st.empty())
            {
                output[i] = i + 1;
            }
            else
            {
                output[i] = i - st.top();
            }
        }
        else
        {

            output[i] = 1;
        }
        st.push(i);
    }
    return output;
}

int main()
{
    int size;
    cin >> size;

    int *input = new int[size];
    for (int i = 0; i < size; i++)
    {
        cin >> input[i];
    }

    int *output = stockSpan(input, size);
    for (int i = 0; i < size; i++)
    {
        cout << output[i] << " ";
    }

    cout << "\n";

    delete[] input;
    delete[] output;
}