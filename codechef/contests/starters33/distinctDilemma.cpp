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
        int noOfEvens = 0;
        int noOfOdds = 0;
        for (int i = 0; i < n; i++)
        {
            if (input[i] % 2 == 0)
            {
                noOfEvens++;
            }
            else
            {
                noOfOdds++;
            }
        }
        if (noOfOdds == 0 || noOfEvens == 0)
        {
            cout << 0 << endl;
        }

        else if (noOfOdds % 2 == 0)
        {
            cout << min(noOfOdds / 2, noOfEvens) << endl;
        }
        else
        {
            cout << noOfEvens << endl;
        }
    }
}