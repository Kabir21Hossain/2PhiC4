#include<bits/stdc++.h>
using namespace std;

const int N=1e5;
const int INF=1e9;
vector<pair<int,int>>adj_list[N];
int d[N];
int parent[N];

int main()
{
    int v,e;
    bool negative_cycle=false;
    int last_node=-1;
    int first_node=-1;

    cin>>v>>e;
    for(int i=0;i<e;i++)
    {
        int u,v,w;
        cin>>u>>v>>w;
        adj_list[u].push_back({v,w});

    }

    for(int i=1;i<=v;i++)
    {
        d[i]=INF;
        parent[i]=-1;
    }
    d[1]=0;

    for(int i=1;i<v;i++)
    {
        for(int node=1;node<=v;node++)
        {
            for(auto it:adj_list[node])
            {
                int u=node;
                int v=it.first;
                int w=it.second;
                if(d[u]!=INF && d[u]+w< d[v])
                {
                    d[v]=d[u]+w;
                    parent[v]=u;
                }
            }
        }
    }

    // cycle detection

    for(int i=1;i<=v;i++)
    {
        for(auto it:adj_list[i])
        {
            int u=i;
            int v=it.first;
            int w=it.second;

            if(d[u]!=INF && d[u] + w < d[v])
            {
                negative_cycle=true;
                break;
                
            }
        }
    }


    if(negative_cycle){

        cout<<"There is negative cycle\n";
        cout<<"negative cycle: ";
    
// last updated_node

for(int i=1;i<=v;i++)
    {
        for(auto it:adj_list[i])
        {
            int u=i;
            int v=it.first;
            int w=it.second;

            if(d[u]!=INF && d[u] + w < d[v])
            {
                last_node=v;
                
            }
        }
    }


    for(int i=1;i<v-1;i++)
    {
      
        last_node=parent[last_node];
    }


    first_node=last_node;

    vector<int>path;

    path.push_back(first_node);
    while(true)
    {
        first_node=parent[first_node];
        path.push_back(first_node);
        if(first_node==last_node)
        break;
        
    }

    reverse(path.begin(),path.end());

        for(int i=0;i<path.size();i++)
        {
            cout<<path[i]<<" ";

        }
        cout<<endl;


    }

    else 
    {
        cout<<"There is no negative cycle\n";
    }


    for(int i=1;i<=v;i++)
    {
        cout<<i<<" th node distance from source: "<<d[i]<<endl;

    }





    return 0;
}