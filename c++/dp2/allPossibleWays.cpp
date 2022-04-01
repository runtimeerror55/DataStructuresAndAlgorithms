#include <bits/stdc++.h>
using namespace std;
int helper(int a, int b, int i)
{
    int x = pow(i, b);
    if (a == 0)
    {
        return 1;
    }
    if (x > a || a < 0)
    {
        return 0;
    }
    return helper(a - x, b, i + 1) + helper(a, b, i + 1);
}
int getAllWays(int a, int b)
{

    return helper(a, b, 1);
}
int main()
{
    int a, b;
    cin >> a >> b;
    cout << getAllWays(a, b);
}