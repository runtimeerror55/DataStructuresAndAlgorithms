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
        int ones = 0;
        int negatives = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> input[i];
            if (input[i] == 1)
            {
                ones++;
            }
            else
            {
                negatives++;
            }
        }
        if (ones == 0 || negatives == 0)
        {
            cout << "no" << endl;
        }
        else if (ones % 2 == 0 && negatives % 2 == 0)
        {
            if (abs(ones - negatives) > 2)
            {
                cout << "no" << endl;
            }
            else
            {
                cout << "yes" << endl;
            }
        }
        else
        {
            if (abs(ones - negatives > 1))
            {
                cout << "no" << endl;
            }
            else
            {
                cout << "yes" << endl;
            }
        }
    }
}