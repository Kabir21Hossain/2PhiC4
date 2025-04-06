#include<bits/stdc++.h>
using namespace std;

vector<int>parent,dsu_size;

class Edge{
    public:
        int u,v,w;
        Edge(int u, int v, int w){
            this -> u= u;
            this -> v= v;
            this -> w= w;

        }

        bool operator < ( Edge a){
            return w < a.w;

        }


};


void dsu_initialize( int n){
    parent.resize(n);
    dsu_size.resize(n);

    for( int i=0;i< n;i++){

        parent[i]=i;
        dsu_size[i]=1;


    }
}

int find_parent(int x){
    if( parent[x]== x) return x;

    return parent[x]= find_parent(parent[x]);

}

void dsu_union( int x, int y){
    int px= find_parent( x);
    int py= find_parent( y);
    if( px == py) return ;

    if(dsu_size[px] > dsu_size[py]){
        parent[py]= px;
        dsu_size[px]+=dsu_size[py];
    }

    else 
    {
        parent[px]=py;
        dsu_size[py]+=dsu_size[px];

    }
}



int main()
{
    int v, e;
    cin >> v >> e;
    dsu_initialize(v);
    vector<Edge>edge_list;

    for( int i = 0 ; i < e ; i++){
        int u, v, w;

        cin>> u >> v >>w;
        edge_list.push_back(Edge(u,v,w));
    }
    
    sort(edge_list.begin(), edge_list.end());
    cout<< endl;
    int total_cost=0;

    for( Edge e: edge_list){
        int px= find_parent(e.u);
        int py= find_parent(e.v);
        if( px== py){
            continue;

        }

        else{
            dsu_union(e.u,e.v);
            total_cost+=e.w;


        }
    }

    cout<< total_cost;
    



   return 0;
}