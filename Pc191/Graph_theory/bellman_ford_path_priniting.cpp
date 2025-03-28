/*
input- a directed weighted graph
output- distance array
n= number of nodes
m= number of edges
- create  a distance array and initialize it with infinity value
- create a parent array and initialize it with -1
- d[src]=1; //O(1)
- negative_cycle=false
- for i=1 to n-1: //O(n)
    - for all edge e(u,v,w)://O(m)
        if d[u]+w<d[v]
            d[v]=d[u]+w
            parent[v]=u


-for all edge e(u,v,w):
    if d[u] != INF and d[u]+w<d[v]:
        negative_cycle=true
        break  

- output the distance array
-take input of source and destination
- print the path


time complexity=
O(n*m)
for worst case, m=n*n

O(n*n^2)=O(n^3)

*/






#include<bits/stdc++.h>
using namespace std;
const int N=1e5 + 5;
vector<pair<int,int>>adj_list[N];
const int INF=1e9;
int d[N];
int parent[N];


void path_printing(int src,int dst)
{
    vector<int>path;
    path.push_back(dst);

    while(dst!=src)
    {
        dst=parent[dst];
        path.push_back(dst);

    }

    reverse(path.begin(),path.end());

    for(int i: path)
    {
        cout<<i<<"-> ";
    }


}


int main()
{
    int v,e;
    cin>>v>>e;


    for(int i=0;i<e;i++)
    {
        int u,v,w;
        cin>>u>>v>>w;
        adj_list[u].push_back({v,w});

    }


    for(int i=1;i<=v;i++){
        d[i]=INF;
        parent[i]=-1;
    }
       

  

    int src=1;
    d[src]=0;

    bool negative_cycle=false;



    for(int i=1;i<=v-1;i++)
    {
        for(int nodes = 1; nodes <= v; nodes++)
        {
            for(auto it:adj_list[nodes])
            {
                int u=nodes;
                int v=it.first;
                int w=it.second;

                if( d[u]!=INF && d[u]+w<d[v]){
                    d[v]=d[u]+w;
                    parent[v]=u;
                   
                }
                    

            }
        }
    }
    

    for(int i=1;i<=v;i++)
    {
        for(auto it: adj_list[i])
        {
            int u=i;
            int v=it.first;
            int w=it.second;
            if( d[u] != INF && d[u]+w<d[v]){
                negative_cycle=true;
                break;
                
            }
                 
        }
    }


    if (negative_cycle)
        cout<<"Negative cyclce exists\n";
    else cout<<"No negative cycle\n";
    for(int i=1;i<=v;i++)
    {
        if(d[i]==INF)
        {
            cout<<i<<" th node distance from source : INF"<<endl;
        }
        else 
           cout<<i<<" th node distance from source :"<< d[i]<<endl;
        

    }

    cout<<"Enter the destination:";
    int dest;
    cin>>dest;
    path_printing(src,dest);

    return 0;
}