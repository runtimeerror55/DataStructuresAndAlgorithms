#include <bits/stdc++.h>
using namespace std;

double sum(int k)
{
    if (k == 0)
    {
        return 1;
    }
    double subAnswer = sum(k - 1) + 1 / pow(2, k);
    return subAnswer;
}

int main()
{

    ios::sync_with_stdio(0);
    cin.tie(0);

    int k;
    cin >> k;
    cout << fixed << setprecision(5);
    cout << sum(k) << endl;
}