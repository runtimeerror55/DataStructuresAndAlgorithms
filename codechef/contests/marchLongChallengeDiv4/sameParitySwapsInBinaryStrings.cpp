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
        string input;
        cin >> input;
        int noOfOnesAtOddIndexes = 0;
        int noOfOnesAtEvenIndexes = 0;
        int noOfZerosAtEvenIndexes = 0;
        int noOfZerosAtOddIndexes = 0;
        int count = 0;

        for (int i = 0; i < n; i++)
        {
            if (i % 2 == 0)
            {
                if (input[i] == '0')
                {
                    noOfZerosAtEvenIndexes++;
                }
                else if (input[i] == '1')
                {
                    noOfOnesAtEvenIndexes++;
                }
            }
            else
            {
                if (input[i] == '0')
                {
                    noOfZerosAtOddIndexes++;
                }
                else if (input[i] == '1')
                {
                    noOfOnesAtOddIndexes++;
                }
            }
        }

        int i = 0;
        while (i < n)
        {
            if (i % 2 == 0)
            {
                if (noOfZerosAtEvenIndexes)
                {

                    noOfZerosAtEvenIndexes--;
                    i++;
                    if (noOfOnesAtOddIndexes && i < n)
                    {

                        i++;
                        count++;
                        noOfOnesAtOddIndexes--;
                    }
                }
                else
                {
                    i++;
                }
            }
            else
            {
                if (noOfZerosAtOddIndexes)
                {

                    noOfZerosAtOddIndexes--;
                    i++;
                    if (noOfOnesAtEvenIndexes && i < n)
                    {

                        i++;
                        count++;
                        noOfOnesAtEvenIndexes--;
                    }
                }
                else
                {

                    i++;
                }
            }
        }

        cout << count << endl;
    }
}
