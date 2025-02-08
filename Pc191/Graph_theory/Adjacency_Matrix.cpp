/*
Graph Representation
---------------------
---------------------

Topic: Adjacency Matrix

A---B
   / \
  c---D

  0---1
    /   \
   2-----3

total no. of nodes=4
matrix=4x4

*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int nodes=4;
    int graph[nodes][nodes];
    for(int i=0;i<nodes;i++)
    {
        for(int j=0;j<nodes;j++)
        {
            graph[i][j]=0;
        }
    }
    graph[0][1]=1;
    graph[1][0]=1;
    graph[1][2]=1;
    graph[1][3]=1;
    graph[2][1]=1;
    graph[2][3]=1;
    graph[3][2]=1;
    graph[3][1]=1;
    
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            cout<<graph[i][j]<<" ";
        }
        cout<<endl;
    }
    
   return 0;
}
