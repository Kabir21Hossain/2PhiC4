#include<bits/stdc++.h>
using namespace std;
int main()
{
    int nodes,edges;
    cin>>nodes>>edges;
    int adj_mat[nodes][nodes]={0};
    for(int i=0;i<edges;i++)
    {
        int u,v;
        cin>>u>>v;
        adj_mat[u][v]=1;
        adj_mat[v][u]=1;

    }

    vector<int>adj_list[nodes];
    for(int i=0;i<nodes;i++)
    {
        for(int j=0;j<nodes;j++)
        {
            if(adj_mat[i][j]==1)
            {
                adj_list[i].push_back(j);

            }
        }
    }


    cout<<endl;
    for(int i=0;i<nodes;i++)
    {
        cout<<i<<"-->";
        for(int j=0;j<adj_list[i].size();j++)
        {
            cout<<adj_list[i][j]<<" ";

        }
        cout<<endl;

    }



   return 0;
}