#include<iostream>
#include<vector>
#include<queue>
#include<cstring>
using namespace std;
const int N=1e5;
vector<int>adj_list[N];
int outdeg[N];
int indeg[N];
int visited[N];

void dfs(int s)
{
   
    visited[s]=1;

    for(int x:adj_list[s])
    {
       indeg[x]++;
       if(!visited[x])
        dfs(x);

    }

}


int main()
{
    memset(indeg,0,sizeof(indeg));
    int v,e;
    cin>>v>>e;

    for(int i=0;i<e;i++)
    {
        int u,v;
        cin>>u>>v;
        adj_list[u].push_back(v);
        
    }

    for (int i=1;i<=v;i++)
    {
        outdeg[i]=adj_list[i].size();

    }


    dfs(1);


    for(int i=1;i<=v;i++)
    {
        cout<<i<<" th node: indeg: "<<indeg[i]<<" \n";

    }

    for(int i=1;i<=v;i++)
    {
        cout<<i<<" th node: outdeg: "<<outdeg[i]<<" \n";

    }


    return 0;

}