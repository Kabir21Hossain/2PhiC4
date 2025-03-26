#include<bits/stdc++.h>
using namespace std;
const int INF=1e9;



int main()
{
    int v,e;
    cin>>v>>e;
    int d[v+1][v+1];

    for(int i=1;i<=v;i++)
    {
        for(int j=1;j<=v;j++)
        {
            if(i==j)d[i][j]=0;
            else d[i][j]=INF;

        }
    }

    for(int i=1;i<=e;i++)
    {
        int u,v,w;
        cin>>u>>v>>w;

        d[u][v]=w;

    }


    for(int k=1;k<=v;k++)
    {
        for(int i=1;i<=v;i++)
        {
            for(int j=1;j<=v;j++)
            {
                d[i][j]=min(d[i][j],d[i][k]+d[k][j]);

            }
        }
    }



    for(int i=1;i<=v;i++)
    {
        for(int j=1;j<=v;j++)
        {
            if(d[i][j]==INF)cout<<-1<<" ";
           else  cout<<d[i][j]<<" ";
        }
        cout<<endl;

    }
    







    return 0;
}