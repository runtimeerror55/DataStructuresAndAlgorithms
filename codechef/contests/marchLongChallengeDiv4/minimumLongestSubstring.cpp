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
        int noOfZeros = 0;
        int noOfOnes = 0;
        string one = "";
        string two = "";
        for (int i = 0; i < n; i++)
        {
            if (input[i] == '0')
            {
                noOfZeros++;
            }
            else
            {
                noOfOnes++;
            }
        }
        for (int i = 0; i < noOfOnes; i++)
        {
            one.push_back('1');
        }
        for (int i = 0; i < noOfZeros; i++)
        {
            one.push_back('0');
        }

        if (noOfOnes == noOfZeros || noOfZeros == 0 || noOfOnes == 0)
        {
            reverse(one.begin(), one.end());
            for (int i = 0; i < n; i++)
            {
                if (noOfOnes)
                {
                    two.push_back('1');
                    noOfOnes--;
                }
                if (noOfZeros)
                {
                    two.push_back('0');
                    noOfZeros--;
                }
            }
        }

        else if (noOfZeros > noOfOnes)
        {
            int x = noOfOnes + 1;
            int ratio = (noOfZeros - x) / x;
            int remainder = (noOfZeros - x) % x;
            string temp = "0";
            for (int i = 0; i < ratio; i++)
            {
                temp += '0';
            }
            while (two.length() < n)
            {
                if (remainder)
                {
                    two = two + temp + '0';
                    remainder--;
                    noOfZeros--;
                }
                else
                {

                    two += temp;

                    noOfZeros--;
                }
                if (noOfOnes)
                {
                    two += '1';
                    noOfOnes--;
                }
            }
        }
        else if (noOfZeros < noOfOnes)
        {
            reverse(one.begin(), one.end());
            int x = noOfZeros + 1;
            int ratio = (noOfOnes - x) / x;
            int remainder = (noOfOnes - x) % x;
            string temp = "1";
            for (int i = 0; i < ratio; i++)
            {
                temp += '1';
            }
            while (two.length() < n)
            {
                if (remainder)
                {
                    two = two + temp + '1';
                    remainder--;
                    noOfOnes--;
                }
                else
                {

                    two += temp;

                    noOfOnes--;
                }
                if (noOfZeros)
                {
                    two += '0';
                    noOfZeros--;
                }
            }
        }

        cout << one << endl;
        cout << two << endl;
    }
}
