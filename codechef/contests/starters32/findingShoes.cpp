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
        int n, m;
        cin >> n >> m;
        int noOfLeftShoesToBeBought = n - m;
        int noOfRightShoesToBeBought = n;
        if (noOfLeftShoesToBeBought <= 0)
        {
            cout << noOfRightShoesToBeBought << endl;
        }
        else
        {
            cout << noOfRightShoesToBeBought + noOfLeftShoesToBeBought << endl;
        }
    }
}