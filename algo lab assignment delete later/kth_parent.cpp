#include <bits/stdc++.h>
using namespace std;

const int MAX = 100005;
const int LOG = 20;  // As log2(100000) is approximately 17

vector<int> adj[MAX];
int up[MAX][LOG];  // up[node][j] will store the 2^j-th parent of 'node'
int depth[MAX];

void dfs(int node, int parent) {
    up[node][0] = parent;  // 2^0-th parent is the immediate parent
    for (int j = 1; j < LOG; j++) {
        if (up[node][j - 1] != -1) {
            up[node][j] = up[up[node][j - 1]][j - 1];
        }
    }
    for (int child : adj[node]) {
        if (child != parent) {
            depth[child] = depth[node] + 1;
            dfs(child, node);
        }
    }
}

int getKthParent(int node, int k) {
    for (int i = 0; i < LOG; i++) {
        if (k & (1 << i)) {  // Check if the ith bit of k is set
            node = up[node][i];
            if (node == -1) return -1;  // If the node doesn't have that ancestor
        }
    }
    return node;
}

int main() {
    int n, q;
    cout << "Enter the number of nodes and queries: ";
    cin >> n >> q;
    
    cout << "Enter the edges (parent-child pairs):\n";
    for (int i = 0; i < n - 1; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    // Preprocessing step
    memset(up, -1, sizeof(up));
    depth[1] = 0;
    dfs(1, -1);

    // Answering queries
    cout << "Enter the queries (node and k):\n";
    while (q--) {
        int node, k;
        cin >> node >> k;
        cout << "The " << k << "th parent of node " << node << " is: " << getKthParent(node, k) << endl;
    }

    return 0;
}
