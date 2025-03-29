/*
4 5
1 3
2 1
2 4
3 2
3 4

visited[x]=0  univisited
visited[x]=1 paused
visited[x]=2 done

*/

#include<bits/stdc++.h>
using namespace std;
const int N=2e5;
int visited[N];
vector<int>adj_list[N];

bool cycle_detect(int src)
{
    visited[src]=1;

    for(int x:adj_list[src])
    {
        if(visited[x]==0)
        {
            bool c=cycle_detect(x);
            if(c)
            {
                return true;
            }
        }

        else if(visited[x]==1)
        {
           
            return true;
        }
    }

    visited[src]=2;

    return false;

}
int main()
{
    int n,m;
    cin>>n>>m;
   

    for(int i=0;i<m;i++)
    {
        int u,v;
        cin>>u>>v;
        adj_list[u].push_back(v);
    }
    bool c=false;

    for(int i=1;i<=n;i++)
    {
      c=cycle_detect(i);
      if(c)
      {
        break;
      }

    }

    if(c)
    {
        cout<<" cycle exists\n";
       
    }

    else 
    cout<<"\ncycle don't exist\n";


    return 0;
}