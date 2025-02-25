#include<bits/stdc++.h>
using namespace std;
const int N=1e5;
int visited[N];
vector<int>adj_list[N];
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
       

        for(int x:adj_list[head])
        {
            if(visited[x]==0)
            {
                q.push(x);
                visited[x]=1;


            }
        }


    }
}

int main()
{
    memset(visited,0,sizeof(visited));

    int nodes,edges;
    cout<<" Enter number of nodes and edges\n";
    cin>>nodes>>edges;

    for(int i=0;i<edges;i++)
    {
        int u,v;
        cin>>u>>v;
        adj_list[u].push_back(v);
        adj_list[v].push_back(u);
        
    }

    int src=0;
    bfs(src);






   return 0;
}