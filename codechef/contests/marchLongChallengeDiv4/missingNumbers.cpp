#include <bits/stdc++.h>
using namespace std;

bool helper(int aMinusB, int aByB, int aPlusB, int aMultiplyB, int &a, int &b)
{
    int a1 = (aPlusB + aMinusB) / 2;
    int b1 = aPlusB - a1;
    if (a1 == 0 || b1 == 0 || b1 > 10000 || a1 > 10000 || a1 < 1 || b1 < 1)
    {
        return false;
    }
    if ((a1 * b1) != aMultiplyB || a1 / b1 != aByB)
    {
        return false;
    }
    a = a1;
    b = b1;
    return true;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        int input[4];
        for (int i = 0; i < 4; i++)
        {
            cin >> input[i];
        }
        int a = -1, b = -1;
        sort(input, input + 4);

        do
        {
            if (helper(input[0], input[1], input[2], input[3], a, b))
            {
                break;
            }
        } while (next_permutation(input, input + 4));
        cout << a << " " << b << endl;
    }
}