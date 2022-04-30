#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int v, e;
    cin >> v >> e;
    vector<vector<int>> graph(v, vector<int>(v, 0));
    for (int i = 0; i < e; i++)
    {
        int vertex1, vertex2;
        cin >> vertex1 >> vertex2;
        graph[vertex1][vertex2] = 1;
        graph[vertex2][vertex1] = 1;
    }

    vector<int> visited(v, 0);
    queue<int> q;
    for (int i = 0; i < v; i++)
    {
        if (visited[i] == 0)
        {
            q.push(i);
            visited[i]++;
            while (!q.empty())
            {
                int front = q.front();
                q.pop();
                cout << front << " ";
                for (int j = 0; j < v; j++)
                {
                    if (graph[front][j] == 1 && visited[j] == 0)
                    {
                        q.push(j);
                        visited[j]++;
                    }
                }
            }
        }
    }
}