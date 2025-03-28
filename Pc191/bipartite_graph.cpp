#include<bits/stdc++.h>
using namespace std;
const int N=1e5;
int visited[N];
int colors[N];

bool dfs(int src,int current_color,vector<vector<int>>&graph)
{
    visited[src]=1;
    colors[src]=current_color;
    for(int x: graph[src])
    {
        if(colors[x]==current_color)
        {
            return false;
        }

        if(visited[x]==0)
        {
            if(!dfs(x,1-current_color,graph))
            {
                return false;
            }
        }
    }

    return true;
    
}

int main()
{
    memset(colors,-1,sizeof(colors));
    memset(visited,0,sizeof(visited));

    vector<vector<int>>adj_list(N);
    int nodes,edges,src;
    cout<<" Enter number of nodes:";
    cin>>nodes;
    cout<<" Enter number of edges:";
    cin>>edges;

    cout<<" Enter edges:\n";
    for(int i=0;i<edges;i++)
    {
        int u,v;
        cin>>u>>v;
        adj_list[u].push_back(v);
        adj_list[v].push_back(u);

    }

        cout<<" Enter the source:";
        cin>>src;
        
        for(int i=0;i<nodes;i++)
        {
            if(visited[i]==0)
            {
                if(!dfs(src,0,adj_list))
                {
                    cout<<"It's not bipartite\n";
                    return 0;
                }
            }
        }

        cout<<" It's Bipartite\n";




    

    // for(int i=0;i<nodes;i++)
    // {
    //     cout<<i<<"->";
    //     for(int j=0;j<adj_list[i].size();j++)
    //     {
    //         cout<<adj_list[i][j]<<" ";

    //     }
    //     cout<<endl;

    // }



   return 0;
}