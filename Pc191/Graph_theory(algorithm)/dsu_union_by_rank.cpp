#include<bits/stdc++.h>
using namespace std;
vector<int>parent,dsu_rank;
int find_parent(int x){
    if( parent[x]== x) return x;

    return parent[x]=find_parent(parent[x]);

}

void dsu_union(int x, int y){
    int px=find_parent(x);
    int py= find_parent(y);

    if (px == py) return;

    if( dsu_rank[px] > dsu_rank[py]){
        parent[py]=px;

    }
    else if( dsu_rank[py]> dsu_rank[px]){
        parent[px]=py;

    }

    else {
        parent[py]=px;
        dsu_rank[px]++;

    }
}
int main()
{
    int n;
    cin >> n;

    parent.resize(n);
    dsu_rank.resize(n);

    for( int i = 0 ; i < n ; i++){

        parent[i]=i;
        dsu_rank[i]=0;
    }

    dsu_union(0,3);
    dsu_union(2,1);
    dsu_union(4,5);
    dsu_union(2,4);
    dsu_union(3,2);

    cout<<find_parent(3);
    cout<<endl;

    if( find_parent(1)== find_parent(9)){
        cout<<"They are from same component\n";

    }
    else cout<<" they are not from same component\n";





   return 0;
}