#include<bits/stdc++.h>
using namespace std;
const int N=1e5;
vector<int>adj_list[N];
int visited[N];

void bfs(int s)
{
    queue<int>q;
    q.push(s);
    visited[s]=1;

    while(!q.empty())
    {
        int head=q.front();
        q.pop();
        cout<<head<<" ";
        for(int adj_node:adj_list[head])
        {
            if(visited[adj_node]==0)
            {
                q.push(adj_node);
                visited[adj_node]=1;
                
            }
        }
    }
}

int main()
{
    memset(visited,0,sizeof(visited));

    int nodes,edges,src;
    cout<<"Enter number of nodes and Edges:";
    cin>>nodes>>edges;

    // enter elements in your list

    for(int i=0;i<edges;i++)
    {
        int u,v;
        cin>>u>>v;

        adj_list[u].push_back(v);
        adj_list[v].push_back(u);

    }
    cout<<" Enter a source:";
    cin>>src;

    
    bfs(src);



    
   return 0;
}