#include<bits/stdc++.h>
using namespace std;
vector<int>parent;
vector<int>dsu_size;

int find_parent(int node){

    if( parent[node] == node) return node;

    return parent[node]= find_parent(parent[node]);

}
void dsu_union(int x,int y){

    int ulp_x=find_parent(x);
    int ulp_y= find_parent(y);

    if(dsu_size[ulp_x]> dsu_size[ulp_y]){
        parent[ulp_y]=ulp_x;
        dsu_size[ulp_x]+=dsu_size[ulp_y];
    }
    else 
    {
        parent[ulp_x]=ulp_y;
        dsu_size[ulp_y]+=dsu_size[ulp_x];
    }
}
int main()
{
    int n;
    cin >> n;
    parent.resize(n);
    dsu_size.resize(n);

    for( int i = 0 ; i < n ; i++){
        parent[i] = i;
        dsu_size[i] = 1;
    }

    dsu_union(0,2);
    dsu_union(1,2);
    dsu_union(2,4);
    dsu_union(1,4);
    
    cout<<find_parent(2)<<endl;

    if( find_parent(2) == find_parent(4)){
        cout<<" They are part of same component\n";

    }
    else cout<<" They are from different component\n";
    


   return 0;
}