#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int a, b;
    cin >> a >> b;
    if (a == 1 && b == 1)
    {
        cout << "https://discuss.codechef.com" << endl;
    }
    else if (a == 1 && b == 0)
    {
        cout << "https://www.codechef.com/contests" << endl;
    }
    else if (a == 0)
    {
        cout << "https://www.codechef.com/practice" << endl;
    }
}