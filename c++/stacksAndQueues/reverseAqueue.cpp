#include <bits/stdc++.h>
using namespace std;

void reverseQueue(queue<int> &q)
{
    if (q.size() == 0)
    {
        return;
    }
    int front = q.front();
    q.pop();
    reverseQueue(q);
    q.push(front);
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        queue<int> q;
        int size;
        cin >> size;

        for (int i = 0, val; i < size; i++)
        {
            cin >> val;
            q.push(val);
        }

        reverseQueue(q);
        while (!q.empty())
        {
            cout << q.front() << " ";
            q.pop();
        }

        cout << "\n";
    }
}