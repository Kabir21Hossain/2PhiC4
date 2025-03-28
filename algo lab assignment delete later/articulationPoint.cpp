#include <bits/stdc++.h>
using namespace std;

class Graph {
public:
    void dfs(int u, vector<vector<int>>& adj, vector<int>& disc, vector<int>& low, vector<int>& parent, vector<bool>& ap, int& time) {
        disc[u] = low[u] = ++time;
        int children = 0;
        
        for (int v : adj[u]) {
            if (disc[v] == -1) {
                children++;
                parent[v] = u;
                dfs(v, adj, disc, low, parent, ap, time);
                low[u] = min(low[u], low[v]);

                if (parent[u] == -1 && children > 1) {
                    ap[u] = true;
                }
                if (parent[u] != -1 && low[v] >= disc[u]) {
                    ap[u] = true;
                }
            } else if (v != parent[u]) {
                low[u] = min(low[u], disc[v]);
            }
        }
    }

    void findArticulationPoints(int V, vector<vector<int>>& adj) {
        vector<int> disc(V, -1), low(V, -1), parent(V, -1);
        vector<bool> ap(V, false);
        int time = 0;
        
        for (int i = 0; i < V; i++) {
            if (disc[i] == -1) {
                dfs(i, adj, disc, low, parent, ap, time);
            }
        }

        cout << "Articulation Points: ";
        for (int i = 0; i < V; i++) {
            if (ap[i]) {
                cout << i << " ";
            }
        }
        cout << "\n";
    }
};

int main() {
    Graph obj;
    int V = 5;
    vector<vector<int>> adj = {
        {1, 2},    // 0
        {0, 2, 3}, // 1
        {0, 1},    // 2
        {1, 4},    // 3
        {3}        // 4
    };
    obj.findArticulationPoints(V, adj);
    return 0;
}
