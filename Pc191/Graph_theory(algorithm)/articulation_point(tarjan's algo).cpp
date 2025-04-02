#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<vector<int>> adj_list;
vector<int> dis, low;
vector<bool> visited, is_articulation;
int timeCounter = 0;

void dfs(int u, int parent) {
    visited[u] = true;
    dis[u] = low[u] = ++timeCounter;
    int children = 0;

    for (int v : adj_list[u]) {
        if (v == parent) continue; // Skip the parent node

        if (!visited[v]) {
            children++;
            dfs(v, u);

            // Update low-link value
            low[u] = min(low[u], low[v]);

            // **Articulation Point Check (Fixed Condition)**
            if (parent != -1 && low[v] >= dis[u]) {
                is_articulation[u] = true;
            }
        } else {  
            // **Back Edge Case: Update Low Value**
            low[u] = min(low[u], dis[v]);
        }
    }

    // **If Root Node Has More Than 1 Child, It's an Articulation Point**
    if (parent == -1 && children > 1) {
        is_articulation[u] = true;
    }
}

int main() {
    int v, e;
    cout << "Enter number of vertices and edges: ";
    cin >> v >> e;

    adj_list.resize(v);
    visited.assign(v, false);
    is_articulation.assign(v, false);
    dis.assign(v, -1);
    low.assign(v, -1);

    cout << "Enter edges:\n";
    for (int i = 0; i < e; i++) {
        int u, v;
        cin >> u >> v;
        adj_list[u].push_back(v);
        adj_list[v].push_back(u);
    }

    // **Ensure DFS Runs for Every Component**
    for (int i = 0; i < v; i++) {
        if (!visited[i]) {
            dfs(i, -1);
        }
    }

    cout << "Articulation points:\n";
    for (int i = 0; i < v; i++) {
        if (is_articulation[i]) {
            cout << i << " ";
        }
    }
    cout << endl;

    return 0;
}
