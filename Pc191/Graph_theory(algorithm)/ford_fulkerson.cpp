#include <bits/stdc++.h>
using namespace std;

int n;

// Depth-First Search to find augmenting path
bool dfs(vector<vector<int>> &rGraph, int src, int sink, vector<bool> &visited, vector<int> &parent) {
    visited[src] = true;

    for (int v = 0; v < n; v++) {
        if (rGraph[src][v] > 0 && !visited[v]) {
            parent[v] = src;
            if (v == sink) return true;
            if (dfs(rGraph, v, sink, visited, parent)) return true;
        }
    }

    return false;
}

// Ford-Fulkerson using DFS
int ford_fulkerson(vector<vector<int>> &graph, int src, int sink) {
    vector<vector<int>> rGraph = graph;
    vector<int> parent(n);
    vector<bool> visited(n);
    int max_flow = 0;

    while (true) {
        parent.assign(n, -1);
        visited.assign(n, false);

        if (!dfs(rGraph, src, sink, visited, parent)) break;

        int path_flow = INT_MAX;

        for (int v = sink; v != src; v = parent[v]) {
            int u = parent[v];
            path_flow = min(path_flow, rGraph[u][v]);
        }

        for (int v = sink; v != src; v = parent[v]) {
            int u = parent[v];
            rGraph[u][v] -= path_flow;
            rGraph[v][u] += path_flow;
        }

        max_flow += path_flow;
    }

    return max_flow;
}

int main() {
    int e, src, sink;

    cout << "Enter the number of vertices and edges: ";
    cin >> n >> e;

    vector<vector<int>> graph(n, vector<int>(n));

    cout << "Enter edges and capacity (u v capacity):\n";
    for (int i = 0; i < e; i++) {
        int u, v, capacity;
        cin >> u >> v >> capacity;
        graph[u][v] = capacity;
    }

    cout << "Enter source and sink: ";
    cin >> src >> sink;

    int max_flow = ford_fulkerson(graph, src, sink);

    cout << "Maximum flow: " << max_flow << endl;

    return 0;
}
