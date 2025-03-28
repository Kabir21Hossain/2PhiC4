#include<bits/stdc++.h>
using namespace std;
const int Mx = 100;
int depth[Mx];
int st[Mx],fin[Mx],t=0;
vector<int>G[Mx];
int parent[Mx][20];

void dfs(int u)
{
    st[u]=++t;
    for(auto x : G[u])
    {
        if(st[x]==0)
        {
            depth[x]=depth[u]+1;
            parent[x][0]=u;
            dfs(x);
        }
    }
    fin[u]=++t;

}

void sparseTable(int n)
{
    int j=1;
    while(pow(2,j)<n)
    {
        for(int i=1;i<=n;i++)
        {
            if(parent[i][j-1]!=0)
            {
                parent[i][j]=parent[parent[i][j-1]][j-1];
            }
        }
        j++;
    }
}

int LCA(int u,int v)
{
    if(depth[u]>depth[v])
    {
        swap(u,v);
    }
    int j=log2(depth[v]);
    while(depth[u]!=depth[v])
    {
        int pv=parent[v][j];
        if(depth[pv]>=depth[u])
        {
            v=pv;
        }
        j--;
    }
    j=log2(depth[v]);
    if(u==v)
    {
        return u;
    }
    while(j>=0)
    {
        int pu=parent[u][j];
        int pv=parent[v][j];
        if(pu!=pv)
        {
            u=pu,v=pv;
        }
        j--;
    }
    return parent[u][0];
}
int main()
{
    int n,q;
    cout<<"Enter the number of nodes and queries : ";
    cin>>n>>q;
    cout<<"\nEnter the tree : ";
    for(int i=0;i<n-1;i++)
    {
        int x,y;
        cin>>x>>y;
        G[x].push_back(y);
        G[y].push_back(x);
    }
    dfs(1);
    sparseTable(n);
    cout<<endl;
    while(q--)
    {

        int u,v;
        cout<<"\nEnter the value of two nodes for LCA : ";
        cin>>u>>v;
        cout<<"LCA = "<<LCA(u,v)<<endl;
    }
}
/*
8 3

1 2
2 3
3 4
3 5
2 6
6 7
7 8

8 4
8 6
2 3
*/





