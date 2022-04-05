#include <iostream>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int l[n];
        for (int i = 0; i < n; i++)
        {
            cin >> l[i];
        }
        int r[n];
        for (int i = 0; i < n; i++)
        {
            cin >> r[i];
        }
        long long int sum = 0;
        for (int i = 0; i < n - 1; i++)
        {
            sum = sum + min(r[i], l[i + 1]);
        }
        cout << sum << endl;
    }
}
