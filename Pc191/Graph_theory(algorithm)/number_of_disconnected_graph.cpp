#include<bits/stdc++.h>
using namespace std;
const int N=1e5;
int visited[N];
int count=0;

void dfs(vector<vector<int>>&graph,int src)
{
    visited[src]=1;
    cout<<src<<" ";
    for(int x:graph[src])
    {
        if(visited[x]==0)
        {
            dfs(graph,x);

        }
    }

}


int main()
{
    int nodes,edges,src,count=0;

    memset(visited,0,sizeof(visited));
    vector<vector<int>>adj_list(N);

    cout<<"Enter the number of nodes:";
    cin>>nodes;

    cout<<"Enter the number of edges:";
    cin>>edges;

    cout<<"Enter edges:\n";
    for(int i=0;i<edges;i++)
    {
        int u,v;
        cin>>u>>v;
        adj_list[u].push_back(v);
        adj_list[v].push_back(u);
        
    }

    
    for(int i=1;i<nodes;i++)
    {
        if(visited[i]==0)
        {
            count++;
            dfs(adj_list,i);
            
        
        }

    }


    cout<<"\nTotal number of connected graphs:"<<count<<endl;
    
    


   return 0;
}