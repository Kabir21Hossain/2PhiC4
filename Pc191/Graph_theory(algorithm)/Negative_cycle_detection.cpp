/*

pseudocode ----
-----------------

- input: take a weighted graph as input
- output: show whether there is any negative cycle or not and print the distance array


- create a distance array and initialize it with infinity
- d[src]=0
- bool negative_cycle=false
- for i=1 to n:
    - for all edges e(u,v,w):
        -if(d[u]+w<d[v])
            -d[v]=d[u]+w
            -if i==n:
                - negative_cycle=true;

-print the distance array and show whether there is any negative cycle or not

*/


#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;
vector<pair<int, int>> adj_list[N];
const int INF = 1e9;
int d[N];

int main() {
    int v, e;
    cin >> v >> e;

    for (int i = 0; i < e; i++) {
        int u, v, w;
        cin >> u >> v >> w;
        adj_list[u].push_back({v, w});
    }

    // Initialize distances
    for (int i = 1; i <= v; i++) 
        d[i] = INF;

    int src = 1;
    d[src] = 0;

    bool negative_cycle = false;

    // Relax all edges |V| - 1 times
    for (int i = 1; i <= v - 1; i++) {
        for (int nodes = 1; nodes <= v; nodes++) {
            for (auto it : adj_list[nodes]) {
                int u = nodes;
                int v = it.first;
                int w = it.second;

                if (d[u] != INF && d[u] + w < d[v]) {
                    d[v] = d[u] + w;
                }
            }
        }
    }

    // Check for negative weight cycle
    for (int nodes = 1; nodes <= v; nodes++) {
        for (auto it : adj_list[nodes]) {
            int u = nodes;
            int v = it.first;
            int w = it.second;

            if (d[u] != INF && d[u] + w < d[v]) {
                negative_cycle = true;
                break;
            }
        }
        if (negative_cycle) break;
    }

    if (negative_cycle)
        cout << "Negative cycle exists\n";
    else
        cout << "No negative cycle\n";

    // Print shortest distances
    for (int i = 1; i <= v; i++) {
        if (d[i] == INF)
            cout << i << " th node distance from source: INF\n";
        else
            cout << i << " th node distance from source: " << d[i] << endl;
    }

    return 0;
}
