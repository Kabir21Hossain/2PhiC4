#include <bits/stdc++.h>
using namespace std;

const int MAX_N = 100005;
vector<int> tree[MAX_N];
int subtree_sum[MAX_N];
int node_value[MAX_N];

void dfs(int node, int parent) {
    subtree_sum[node] = node_value[node];
    for (int child : tree[node]) {
        if (child != parent) {
            dfs(child, node);
            subtree_sum[node] += subtree_sum[child];
        }
    }
}

int main() {
    int n, q;
    cout << "Enter number of nodes and queries: ";
    cin >> n >> q;

    cout << "Enter node values:\n";
    for (int i = 1; i <= n; ++i) {
        cin >> node_value[i];
    }

    cout << "Enter tree edges:\n";
    for (int i = 0; i < n - 1; ++i) {
        int u, v;
        cin >> u >> v;
        tree[u].push_back(v);
        tree[v].push_back(u);
    }

    dfs(1, -1);

    while (q--) {
        int node;
        cout << "Enter the node for subtree sum query: ";
        cin >> node;
        cout << "Subtree sum of node " << node << " is: " << subtree_sum[node] << endl;
    }

    return 0;
}
