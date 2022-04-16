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
        int x, y;
        cin >> x >> y;
        if (x % 2 != 0 && y % 2 != 0 || x == 1 || y == 1)
        {
            cout << -1 << endl;
        }
        else
        {
            string s;
            string p;
            if (x % 2 == 0 && y % 2 == 0)
            {
                for (int i = 0; i < x / 2; i++)
                {
                    s.push_back('a');
                }
                for (int i = 0; i < y; i++)
                {
                    s.push_back('b');
                }
                for (int i = 0; i < x / 2; i++)
                {
                    s.push_back('a');
                }

                for (int i = 0; i < y / 2; i++)
                {
                    p.push_back('b');
                }
                for (int i = 0; i < x; i++)
                {
                    p.push_back('a');
                }
                for (int i = 0; i < y / 2; i++)
                {
                    p.push_back('b');
                }
            }
            else if (x % 2 != 0)
            {
                for (int i = 0; i < y / 2; i++)
                {
                    s.push_back('b');
                }
                for (int i = 0; i < x; i++)
                {
                    s.push_back('a');
                }
                for (int i = 0; i < y / 2; i++)
                {
                    s.push_back('b');
                }

                for (int i = 0; i < x / 2; i++)
                {
                    p.push_back('a');
                }
                for (int i = 0; i < y / 2; i++)
                {
                    p.push_back('b');
                }
                p.push_back('a');

                for (int i = 0; i < y / 2; i++)
                {
                    p.push_back('b');
                }
                for (int i = 0; i < x / 2; i++)
                {
                    p.push_back('a');
                }
            }
            else if (y % 2 != 0)
            {
                for (int i = 0; i < x / 2; i++)
                {
                    s.push_back('a');
                }
                for (int i = 0; i < y; i++)
                {
                    s.push_back('b');
                }
                for (int i = 0; i < x / 2; i++)
                {
                    s.push_back('a');
                }

                for (int i = 0; i < y / 2; i++)
                {
                    p.push_back('b');
                }
                for (int i = 0; i < x / 2; i++)
                {
                    p.push_back('a');
                }
                p.push_back('b');

                for (int i = 0; i < x / 2; i++)
                {
                    p.push_back('a');
                }
                for (int i = 0; i < y / 2; i++)
                {
                    p.push_back('b');
                }
            }
            cout << s << endl;
            cout << p << endl;
        }
    }
}