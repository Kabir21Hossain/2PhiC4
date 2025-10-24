#include <bits/stdc++.h>
using namespace std;

void bfs(vector<int> &adj_list[], int src, int n)
{
    vector<bool> visited(n, false);
    queue<int> q;
    q.push(src);
    visited[q] = true;

    while (!q.empty())
    {
        int head = q.front();
        q.pop();
        cout << head << " ";

        for (auto &it : adj_list[head])
        {
            if (!visited[it])
            {
                q.push(it);
                visited[it] = true;
            }
        }
    }
}

int main()
{

    int n, e;
    cin >> n >> e;
    vector<int> adj_list[n];

    for (int i = 0; i < e; i++)
    {
        int u, v;
        cin >> u >> v;
        adj_list[u].push_back(v);
        adj_list[v].push_back(u);
    }

    int src = 0;

    bfs(adj_list, src, n);

    return 0;
}