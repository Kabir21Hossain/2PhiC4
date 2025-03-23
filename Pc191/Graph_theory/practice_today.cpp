#include<bits/stdc++.h>
using namespace std;
const int N=1e5;
vector<int>adj_list[N];
int visited[N];
stack<int>st;
enum{unvisited,selected,done};

void dfs(int s)
{
    visited[s]=selected;
    for(int x:adj_list[s])
    {
        if(visited[x]==unvisited)
        {
            dfs(x);
        }
        
    }
    st.push(s);
}



int main()
{

    memset(visited,0,sizeof(visited));

    int e,v;
    cout<<"Enter the number of vertices:";
    cin>>v;
    cout<<"Enter the number of edges:";
    cin>>e;

    cout<<"Enter the edges:";
    for(int i=0;i<e;i++)
    {
        int u,v;
        cin>>u>>v;

        adj_list[u].push_back(v);

    }

    for(int i=0;i<v;i++)
    {
        if(visited[i]==unvisited)
        dfs(i);

    }
  
    cout<<" topological sorting:\n";
    while(!st.empty())
    {
        cout<<st.top()<<" ";
        st.pop();

    }

   




    return 0;
}

