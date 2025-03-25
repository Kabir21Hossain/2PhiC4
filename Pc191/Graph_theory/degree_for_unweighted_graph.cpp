#include<iostream>
#include<vector>
#include<queue>
using namespace std;
const int N=1e5;
const int INF=1e9;
int d[N];
int visited[N];
vector<int>adj_list[N];
int degree[N];



void bfs(int src)
{
    queue<int>q;
    q.push(src);
    visited[src]=1;
    while(!q.empty())
    {
        int head=q.front();
        q.pop();

        for(int x: adj_list[head])
        {
            degree[head]++;
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
    int v,e;
    cout<<"Enter the number of vertices:";
    cin>>v;
    cout<<"Enter the number of edges:";
    cin>>e;

    cout<<"Enter the edges and weight:\n";
    for(int i=0;i<e;i++)
    {
        int u,v,w;
        cin>>u>>v;
        adj_list[u].push_back(v);
        adj_list[v].push_back(u);
    
    }
    bfs(0);

    for(int i=0;i<v;i++)
    {
        cout<<i<<" th node: degree: "<<degree[i]<<" \n";

    }
    

    
    


    return 0;
}

/*




*/