#include <bits/stdc++.h>
using namespace std;

void bfs(vector<int> adj_list[], int src, int n)
{
    vector<bool> visited(n, false);
    queue<int> q;
    q.push(src);
    visited[src] = true;

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

void dfs(vector<int> adj_list[], int src, vector<bool> &visited)
{
    cout << src << " ";
    visited[src] = true;

    for (auto &it : adj_list[src])
    {
        if (!visited[it])
        {
            dfs(adj_list, it, visited);
        }
    }
}

void DFS(vector<int> adj_list[], int src, int n)
{
    vector<bool> visited(n, false);

    stack<int> st;
    st.push(src);

    while (!st.empty())
    {
        int head = st.top();

        st.pop();
        if (!visited[head])
        {
            cout << head << " ";
            visited[head] = true;
        }

        for (auto it = adj_list[head].rbegin(); it != adj_list[head].rend(); it++)
        {
            if (!visited[*it])
            {
                st.push(*it);
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

    vector<bool> visited(n, false);
    int src = 0;

    bfs(adj_list, src, n);
    cout << endl;

    dfs(adj_list, 0, visited);
    DFS(adj_list, 0, n);

    return 0;
}