//Rewrite BFS in C++ but this time use an adjacency matrix as graph representation instead of adjacency list. Analyse the time and space complexity.

#include<bits/stdc++.h>
using namespace std;
const int N=50;
int visited[N];
int adj_mat[N][N];
int node;

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


        for(int i=0;i<node;i++)
        {
            if(adj_mat[head][i]==1 && visited[i]==0)
            {
                q.push(i);
                visited[i]=1;


            }
        }
        
    }
}


int main()
{
    memset(visited,0,sizeof(visited));

    int edges;
    cout<<"enter number of nodes and edges:";
    cin>>node>>edges;
    
    for(int i=0;i<edges;i++)
    {
        int u,v;
        cin>>u>>v;
        adj_mat[u][v]=1;
        adj_mat[v][u]=1;
    }

    int src=0;
    bfs(src);







   return 0;
}