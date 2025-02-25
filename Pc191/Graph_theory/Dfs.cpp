#include<bits/stdc++.h>
using namespace std;
const int N=1e5;
vector<int>graph[N];
int visited[N];
void dfs(int node)
{
    cout<<node<<" ";
    visited[node]=1;

    for(int x:graph[node])
    {
        if(visited[x]==0)
        
            dfs(x);

    }
}

int main()
{
    memset(visited,0,sizeof(visited));

    int nodes,edge;
    cin>>nodes>>edge;

    for(int i=0;i<edge;i++)
    {
        int u,v;
        cin>>u>>v;
        graph[u].push_back(v);
        graph[v].push_back(u);

    }

    int src=1;

    dfs(src);

   return 0;
}