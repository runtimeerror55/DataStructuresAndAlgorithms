#include <bits/stdc++.h>
using namespace std;

vector<int> kLargest(int input[], int size, int k)
{
    priority_queue<int> pq;
    vector<int> output;
    for (int i = 0; i < size; i++)
    {
        pq.push(input[i]);
    }

    for (int i = 0; i < k; i++)
    {
        output.push_back(pq.top());
        pq.pop();
    }
    return output;
}
int main()
{

    int size;
    cin >> size;
    int *input = new int[1 + size];

    for (int i = 0; i < size; i++)
        cin >> input[i];

    int k;
    cin >> k;

    vector<int> output = kLargest(input, size, k);
    for (int i = 0; i < output.size(); i++)
        cout << output[i] << endl;

    return 0;
}
