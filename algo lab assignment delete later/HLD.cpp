#include <bits/stdc++.h>
using namespace std;

const int N = 100005;
vector<int> adj[N];
int parent[N], depth[N], heavy[N], head[N], pos[N], subtree_size[N];
int segTree[4 * N], arr[N];
int curPos;

int dfs(int u) {
    subtree_size[u] = 1;
    int maxChildSize = 0, heavyChild = -1;

    for (int v : adj[u]) {
        if (v == parent[u]) continue;
        parent[v] = u;
        depth[v] = depth[u] + 1;

        int childSize = dfs(v);
        subtree_size[u] += childSize;

        if (childSize > maxChildSize) {
            maxChildSize = childSize;
            heavyChild = v;
        }
    }
    return heavy[u] = heavyChild, subtree_size[u];
}

void hld(int u, int h) {
    head[u] = h, pos[u] = curPos++;
    if (heavy[u] != -1) hld(heavy[u], h);

    for (int v : adj[u]) {
        if (v != parent[u] && v != heavy[u]) {
            hld(v, v);
        }
    }
}

void build(int node, int start, int end) {
    if (start == end) {
        segTree[node] = arr[start];
    } else {
        int mid = (start + end) / 2;
        build(2 * node, start, mid);
        build(2 * node + 1, mid + 1, end);
        segTree[node] = segTree[2 * node] + segTree[2 * node + 1];
    }
}

void update(int node, int start, int end, int idx, int val) {
    if (start == end) {
        segTree[node] = val;
    } else {
        int mid = (start + end) / 2;
        if (idx <= mid) update(2 * node, start, mid, idx, val);
        else update(2 * node + 1, mid + 1, end, idx, val);
        segTree[node] = segTree[2 * node] + segTree[2 * node + 1];
    }
}

int query(int node, int start, int end, int L, int R) {
    if (R < start || end < L) return 0;
    if (L <= start && end <= R) return segTree[node];
    int mid = (start + end) / 2;
    return query(2 * node, start, mid, L, R) + query(2 * node + 1, mid + 1, end, L, R);
}

int queryHLD(int u, int v) {
    int res = 0;
    while (head[u] != head[v]) {
        if (depth[head[u]] < depth[head[v]]) swap(u, v);
        cout << "Querying range: " << pos[head[u]] << " to " << pos[u] << endl;
        res += query(1, 0, curPos - 1, pos[head[u]], pos[u]);
        u = parent[head[u]];
    }
    if (depth[u] > depth[v]) swap(u, v);
    cout << "Querying range: " << pos[u] << " to " << pos[v] << endl;
    res += query(1, 0, curPos - 1, pos[u], pos[v]);
    return res;
}

int main() {
    int n, q;
    cout << "Enter number of nodes: ";
    cin >> n;

    cout << "Enter the edges:\n";
    for (int i = 1; i < n; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    memset(heavy, -1, sizeof heavy);
    parent[0] = -1;
    depth[0] = 0;
    curPos = 0;

    dfs(0);
    hld(0, 0);

    cout << "Enter number of queries: ";
    cin >> q;

    while (q--) {
        int type;
        cout << "Query Type (1 for path sum, 2 for update): ";
        cin >> type;

        if (type == 1) {
            int u, v;
            cout << "Enter u and v: ";
            cin >> u >> v;
            cout << "Sum from " << u << " to " << v << " is " << queryHLD(u, v) << endl;
        } else if (type == 2) {
            int idx, val;
            cout << "Enter node and new value: ";
            cin >> idx >> val;
            cout << "Updating index " << pos[idx] << " with value " << val << endl;
            update(1, 0, curPos - 1, pos[idx], val);
            cout << "Updated value at node " << idx << endl;
        } else {
            cout << "Invalid query type!" << endl;
        }
    }

    return 0;
}
