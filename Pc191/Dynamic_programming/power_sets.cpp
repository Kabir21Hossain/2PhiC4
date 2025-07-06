#include<bits/stdc++.h>
using namespace std;
void power_set(vector<int>arr,vector<int>&subset,int index){
    if (index==arr.size()){
        for(int val:subset){
            cout<<val<<" ";

        }
        cout<<endl;
        return;
    }

    subset.push_back(arr[index]);
    power_set(arr,subset,index+1);
    subset.pop_back();
    power_set(arr,subset,index+1);

}
int main(){

    vector<int>arr={2,4,5,1};
    vector<int>subset;
    power_set(arr,subset,0);

    return 0;
}