#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        if (n <= 2)
        {
            cout << 0 << endl;
        }
        else
        {
            int number = 2;
            int powerOftwo = 4;
            int count = 0;
            while (powerOftwo <= n)
            {
                count += powerOftwo - number - 1;
                number = powerOftwo;
                powerOftwo *= 2;
            }
            count += n - number;
            cout << count << endl;
        }
    }
}
