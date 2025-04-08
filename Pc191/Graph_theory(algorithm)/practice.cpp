#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v={1,2,3,4,5};
    
    int max_sum =0;
    for( int start= 0 ; start < v.size() ; start++){
        int current_sum=0;

        for( int end = start; end <v.size() ; end++){

            // for( int i= start ; i <=end ; i++){
            //     cout<<v[i];
            // }
            // cout<<" ";
           current_sum+=v[end];
           max_sum=max(current_sum,max_sum);
           
            
        }
       
    }
    cout<<max_sum;
   return 0;
}