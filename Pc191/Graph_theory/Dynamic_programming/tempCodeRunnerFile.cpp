#include<bits/stdc++.h>
using namespace std;

const int N=101;
const int M=1e5;
int dp[N][M];
int arr[N];

/*
6 9
3 34 4 12 5 2

*/
int subset_sum(int n,int t)
{
    if(t==0 && n>=0)
        return true;
    
        if(dp[n][t]!=-1)
            return dp[n][t];
   
    int ans1= subset_sum(n-1,t);
        if(t< arr[n])
        {
            dp[n][t]=ans1;
            return ans1;
        }
         
  
    int ans2 = subset_sum(n-1,t-arr[n]);

    int ans=ans1 or ans2;
    dp[n][t]= ans;


}

int main()
{
    int n,target;
    cin>>n>>target;

    for(int i=1;i<=n;i++)
        cin>>arr[i];
    
    for(int i=0;i<=n;i++){
        for(int j=0;j<=target;j++){
            dp[i][j]=-1;
        }
    }

    cout<<subset_sum(n,target);
    
    
    

    return 0;
}