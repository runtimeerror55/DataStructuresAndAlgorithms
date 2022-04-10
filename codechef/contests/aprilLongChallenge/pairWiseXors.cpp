#include <bits/stdc++.h>
using namespace std;
bool isPowerOfTwo(int n)
{
        if (n == 0)
                return false;

        return (ceil(log2(n)) == floor(log2(n)));
}
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
                if (n % 2 != 0)
                {
                        cout << -1 << endl;
                }
                else if (isPowerOfTwo(n))
                {
                        cout << -1 << endl;
                }
                else
                {

                        int a = 0;
                        int b = n / 2;
                        int flag = false;
                        int c = -1;

                        for (int i = 1; i < n; i++)
                        {
                                int xr = i ^ b;
                                if (i + xr == n / 2)
                                {
                                        c = i;
                                        flag = true;
                                        break;
                                }
                        }
                        if (flag)
                        {
                                cout << a << " " << b << " " << c << endl;
                        }
                        else
                        {
                                cout << -1 << endl;
                        }
                }
        }
}
