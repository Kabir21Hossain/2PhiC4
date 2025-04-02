#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
vector<vector<int>>adj_list;
vector<pair<int,int>>bridges;
vector<bool>visited;
vector<int>low,dis;
int time_counter=0;


void dfs(int u, int parent){

    visited[u]=true;
    dis[u]=low[u]=time_counter++;

    for(int v: adj_list[u]){

        if(v==parent) continue;
        
        if( visited[v]){

           low[u]= min(low[u], dis[v]);
        }
        else {
            dfs(v,u);
            low[u]= min(low[u],low[v]);

            if(low[v] > dis[u])
            {
                bridges.push_back({u,v});

            }


        }


    }
    
}

void find_bridges(int n){
    visited.resize(n);
    visited.assign(n,false);
    low.assign(n,-1);
    dis.assign(n,-1);

    for(int i = 0 ; i < n ; i++){

        if(!visited[i]){

            dfs(i,-1);
        }
    }
    
}

int main(){

    int v,e;
    cin >> v >> e;



    for(int i =0 ; i < e ; i++){

        int u,v;

        cin>>u>>v;

        adj_list.assign(v,vector<int>());

        adj_list[u].push_back(v);
        adj_list[v].push_back(u);

    }
    find_bridges(v);

    cout<<" Bridges are:\n";

    for( pair<int,int>p : bridges){
        
        cout<< p.first<< " "<< p.second<<"\n";

    }


    return 0;
}