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
        int n;
        cin >> n;
        int input[n];
        int noOfZeros = 0;
        int noOfNegatives = 0;
        int noOfPositives = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> input[i];
            if (input[i] == 0)
            {
                noOfZeros++;
            }
            else if (input[i] < 0)
            {
                noOfNegatives++;
            }
            else
            {
                noOfPositives++;
            }
        }

        long long int count = ((noOfPositives - 1) * (noOfPositives)) / 2 + ((noOfNegatives - 1) * (noOfNegatives)) / 2;
        cout << count << endl;
    }
}