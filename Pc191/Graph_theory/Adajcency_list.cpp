#include<bits/stdc++.h>
using namespace std;
int main()
{

   //unweighted graph

   int nodes=4;
   vector<int>adj_list[nodes];
   adj_list[0]={1};
   adj_list[1]={0,2,3};
   adj_list[2]={1,3};
   adj_list[3]={2,1};

   for(int i=0;i<nodes;i++)
   {
      cout<<i<<"->";
      for(int j=0;j<adj_list[i].size();j++)
      {
         cout<<adj_list[i][j]<<" ";
      }
      cout<<endl;

   }



   // // weighted graph
   // int nodes=4;
   // vector<pair<int,int>>graph[nodes];
   // graph[0]={{1,5}};
   // graph[1]={{2,3}};
   // graph[3]={{2,1},{1,2}};
   // for(int i=0;i<nodes;i++)
   // { cout<<i<<"->";
   //    for(int j=0;j<graph[i].size();j++)
   //    {
   //       cout<<"("<<graph[i][j].first<<" "<<graph[i][j].second<<") ";
   //    }
   //    cout<<endl;
   // }


   return 0;
}