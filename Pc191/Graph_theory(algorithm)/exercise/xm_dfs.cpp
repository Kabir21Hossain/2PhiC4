#include<bits/stdc++.h>
using namespace std;
const int N=1e5;
vector<int>adj_list[N];
int visited[N];

void dfs(int s)
{
    cout<<s<<" ";
    visited[s]=1;

    for(int adj_node: adj_list[s])
    {
        if(visited[adj_node]==0)
        dfs(adj_node);
        
    }
}

int main()
{
    int nodes,edges,src;
    cout<<" Enter number nodes and edges:";
    cin>>nodes>>edges;

    memset(visited,0,sizeof(visited));
    cout<<"Enter edges:\n";

    for(int i=0;i<edges;i++)
    {
        int u,v;
        cin>>u>>v;
        adj_list[u].push_back(v);
        adj_list[v].push_back(u); 

    }

    cout<<"Enter a source:";
    cin>>src;
    dfs(src);



   return 0;
}