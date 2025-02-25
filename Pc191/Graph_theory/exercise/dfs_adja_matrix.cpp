#include<bits/stdc++.h>
using namespace std;
const int N=50;
int cnt[N];
int node;
int visited[N];
int adj_mat[N][N]={0};

void dfs(int s)
{
    cout<<s<<" ";
    visited[s]=1;

    for(int i=0;i<node;i++)
    {
        if(adj_mat[s][i]==1)
        {
            cnt[i]++;
            if(visited[i]==0)
            dfs(i);

        }


    }

}

int main()
{
    memset(visited,0,sizeof(visited));
    memset(cnt,0,sizeof(cnt));


    int edges;
    cout<<"Enter the number of nodes and edges:";
    cin>>node>>edges;

    for(int i=0;i<edges;i++)
    {
        int u,v;
        cin>>u>>v;
        adj_mat[u][v]=1;
        adj_mat[v][u]=1;
    }

    int src=4;
    dfs(src);
    cout<<endl;
    cout<<" count function:";
    for(int i=0;i<node;i++)
    {   
        cout<<"node i:"<<i<<"-->"<<cnt[i]<<endl;


    }



   return 0;
}