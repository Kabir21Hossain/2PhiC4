#include<bits/stdc++.h>
using namespace std;
vector<int> arr,window_sv;

int window_sliding( int n, int k){

    if( n < k) return -1;

    int sum=0;

    for( int i = 0 ; i < k ; i++){
        sum+=arr[i];

    }

    int window_sum=sum;

    for( int i = k ; i < n ; i++){
        window_sum+=arr[i]- arr[i-k];
        sum= max(sum, window_sum);

    }

    return sum;

}

int main()
{
    int n;
    cout<<"Number of elements:";
    cin>> n; 
    arr.resize(n);

    cout<<"Enter elements:\n";

    for( int i = 0 ; i < n ; i++){
        cin>> arr[i];

    }

    cout<< "Number of different window sizes:";
    int m;
    cin>> m;

    cout<<"Enter window sizes:\n";
    window_sv.resize(m);

    for( int i = 0 ; i < m ; i++){
        cin>> window_sv[i];

    }

    for( int i = 0 ; i < m ; i++){
        cout<< " window size "<< window_sv[i]<<" :\n";
        int x = window_sliding(n,window_sv[i]);
        
        if (x== -1) cout<< "invalid\n";

        else 
        cout<< x <<endl;

    }


   return 0;
}