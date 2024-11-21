#include<bits/stdc++.h>
using namespace std;
int main()
{
    int v,e;
    cin>>v>>e;
    int adjacency_matrix[v+1][v+1];
    memset(adjacency_matrix,0,sizeof(adjacency_matrix));
    while(e--)
    {
        int r,c;
        cin>>r>>c;
        adjacency_matrix[r][c]=1;
        adjacency_matrix[c][r]=1;
    }


    for(int i=1;i<=v;i++)
    {
        for(int j=1;j<=v;j++)
        {
            cout<<adjacency_matrix[i][j]<<" ";

        }
        cout<<endl;
    }
   return 0;
}