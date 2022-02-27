#include <bits/stdc++.h>
using namespace std;

void intersection(int input1[], int input2[], int n, int m)
{
    sort(input1, input1 + n);
    sort(input2, input2 + m);
    int i = 0, j = 0;
    while (i < n)
    {
        if (input1[i] == input2[j])
        {
            cout << input1[i] << " ";
            i++;
            j++;
        }
        else if (input1[i] < input2[j])
        {
            i++;
        }
        else
        {
            j++;
        }
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {

        int n, m;

        cin >> n;
        int *input1 = new int[n];

        for (int i = 0; i < n; i++)
        {
            cin >> input1[i];
        }

        cin >> m;
        int *input2 = new int[m];

        for (int i = 0; i < m; i++)
        {
            cin >> input2[i];
        }

        intersection(input1, input2, n, m);

        delete[] input1;
        delete[] input2;

        cout << endl;
    }
}