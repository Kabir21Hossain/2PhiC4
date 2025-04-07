#include<bits/stdc++.h>
using namespace std;
vector<int>arr;
vector<int>parr;
void build_prefix_sum_array(){
    parr[0]=0;

    for( int i =0 ; i< arr.size() ; i++){
        parr[i+1]=parr[i]+arr[i];

    }

}

int prefix_sum(int l, int r){
    return parr[r+1]-parr[l];
}

int main()
{
    int n;
    cin >>n;
    arr.resize(n);
    parr.resize(n+1);

    for( int i = 0 ; i < n ; i++){
        cin>> arr[i];
        
    }

    build_prefix_sum_array();
    cout<<prefix_sum(2,7)<<endl;
    cout<<prefix_sum(0,5);


   return 0;
}
/*

vector<int>build_prefix(vector<int>&v){
    int n= v.size();
    vector<int> parr(n+1);
    parr[0]=0;

    for( int i =1 ; i <= n ; i++){
        parr[i]=parr[i-1]+v[i-1];

    }

    return parr;



}

int query( vector<int> & parr, int l , int r){
    return parr[r+1] - parr[l];
}

int main(){

    int n ;
    cin >> n;
    vector<int>arr(n);
    for( int i = 0 ; i < n ; i++){
        cin >> arr[i];
    }

    vector<int> parr= build_prefix(arr);
    int l,r;
    cin>> l >> r;

    cout<< query(parr, l, r);





    return 0;

}

*/