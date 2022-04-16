#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    for (int i = 1; i < 100; i++)
    {
        for (int j = 1; j < 100; j++)
        {
            if ((i + j) >= i * j)
            {
                cout << i << " " << j << endl;
            }
        }
    }

    // int t;
    // cin >> t;
    // while (t--)
    // {
    //     int n;
    //     cin >> n;
    //     int input[n];
    //     for (int i = 0; i < n; i++)
    //     {
    //         cin >> input[i];
    //     }
    //     int ones = 0;
    //     int twos = 0;
    //     int others = 0;
    //     for (int i = 0; i < n; i++)
    //     {
    //         if (input[i] == 1)
    //         {
    //             ones++;
    //         }
    //         else if (input[i] == 2)
    //         {
    //             twos++;
    //             others++;
    //         }
    //         else
    //         {
    //             others++;
    //         }
    //     }
    //     cout << others << endl;
    //     if (ones == 0 && twos == 0)
    //     {
    //         cout << 0 << endl;
    //     }
    //     else
    //     {
    //         int count = 0;
    //         if (ones > 0)
    //         {
    //             count = others + (((ones - 1) * ones) / 2) + ((twos - 1) * twos) / 2;
    //         }
    //         else
    //         {
    //             count = ((twos - 1) * twos) / 2;
    //         }

    //         // cout << count << endl;
    //     }
    // }
}
