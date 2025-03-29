#include<bits/stdc++.h>
using namespace std;
const int N=1e5;
int visited[N];
int level[N];

void bfs(vector<vector<int>>&graph,int src)
{
    queue<int>q;
    q.push(src);
    level[src]=0;
    visited[src]=1;
    while(!q.empty())
    {
        int head=q.front();
        q.pop();
        for(int x:graph[head])
        {
            if(visited[x]==0)
            {
                q.push(x);
                visited[x]=1;
                level[x]=level[head]+1;

            }
        }

    }


}
int main()
{
    int nodes,edges,src;
    memset(visited,0,sizeof(visited));
    memset(level,0,sizeof(level));

    vector<vector<int>>adj_list(N);

    cout<<"Enter the number of nodes:";
    cin>>nodes;
    cout<<"Enter the number of edges:";
    cin>>edges;

    cout<<" Enter edges:\n";
    for(int i=0;i<edges;i++)
    {
        int u,v;
        cin>>u>>v;
        adj_list[u].push_back(v);
        
        
    }

    cout<<"Enter your source:";
    cin>>src;

    level[src]=0;
    bfs(adj_list,src);

    for(int i=0;i<nodes;i++)
    {
        cout<<i<<" -level->>"<<level[i]<<endl;

    }






    return 0;
}