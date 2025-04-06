#include<bits/stdc++.h>
using namespace std;
vector<int> parent,dsu_size;

void dsu_initialize(int n){
    
    parent.resize(n);
    dsu_size.resize(n);
    
    for( int i=0 ; i< n; i++){
        parent[i]= i;
        dsu_size[i]=1;

    }
}

int find_parent(int x){
    if( parent[x]== x) return x;

    return parent[x]= find_parent(parent[x]);

}

void dsu_by_union(int x,int y){

    int px=find_parent(x);
    int py= find_parent(y);

    if( px == py) return;


    if( dsu_size[px] > dsu_size[py]){
         parent[py]= px;
         dsu_size[px]+=dsu_size[py];

    }

    else {
        parent[px]=py;
        dsu_size[py]+=dsu_size[px];

    }

}

int main()
{
    int v,e;
    cin >> v >> e;

    dsu_initialize(v);

    bool cycle=false;

    for( int i = 0 ; i < e ; i++){
        int u,v;
        cin >> u >> v;

        if( find_parent(u) == find_parent(v)){
            cycle= true;

        }   
        else {
            dsu_by_union(u,v);

        }
   
    }


    if( cycle){
        cout<<" cycle detected\n";
    }

    else cout<<" NO cycle detected\n";

   return 0;
}