#include <bits/stdc++.h>
using namespace std;

long long int findSum(int n)
{
    int remainder = n % 10;
    int quotient = n / 10;
    long long int sum = 0;
    sum = remainder;
    while (quotient > 0)
    {
        remainder = quotient % 10;
        quotient = quotient / 10;
        sum = sum + remainder;
    }
    return sum;
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
        int remainder = n % 10;
        int quotient = n / 10;
        long long int sum = 0;
        sum = remainder;
        while (quotient > 0)
        {
            remainder = quotient % 10;
            quotient = quotient / 10;
            sum = sum + remainder;
        }
        int i = 1;
        long long int ans = n + 1;
        while (true)
        {
            int number = n + i;
            long long int x = findSum(number);
            i++;
            if (sum % 2 == 0)
            {
                if (x % 2 != 0)
                {
                    ans = number;
                    break;
                }
            }
            else
            {
                if (x % 2 == 0)
                {
                    ans = number;
                    break;
                }
            }
        }
        cout << ans << endl;
    }
}