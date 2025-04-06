#include<bits/stdc++.h>
using namespace std;

int sliding_window( vector<int> & arr, int k){

    int n= arr.size();
    if( n< k)
    return -1;

    int fsum=0;
    for( int i=0 ; i< k ; i++){
        fsum+=arr[i];

    }
    
    for( int i=k ; i< n; i++){
         int window_sum= fsum;
         window_sum+=arr[i]-arr[i-k];
         fsum=max(fsum,window_sum);


    }

    return fsum;



}
int main()
{
    int n;
    int window_sz;

    cin>> n >> window_sz;
    vector<int>arr(n);

   for( int i = 0 ; i < n ; i++){
    cin >> arr[i];

   }



   cout<< sliding_window(arr,window_sz);
   
   return 0;
}