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
undirected and unweighted

O(1)+O(n*n)+O(1)+O(n*n)=O(n*n);

max number of edge in a graph= n*n
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int nodes=4;          // space complexity= O(1);

    int graph[nodes][nodes];   // space complexity= O(n*n)

    for(int i=0;i<nodes;i++)            // O(n*n)
    {
        for(int j=0;j<nodes;j++)
        {
            graph[i][j]=0;
        }
    }
    graph[0][1]=1; // O(2e)=O(e) --- worst case -> O(n*n)
    graph[1][0]=1;
    graph[1][2]=1;
    graph[1][3]=1;
    graph[2][1]=1;
    graph[2][3]=1;
    graph[3][2]=1;
    graph[3][1]=1;
    
    for(int i=0;i<4;i++)            // O(n*n)
    {
        for(int j=0;j<4;j++)
        {
            cout<<graph[i][j]<<" ";
        }
        cout<<endl;
    }


//     int nodes;
//   cout<<" Enter number of nodes\n";
//   cin>>nodes;
//   int graph[nodes][nodes]={};
//   for(int i=0;i<8;i++)
//   {
//       int a,b;
//       cin>>a>>b;
//       graph[a][b]=1;
//       graph[b][a]=1;

//   }

//   for(int i=0;i<nodes;i++)
//   {
//    for(int j=0;j<nodes;j++)
//    {
//       cout<<graph[i][j]<<" ";

//    }
//    cout<<endl;
   
//   }



    
   return 0;
}

