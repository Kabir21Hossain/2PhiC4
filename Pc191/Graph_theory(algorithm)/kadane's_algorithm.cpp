#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v={-2,1,4,5,-4,8,5,6,1};
    int max_sum=v[0];
    int current_sum=v[0];
    for( int i=1; i< v.size() ; i++){
        current_sum=max(v[i],current_sum+v[i]);
        max_sum=max(current_sum,max_sum);

    }
    cout<<max_sum;
   return 0;
}