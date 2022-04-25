#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int input[n];
        for (int i = 0; i < n; i++)
        {
            cin >> input[i];
        }
        int count = 0;
        int index = -1;
        for (int i = 0; i < n - 1; i++)
        {
            if (input[i] > input[i + 1])
            {
                count++;
                index = i;
            }
        }
        if (count > 1)
        {
            cout << "no" << endl;
        }
        else if (count == 0)
        {
            cout << "yes" << endl;
        }
        else
        {

            if (input[index + 1] >= input[index - 1])
            {
                if (index != n - 2)
                {
                    if (input[index + 2] >= input[index])
                    {
                        cout << "yes" << endl;
                    }
                    else
                    {
                        cout << "no" << endl;
                    }
                }
                else
                {
                    cout << "yes" << endl;
                }
            }
            else
            {
                cout << "no" << endl;
            }
        }
    }
}