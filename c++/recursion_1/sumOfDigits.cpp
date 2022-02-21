#include <bits/stdc++.h>
using namespace std;

int sumOfDigits(int n)
{
    if (n <= 9)
    {
        return n;
    }
    return sumOfDigits(n / 10) + n % 10;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    cout << sumOfDigits(n);
}