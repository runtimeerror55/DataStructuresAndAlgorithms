#include <bits/stdc++.h>
using namespace std;

int countZeros(int n)
{
    if (n == 0)
    {
        return 1;
    }
    if (n < 10)
    {
        return 0;
    }
    int ans = countZeros(n / 10);
    if (n % 10 == 0)
    {
        return ans + 1;
    }
    return ans;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    cout << countZeros(n) << endl;
}