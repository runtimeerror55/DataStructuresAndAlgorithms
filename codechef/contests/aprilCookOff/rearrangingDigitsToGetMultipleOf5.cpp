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
        int d;
        cin >> d;
        string input;
        cin >> input;
        int flag = false;

        for (int i = 0; i < d; i++)
        {
            int number = input[i] - 48;
            if (number == 5 || number == 0)
            {
                flag = true;
                break;
            }
        }
        if (flag)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}