#include<bits/stdc++.h>
using namespace std;
int main()
{
    // adjacency matrix unweighted graph
    // int nodes=8;

    // int adj_matrix[nodes][nodes];
    // for(int i=0;i<nodes;i++)
    // {
    //     for(int j=0;j<nodes;j++)
    //     {
    //         adj_matrix[i][j]=0;

    //     }
    // }

    // adj_matrix[0][1]=1;
    // adj_matrix[0][2]=1;
    // adj_matrix[0][5]=1;
    // adj_matrix[0][7]=1;
    // adj_matrix[3][1]=1;
    // adj_matrix[3][1]=1;
    // adj_matrix[2][1]=1;

    // for(int i=0;i<nodes;i++)
    // {
    //     for(int j=0;j<nodes;j++)
    //     {
    //        cout<< adj_matrix[i][j]<<" ";

    //     }
    //     cout<<endl;

    // }

    // weighted graph
    //  int nodes=8;

    // int adj_matrix[nodes][nodes];
    // for(int i=0;i<nodes;i++)
    // {
    //     for(int j=0;j<nodes;j++)
    //     {
    //         adj_matrix[i][j]=0;

    //     }
    // }

    // adj_matrix[0][1]=5;
    // adj_matrix[0][2]=10;
    // adj_matrix[0][5]=30;
    // adj_matrix[0][7]=2;
    // adj_matrix[3][1]=100;
    // adj_matrix[3][1]=90;
    // adj_matrix[2][1]=47;

    // for(int i=0;i<nodes;i++)
    // {
    //     for(int j=0;j<nodes;j++)
    //     {
    //        cout<< adj_matrix[i][j]<<" ";

    //     }
    //     cout<<endl;

    // }


    // adjacency list and unweighted

    int nodes=4;
    // vector<int>adj_list[nodes];
    // adj_list[0]={1,2,3};
    // adj_list[1]={3,2,0};
    // adj_list[2]={1,2};
    // adj_list[3]={1,0};
    //adj_list[2].push_back(3);

    
    // for(int i=0;i<nodes;i++)
    // {
    //     cout<<i<<"->";
    //     for(int j=0;j<adj_list[i].size();j++)
    //     {
    //         cout<<adj_list[i][j]<<" ";

    //     }
    //     cout<<endl;
    // }



    // weighted graph

    // vector<pair<int,int>>adj_list[nodes];
    
    // adj_list[0].push_back({1,7});
    // adj_list[0]={{3,90}};
    // adj_list[1]={{2,67},{3,10},{0,8}};
    // adj_list[2]={{1,90}};
    // adj_list[3]={{0,30},{1,45}};

    // for(int i=0;i<nodes;i++)
    // {
    //     cout<<i<<"->";
    //     for(int j=0;j<adj_list[i].size();j++)
    //     {
    //         cout<<"("<<adj_list[i][j].first<<" "<<adj_list[i][j].second<<") " ;
    //     }
    //     cout<<endl;
    // }

    // edge list unweighted

    // vector<vector<int>>edge_list;

    // edge_list.push_back({1,3});
    // edge_list.push_back({0,4});
    // edge_list.push_back({1,2});
    // edge_list.push_back({1,1});
    // edge_list.push_back({2,2});
    // edge_list.push_back({2,3});
    // edge_list.push_back({2,1});
    // edge_list.push_back({1,3});

    // for(int i=0;i<edge_list.size();i++)
    // {
    //     cout<<edge_list[i][0]<<" "<<edge_list[i][1]<<" "<<endl;
        
    // }

    // weighted graph

    vector<vector<int>>edge_list;

    edge_list.push_back({1,3,11});
    edge_list.push_back({0,4,13});
    edge_list.push_back({1,2,8});
    edge_list.push_back({1,1,4});
    edge_list.push_back({2,2,0});
    edge_list.push_back({2,3,1});
    edge_list.push_back({2,1,8});
    edge_list.push_back({1,3,8});

    for(int i=0;i<edge_list.size();i++)
    {
        cout<<edge_list[i][0]<<" "<<edge_list[i][1]<<" | weight: "<<edge_list[i][2]<<endl;
        
    }










    return 0;
}