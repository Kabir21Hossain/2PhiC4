#include<bits/stdc++.h>
using namespace std;
vector<int>parent;
vector<int>dsu_size;


int find_parent(int node){
    if(parent[node] == node) return node;

    return parent[node]=find_parent(parent[node]);


}

void dsu_union(int x, int y){
    int upx=find_parent(x);
    int upy=find_parent(y);

    if(dsu_size[upx]> dsu_size[upy]){
        parent[upy]=upx;
        dsu_size[upx]+=dsu_size[upy];

    }
    else{

        parent[upx]=upy;
        dsu_size[upy]+=dsu_size[upx];

    }

}
int main()
{
    int n; 
    cin>>n;
    for( int i=0; i < n;i ++){
        parent[i]=i;
        dsu_size[i]=1;

    }

    dsu_union(0,1);
    dsu_union(2,3);
    dsu_union(2,4);
    dsu_union(1,3);
   


    cout<<find_parent(2);


   return 0;
}