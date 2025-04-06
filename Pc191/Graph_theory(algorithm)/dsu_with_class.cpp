#include<bits/stdc++.h>
using namespace std;

class DSU{

    private:

        vector<int>parent,drank;
    public:

        DSU(int n){
            parent.resize(n);
            drank.resize(n);

            for( int i = 0 ; i < n ; i++){
                parent[i] = i;
                drank[i]=0;
                
            }
            
        }

        // path compression

        int find_parent(int x){
            if( parent[x] == x) return x;

                return parent[x] = find_parent( parent[x]);

        }

        void dsu_union(int x, int y){

            int px= find_parent(x);
            int py= find_parent(y);

            if( px == py) return;

            if( drank[px] > drank[py]){
                parent[py]= px;

            }
            else if( drank[py] > drank[px]){
                parent[px]= py;
            }
            else {
                parent[px]= py;

                drank[py]++;

            }
        }


       

};
int main()
{
    DSU d(9);
    d.dsu_union(0,4);
    d.dsu_union(3,2);
    d.dsu_union(2,5);
    d.dsu_union(6,3);
    d.dsu_union(0,3);
    cout<<d.find_parent(5)<<endl;

    if( d.find_parent(3) == d.find_parent(2)){
        cout<<" they are from same component\n";

    }

    else cout<<" they are from different component\n";



   return 0;
}