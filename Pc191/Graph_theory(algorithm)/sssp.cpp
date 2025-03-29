// single source shortest path using bfs for unweighted graph

#include<bits/stdc++.h>
using namespace std;
const int N=1e5;
vector<int>adj_list[N];
int visited[N];
int level[N];

void bfs(int s)
{
    queue<int>q;
    q.push(s);
    visited[s]=1;
    while(!q.empty())
    {
        int head=q.front();
        q.pop();
        for(int x:adj_list[head])
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
    memset(visited,0,sizeof(visited));
    memset(level,0,sizeof(level));

    int n,e;
    cout<<"Enter number of nodes:";
    cin>>n;
    cout<<"Enter number of edges:";
    cin>>e;

    cout<<"Enter edges:\n";
    for(int i=0;i<e;i++)
    {
        int u,v;
        cin>>u>>v;
        adj_list[u].push_back(v);
        adj_list[v].push_back(u);

    }

    int src;
    cout<<" Enter the source:";
    cin>>src;

    bfs(src);

    for(int i=0;i<n;i++)
    {
        cout<<i<<"-->"<<level[i]<<endl;
        
    }




   return 0;
}

