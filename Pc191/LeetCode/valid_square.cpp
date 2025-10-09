#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
        bool validSquare(vector<int> &p1 , vector<int> &p2, vector<int> & p3, vector<int> &p4){
            vector<int>v={p1,p2,p3,p4};
            vector<int>dists;

            for(int i =0 ; i < 4; i++){
                for(int j = i+1; j<4; j++){
                    long long d=dist(v[i],v[j]);
                    if (d==0){
                        return false;

                    }
                    
                    dists.push_back(d);
                }
            }

            sort(dists.begin(),dists.end());

            return dists[0]==dists[1] &&
            dists[1]==dists[2] &&
            dists[2]== dists[3] &&
            dists[4]==dists[5]&&
            dists[4]==2*dists[0];




    }

    private:
        long long dist(vector<int> &p1, vector<int> &p2){
            return ((p1[0]-p2[0])*(p1[0]-p2[0]) + (p1[1]-p2[1])* (p1[1]-p2[1]));
        }


}

int main(){


}