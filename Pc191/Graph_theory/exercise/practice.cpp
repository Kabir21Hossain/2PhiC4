// #include<bits/stdc++.h>
// using namespace std;
// const int N=1e5;
// vector<int>adj_list[N];
// int visited[N];

// void bfs(int s)
// {
//     queue<int>q;
//     q.push(s);
//     visited[s]=1;
//     while(!q.empty())
//     {
//         int head=q.front();
//         q.pop();

//         cout<<head<<" ";
//         for(int x:adj_list[head])
//         {
//             if(visited[x]==0)
//             {
//                 q.push(x);
//                 visited[x]=1;
//             }
//         }
//     }
// }

// int main()
// {
//     memset(visited,0,sizeof(visited));
//     int nodes,edges;
//     cout<<" Enter the number of nodes:\n";
//     cin>>nodes;
//     cout<<" Enter the number of edges:\n";
//     cin>>edges;
//     cout<<" Enter edges:\n";

//     for(int i=0;i<edges;i++)
//     {
//         int u,v;
//         cin>>u>>v;
//         adj_list[u].push_back(v);
//         adj_list[v].push_back(u);
        
//     }


//     int src;
//     cout<<" Enter the source:";
//     cin>>src;

//     bfs(src);


    
//    return 0;
// }


#include<bits/stdc++.h>
using namespace std;
const int N=1e5;
vector<int>adj_list[N];
int visited[N];

void dfs(int s)
{
    cout<<s<<" ";
    visited[s]=1;
    for(int x:adj_list[s])
    {
        if(visited[x]==0)
        dfs(x);

    }
}


int main()
{
    int nodes,edges;
    cout<<"Enter the number of nodes:\n";
    cin>>nodes;
    cout<<"Enter the number of edges:\n";
    cin>>edges;
    
    cout<<"Enter the edges:\n";
    for(int i=0;i<edges;i++)
    {
        int u,v;
        cin>>u>>v;
        adj_list[u].push_back(v);
        adj_list[v].push_back(u);

    }

    int src;
    cout<<"Enter you source\n";
    cin>>src;
    dfs(src);


   return 0;
}


