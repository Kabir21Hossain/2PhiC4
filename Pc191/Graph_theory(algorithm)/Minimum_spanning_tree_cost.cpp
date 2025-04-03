// #include <bits/stdc++.h>
// using namespace std;

// vector<vector<pair<int, int>>> adj_list;
// vector<bool> visited;

// int prims_algo() {
//     priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
//     pq.push({0, 0}); // {weight, node}

//     int sum = 0;

//     while (!pq.empty()) {
//         pair<int, int> p = pq.top();
//         pq.pop();

//         int w = p.first; // Edge weight
//         int u = p.second; // Node

//         if (visited[u]) continue; // Avoid adding duplicate edges to MST

//         visited[u] = true;
//         sum += w; // Add edge weight to MST sum

//         for (auto it : adj_list[u]) {
//             int v = it.first;
//             int weight = it.second;

//             if (!visited[v]) { // Only push unvisited nodes
//                 pq.push({weight, v});
//             }
//         }
//     }

//     return sum;
// }

// int main() {
//     int v, e;
//     cin >> v >> e;

//     adj_list.assign(v, vector<pair<int, int>>());
//     visited.assign(v, false);

//     for (int i = 0; i < e; i++) {
//         int u, v, w;
//         cin >> u >> v >> w;
//         adj_list[u].push_back({v, w});
//         adj_list[v].push_back({u, w});
//     }

//     int x = prims_algo();
//     cout << "Total cost: " << x << endl;

//     return 0;
// }



#include<bits/stdc++.h>
using namespace std;
vector<vector<pair<int,int>>>adj_list;
vector<bool>visited;

int prims_algo(){

    int sum=0;
    priority_queue< pair<int,int>, vector< pair<int,int> >, greater< pair<int,int> > >pq;
    pq.push({0,0});// {weight,node};

    while(!pq.empty()){

        pair<int,int> p= pq.top();
        pq.pop();
        int w=p.first;
        int u= p.second;

        if(visited[u]) continue;

        sum+=w;
        visited[u]=true;

        for( auto it : adj_list[u]){
            int v= it.first;
            int weight= it.second;

            if( !visited[v]){
                pq.push({weight,v});

            }

        }


    }



     return sum;

}

int main()
{
    int v, e;
    cin>> v >> e; 

    adj_list.assign(v,vector<pair<int,int>>());
    visited.assign(v,false);


    for( int i = 0 ; i < e ; i++){

        int u,v,w;
        cin >> u >> v >> w;

        adj_list[u].push_back({v,w}); // {node,weight}
        adj_list[v].push_back({u,w});
        
    }

    cout<<" minimum cost: "<< prims_algo();
    


   return 0;
}