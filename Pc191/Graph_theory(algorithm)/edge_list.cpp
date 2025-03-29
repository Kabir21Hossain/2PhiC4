#include<bits/stdc++.h>
using namespace std;
int main()
{
    
    // unweighted graph
    // int nodes=4;

    // vector<vector<int>>edge_list;
    // edge_list.push_back({0,1});
    // edge_list.push_back({1,2});
    // edge_list.push_back({1,3});
    // edge_list.push_back({2,3});

    // for(int i=0;i<edge_list.size();i++)
    // {
    //     cout<<edge_list[i][0]<<" "<<edge_list[i][1]<<endl;


    // }


    // weighted graph
    vector<vector<int>>edge_list={
        
        {1,3,2},
        {2,4,10},
        {1,4,7},
        {4,2,90},
        {2,3,100}

    };

    for(int i=0;i<edge_list.size();i++)
    {
        cout<<edge_list[i][0]<<" "<<edge_list[i][1]<<"| "<<edge_list[i][2]<<endl;
        
    }
    
    

   return 0;
}