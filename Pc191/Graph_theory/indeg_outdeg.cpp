#include <iostream>
#include <vector>
#include <queue>
#include <cstring>
using namespace std;

const int N = 1e5;
vector<int> adj_list[N];
int outdeg[N];
int indeg[N];
int visited[N];



int main() {
    memset(indeg, 0, sizeof(indeg));
    memset(outdeg, 0, sizeof(outdeg));
    memset(visited, 0, sizeof(visited));

    int v, e;
    cin >> v >> e;

    for (int i = 0; i < e; i++) {
        int u, v;
        cin >> u >> v;
        adj_list[u].push_back(v);
        indeg[v]++;  // Properly count in-degree while reading input
    }

    for (int i = 1; i <= v; i++) {
        outdeg[i] = adj_list[i].size();
    }

   

    for (int i = 1; i <= v; i++) {
        cout << i << " th node: indeg: " << indeg[i] << "\n";
    }

    for (int i = 1; i <= v; i++) {
        cout << i << " th node: outdeg: " << outdeg[i] << "\n";
    }

    return 0;
}
