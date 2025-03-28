#include <bits/stdc++.h>
using namespace std;

class Graph {
public:
    bool dfs(int curr, int des, vector<vector<int>>& adj, vector<int>& vis) {
        if (curr == des) return true;
        vis[curr] = 1;
        for (auto x : adj[curr]) {
            if (!vis[x] && dfs(x, des, adj, vis)) {
                return true;
            }
        }
        return false;
    }

    bool isPath(int src, int des, vector<vector<int>>& adj) {
        vector<int> vis(adj.size(), 0);
        return dfs(src, des, adj, vis);
    }

    vector<vector<int>> findSCC(int n, vector<vector<int>>& edges) {
        vector<vector<int>> result;
        vector<int> is_scc(n + 1, 0);
        vector<vector<int>> adj(n + 1);

        for (const auto& edge : edges) {
            adj[edge[0]].push_back(edge[1]);
        }

        for (int i = 1; i <= n; i++) {
            if (!is_scc[i]) {
                vector<int> scc = {i};
                for (int j = i + 1; j <= n; j++) {
                    if (!is_scc[j] && isPath(i, j, adj) && isPath(j, i, adj)) {
                        is_scc[j] = 1;
                        scc.push_back(j);
                    }
                }
                result.push_back(scc);
            }
        }
        return result;
    }
};

int main() {
    Graph obj;
    int V = 5;
    vector<vector<int>> edges = {{1, 3}, {1, 4}, {2, 1}, {3, 2}, {4, 5}};
    vector<vector<int>> ans = obj.findSCC(V, edges);
    
    cout << "Strongly Connected Components are:\n";
    for (const auto& component : ans) {
        for (int node : component) {
            cout << node << " ";
        }
        cout << "\n";
    }
}
