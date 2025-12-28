#include<bits/stdc++.h>
using namespace std;

vector<int> merge_sort(vector<int>&arr){
    if (arr.size()<=1){
        return arr;
    }

    int mid=arr.size()/2;
    
    vector<int>left(arr.begin(),arr.begin()+mid);
    vector<int>right(arr.begin()+mid,arr.end());

    left=merge_sort(left);
    right=merge_sort(right);


    
    vector<int>merged;

    int i=0,j=0;

    while(i<left.size() && j<right.size()){
        if(left[i]<=right[j]){
            merged.push_back(left[i]);
            i+=1;


        }

        else{
            merged.push_back(right[j]);
            j+=1;


        }

    }

    while(i<left.size()){
        merged.push_back(left[i]);
        i+=1;

    }

    while(j<right.size()){
        merged.push_back(right[j]);
        j+=1;


    }

    return merged;


}



int main(){
    vector<int>arr={2,89,20,-2,4,1,3};

    vector<int>v=merge_sort(arr);

    for(int x:v){
        cout<<x<<" ";
    }




    return 0;

}