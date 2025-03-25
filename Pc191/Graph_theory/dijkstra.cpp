// #include<bits/stdc++.h>
// using namespace std;
// const int N=1e5;
// const int INF=1e5;
// vector<pair<int,int>>adj_list[N];
// int d[N];
// int visited[N];


// void Dijkstra(int src,int nodes)
// {
//     for(int i=0;i<N;i++)
//     {
//         d[i]=INF;

//     }

//     d[src]=0;

//     for(int i=0;i<nodes;i++)
//     {
//         int selected_node=-1;
//         for(int j=0;j<nodes;j++)
//         {
//             if(visited[j]==1)continue;

//             if( selected_node==-1||d[selected_node]>d[j])
//             {
//                 selected_node=j;
//             }
//         }
//         visited[selected_node]=1;

//         for( pair<int,int> x:adj_list[selected_node])
//         {
//             int adj=x.first;
//             int edge_cost=x.second;

//             if(visited[adj]==0)
//             {
//                 if(d[selected_node]+edge_cost<d[adj])
//                     {
//                         d[adj]=d[selected_node]+edge_cost;

//                     }
//             }

//         }
//     }



// }

// int main()
// {
//     int nodes,edges;
//     cout<<"Enter the number of nodes:";
//     cin>>nodes;

//     cout<<"Enter the number of edges:";
//     cin>>edges;

//     cout<<"Enter the edges and weight:\n";

//     for(int i=0;i<edges;i++)
//     {
//         int u,v,w;
//         cin>>u>>v>>w;
//         adj_list[u].push_back({v,w});
//         adj_list[v].push_back({u,w});

//     }

//     int src;
//     cout<<"Enter the source:";
//     cin>>src;

//     Dijkstra(src,nodes);

//     for(int i=0;i<nodes;i++)
//     {
//         cout<<i<<"shortest distance: "<<d[i]<<endl;

//     }





//     return 0;
// }


//dijkstra for once more

// #include<bits/stdc++.h>
// using namespace std;
// const int N=1e5;
// vector<pair<int,int>>adj_list[N];
// int visited[N];
// int d[N];
// const int INF=1e9;

// void Dijkstra(int src,int nodes)
// {
//     for(int i=0;i<nodes;i++)
//     {
//         d[i]=INF;
//     }

//     d[src]=0;

//     for(int i=0;i<nodes;i++)
//     {
//         int selected_node=-1;

//         for(int j=0;j<nodes;j++)
//         {
//             if(visited[j]==1)continue;
//             if(selected_node==-1 || d[selected_node]>d[j])
//             {
//                 selected_node=j;
//             }

            
//         }
//         visited[selected_node]=1;

//             for(pair<int,int> x: adj_list[selected_node])
//             {
//                 int adj=x.first;
//                 int edge_cost=x.second;

//                 if(visited[adj]==0)
//                 {
//                     if(d[selected_node]+edge_cost<d[adj])
//                     {
//                         d[adj]=d[selected_node]+edge_cost;

//                     }
//                 }
//             }
//     }
// }
// int main()
// {
//     int v,e;
//     cout<<"Enter the number of nodes:";
//     cin>>v;
//     cout<<"Enter the number of edges:";
//     cin>>e;

//     cout<<"Enter the number of edges and weight:\n";
//     for(int i=0;i<e;i++)
//     {
//         int u,v,w;
//         cin>>u>>v>>w;

//         adj_list[u].push_back({v,w});
//         adj_list[v].push_back({u,w});
    
//     }

//     int src;
//     cout<<"Enter the source:";
//     cin>>src;

//     Dijkstra(src,v);

//     for(int i=0;i<v;i++)
//     {
//         cout<<i<<" th node:"<<d[i]<<endl;

//     }



//     return 0;
// }

#include<iostream>
#include<vector>
using namespace std;
const int N=1e5;
const int INF=1e9;
int d[N];
int visited[N];
vector<pair<int,int>>adj_list[N];

void dijkstra(int src,int nodes)
{
    for(int i=0;i<nodes;i++)
        d[i]=INF;
    d[src]=0;

    for(int i=0;i<nodes;i++)
    {
        int selected_node=-1;

        for(int j=0;j<nodes;j++)
        {
            if(!visited[j] && (d[selected_node]>d[j]))
                selected_node=j;

        }

        visited[selected_node]=1;

        for(auto it:adj_list[selected_node])
        {
            pair<int,int>p=it;

            int adj_node=it.first;
            int edge_cost=it.second;

            if(!visited[adj_node] &&(d[selected_node]+edge_cost<d[adj_node]))
                d[adj_node]=d[selected_node]+edge_cost;
                
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
        cin>>u>>v>>w;
        adj_list[u].push_back({v,w});
        adj_list[v].push_back({u,w});
    
    }

    int src;
    cout<<"Enter a source:";
    cin>>src;

    dijkstra(src,v);

    for(int i=0;i<v;i++)
    {
        cout<<i<<" th node, distance:  "<<d[i]<<endl;
        
    }


    return 0;
}


/*
v=6;
e=9;
0 1 2
0 3 8
1 3 5
1 4 6
3 4 3
3 5 2
4 5 1
4 2 9
5 2 3

*/