#include<iostream>
#include<vector>
using namespace std;

vector<vector<int>> adj_list;
vector<bool> visited;
vector<int> deg;

int is_euler_path_cycle(int v) {
    int odd = 0;
    for (int i = 0; i < v; i++) {
        if (deg[i] % 2 != 0) {
            odd++;
        }
    }

    if (odd == 0) return 0;  // Euler Circuit
    else if (odd == 2) return 2;  // Euler Path
    else return 3;  // Not Euler Graph
}

void dfs(int node) {
    visited[node] = true;
    for (int x : adj_list[node]) {
        if (!visited[x]) {
            dfs(x);
        }
    }
}

bool is_connected(int v) {
    dfs(0);  // Start DFS from node 0
    for (int i = 0; i < v; i++) {
        if (!visited[i]) {
            return false;  // Not connected
        }
    }
    return true;  // Graph is connected
}

int main() {
    int v, e;
    cin >> v >> e;
    
    visited.assign(v, false);
    adj_list.resize(v, vector<int>());
    deg.assign(v, 0);
    
    for (int i = 0; i < e; i++) {
        int u, v;
        cin >> u >> v;
        adj_list[u].push_back(v);
        adj_list[v].push_back(u);
        deg[u]++;
        deg[v]++;
    }

    if (is_connected(v)) {
        int result = is_euler_path_cycle(v);
        if (result == 0) {
            cout << "It's an Euler Circuit\n";
        } else if (result == 2) {
            cout << "It has an Euler Path\n";
        } else {
            cout << "It's not an Euler Graph\n";
        }
    } else {
        cout << "It's not an Euler Graph\n";
    }

    return 0;
}
