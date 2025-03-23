// #include<bits/stdc++.h>
// using namespace std;
// const int N=1e5;
// vector<int>adj_list[N];
// int visited[N];
// int parent[N];

// void bfs(int s,int d)
// {
//     queue<int>q;
//     q.push(s);
//     visited[s]=1;
//     while(!q.empty())
//     {
//         int head=q.front();
//         q.pop();
//         for(int x:adj_list[head])
//         {
//             if(visited[x]==0)
//             {
//                 q.push(x);
//                 visited[x]=1;
//                 parent[x]=head;
//             }
//             // if(x==d)
//             // {
//             //     break;

//             // }
//         }

//     }

       
// }

// void path_printing(int d,stack<int>&st )
// {
//     if(d==-1)
//     return;

//     st.push(d);
//     d=parent[d];
//     path_printing(d,st);

// }

// int main()
// {
//     memset(visited,0,sizeof(visited));
//     memset(parent,-1,sizeof(parent));

//     stack<int>st;
    
//     int e,v;
//     cout<<"Enter the number of vertices:";
//     cin>>v;
//     cout<<"Enter the number of edges:";
//     cin>>e;

//     for(int i=0;i<e;i++)
//     {
//         int u,v;
//         cin>>u>>v;

//         adj_list[u].push_back(v);
//         adj_list[v].push_back(u);

//     }


//     int src,dst;
//     cout<<"Enter the source and destinition:";

//     cin>>src>>dst;

//     bfs(src,dst);

//     path_printing(dst,st);

//     while(!st.empty())
//     {
//         cout<<st.top()<<" ";
//         st.pop();

//     }




//     return 0;
// }



#include<bits/stdc++.h>
using namespace std;
const int N=1e5;
vector<int>adj_list[N];
int visited[N];
int parent[N];

void bfs(int s,int d)
{
    queue<int>q;
    q.push(s);
    visited[s]=1;
    while(!q.empty())
    {
        int head=q.front();
        q.pop();
        if(head==d) break;

        for(int x:adj_list[head])
        {
            if(visited[x]==0)
            {
                q.push(x);
                visited[x]=1;
                parent[x]=head;

            }
        }
        

    }

}

vector<int> path_printing(int d)
{
    vector<int>path;
    if(d==-1)
    {
        cout<<"No path found\n";
        return path;
    }

    while(d!=-1)
    {
        path.push_back(d);
        d=parent[d];

    }

    reverse(path.begin(),path.end());
    return path;
}

int main()
{
    memset(visited,0,sizeof(visited));
    memset(parent,-1,sizeof(parent));

    int v,e;
    cout<<"Enter the number of edges:";
    cin>>e;
    cout<<"Enter the number of vertices:";
    cin>>v;

    cout<<"Enter the edges:\n";

    for(int i=0;i<e;i++)
    {
        int u,v;
        cin>>u>>v;

        adj_list[u].push_back(v);
        adj_list[v].push_back(u);
    }

    int src,dst;
    cout<<"Enter the source and destination:";
    cin>>src>>dst;

    bfs(src,dst);

    vector<int>path=path_printing(dst);
    for(int node:path)
    {
        cout<<node<<" ";
        
    }




    return 0;
}