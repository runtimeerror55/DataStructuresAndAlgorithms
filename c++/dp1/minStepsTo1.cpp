#include <bits/stdc++.h>
using namespace std;

int countStepsToOne(int n)
{
    if (n == 1)
    {
        return 0;
    }
    int subAnswer = countStepsToOne(n - 1);
    if (n % 2 == 0)
    {
        subAnswer = min(subAnswer, countStepsToOne(n / 2));
    }
    if (n % 3 == 0)
    {
        subAnswer = min(subAnswer, countStepsToOne(n / 3));
    }
    return subAnswer + 1;
}
int main()
{
    int n;
    cin >> n;
    cout << countStepsToOne(n);
}