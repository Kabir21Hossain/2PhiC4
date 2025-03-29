/*
space complexity=O(n)
time complexity=O(n*n)

pesudocode
------------------------

- take a weighted and undirected graph as input
- create a distance array "d"
- initialize it with infinity and d[src]=0;
- create a visited array and mark all nodes unvisited
- for i=0 to n-1:
    - select a node that is unvisited and minimum possible distance it has

-visited[selected_node]=1
-for all adjacents node of selected_node:
    if(d[selected_node]+edge_cost<d[adj_node])
        d[adj_node]=d[selected_node]+edge_cost

- print the distance array as output


----------------------------------

pseudocode for optimized dijkstra

- create a visited array and mark all nodes as unvisited
- create a distance array and initialize it with infinity
- d[src]=0
- create a priority queue of pair pq
- pq.push({0,src});
- loop until queue is empty:
    - take the top element from queue
    - visited[selected_node]=1
    -loop over the adj_nodes of selected_node:
        - if adjacents nodes are unvisited and d[selected_node]+edge_cost<d[adj_node]
            - d[adj_node]=d[selected_node]+edge_cost
            - pq.push({d[adj_node],adj_node});
            





*/





#include<iostream>
#include<vector>
#include<queue>
using namespace std;
const int N=1e5;
const int INF=1e9;
int d[N];
int visited[N];
vector<pair<int,int>>adj_list[N];

void dijkstra(int src,int nodes)
{
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;

    for(int i=0;i<nodes;i++) // O(v)
        d[i]=INF;
    d[src]=0;

    pq.push({0,src});// O(log v)

    while(!pq.empty()) //O(E)
    {
        pair<int,int>p=pq.top();
        int selected_node=p.second;
        pq.pop();// O(logE)


        visited[selected_node]=1;

        for(auto it:adj_list[selected_node])
        {
            int adj_node=it.first;
            int edge_cost=it.second;


            if(!visited[adj_node] && (d[selected_node]+edge_cost<d[adj_node]))
            {
                d[adj_node]=d[selected_node]+edge_cost;
                pq.push({d[adj_node],adj_node}); //O(logE)
                
            }
        }


    }
    


}





int main()
{
    int v,e;
    cout<<"Enter the number of vertices:";
    cin>>v;
    cout<<"Enter the number of edges:";
    cin>>e;

    cout<<"Enter the edges and weight:\n";
    for(int i=0;i<e;i++)
    {
        int u,v,w;
        cin>>u>>v>>w;
        adj_list[u].push_back({v,w});
        adj_list[v].push_back({u,w});
    
    }

    int src;
    cout<<"Enter a source:";
    cin>>src;

    dijkstra(src,v);

    for(int i=0;i<v;i++)
    {
        cout<<i<<" th node, distance:  "<<d[i]<<endl;
        
    }


    return 0;
}

/*
v=6;
e=9;
0 1 2
0 3 8
1 3 5
1 4 6
3 4 3
3 5 2
4 5 1
4 2 9
5 2 3

*/


/*
overall time complexity
O(v)+O(log v)+ O(ElogE)+O(ElogE)
-> O(ElogE)
for dense graph E=v^2

-> O(Elog v^2)
->O(2Elog V)
->O(|E| log |V|)






*/