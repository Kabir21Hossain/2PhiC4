#include<bits/stdc++.h>
using namespace std;
vector<vector<pair<int,int>>>adj_list;
vector<bool>visited;

int prims_algo(){
    priority_queue< pair<int,int> , vector < pair<int,int> >, greater< pair<int,int> > >pq;
    pq.push({0,0});

    int sum=0;

    while(!pq.empty()){

        pair<int,int>p=pq.top();
        pq.pop();

        sum+=p.first;
        
        int u= p.second;

        visited[u]=true;

        for(auto it : adj_list[u]){

            int v= it.first;
            int w= it.second;

            pq.push({w,v});


        }

    }



return sum;

}
int main()
{
    int v,e;
    cin >> v >> e;

    adj_list.assign(v,vector<pair<int,int>>());
    visited.assign(v,false);


    for( int i = 0 ; i < e; i++){
        int u,v,w;
        cin>>u>>v>>w;
        adj_list[u].push_back({v,w});
        adj_list[v].push_back({u,w});

    }

    int x= prims_algo();

    cout<<"Total cost:"<<x<<endl;

   return 0;
}