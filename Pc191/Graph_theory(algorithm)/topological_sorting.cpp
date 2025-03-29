#include<bits/stdc++.h>
using namespace std;
const int N=1e5;
vector<int>adj_list[N];
int visited[N];
stack<int>st;
bool is_cycle=false;

void dfs(int src)
{
    visited[src]=1;

    for(int x:adj_list[src])
    {
        if(visited[x]==0)
            dfs(x);

            if(visited[x]==1)
            {
                cout<<"Not DAG\n";
                is_cycle=true;
                return ;

            }

    }
    visited[src]=2;

    st.push(src);
}

int main()
{
    memset(visited,0,sizeof(visited));

    int nodes,edges,src;
    cout<<"Enter number of nodes:";
    cin>>nodes;
    cout<<"Enter the number of edges:";
    cin>>edges;
    
    cout<<"Enter edges:\n";
    for(int i=0;i<edges;i++)
    {
        int u,v;
        cin>>u>>v;
        adj_list[u].push_back(v);
        
    }

    for(int i=0;i<nodes;i++)
    {
        if(visited[i]==0)
            dfs(i);

    }

    // topological sorting
    if(is_cycle)
    return 0;

    while(!st.empty())
    {
        cout<<st.top()<<" ";
        st.pop();

    }


   return 0;
}