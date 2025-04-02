#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

const int MAXN = 100005;
vector<int> adj[MAXN];
bool visited[MAXN];
int tin[MAXN], low[MAXN], timer;
vector<pair<int, int>> bridges;

void dfs(int v, int p) {
    visited[v] = true;
    tin[v] = low[v] = timer++;
    
    for (int to : adj[v]) {
        if (to == p) continue; // Ignore the edge to parent
        if (visited[to]) {
            // Back edge
            low[v] = min(low[v], tin[to]);
        } else {
            // Forward edge (tree edge)
            dfs(to, v);
            low[v] = min(low[v], low[to]);
            if (low[to] > tin[v]) {
                bridges.push_back({v, to});
            }
        }
    }
}

void find_bridges(int n) {
    timer = 0;
    fill(visited, visited + n, false);
    fill(tin, tin + n, -1);
    fill(low, low + n, -1);
    
    for (int i = 0; i < n; i++) {
        if (!visited[i]) {
            dfs(i, -1);
        }
    }
}

int main() {
    int n, m;
    cin >> n >> m; // Number of nodes and edges
    
    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    
    find_bridges(n);
    
    cout << "Bridges in the graph:\n";
    for (auto bridge : bridges) {
        cout << bridge.first << " " << bridge.second << "\n";
    }
    
    return 0;
}
