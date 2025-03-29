#include <bits/stdc++.h>
using namespace std;
const int N = 1e5;
int visited[N];

void dfs(const vector<vector<int>>& graph, int src, set<pair<int, int>>& edges) {
    visited[src] = 1;
    for (int x : graph[src]) {
        edges.insert({src, x});  // Store edges
        if (!visited[x]) {
            dfs(graph, x, edges);
        }
    }
}

bool isBidirectional(const vector<vector<int>>& graph, int nodes) {
    set<pair<int, int>> edges;

    memset(visited, 0, sizeof(visited));
    for (int i = 0; i < nodes; i++) {
        if (!visited[i]) {
            dfs(graph, i, edges);
        }
    }

    // Check if reverse edges exist
    for (auto edge : edges) {
        int u = edge.first, v = edge.second;
        if (edges.find({v, u}) == edges.end()) {
            return false;  // Missing reverse edge
        }
    }
    return true;
}

int main() {
    int nodes, edges;
    
    cout << "Enter the number of nodes: ";
    cin >> nodes;
    cout << "Enter the number of edges: ";
    cin >> edges;

    vector<vector<int>> adj_list(nodes);

    cout << "Enter edges:\n";
    for (int i = 0; i < edges; i++) {
        int u, v;
        cin >> u >> v;
        adj_list[u].push_back(v);
    }

    if (isBidirectional(adj_list, nodes)) {
        cout << "Bidirectional\n";
    } else {
        cout << "Not bidirectional\n";
    }

    return 0;
}
