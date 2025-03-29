#include<bits/stdc++.h>
using namespace std;
const int N=102;
const int M=1e5 + 5;

long long dp[N][M];
int wt[N],val[N];

// Memoization Approach

// long long knapsack(int n,int cap)
// {
//     if(n==0)return 0;

//     if(dp[n][cap]!=-1){
//         return dp[n][cap];
//     }

//     if(cap< wt[n]){
//         long long ans=knapsack(n-1,cap);
//         dp[n][cap]=ans;
//         return dp[n][cap];

//     }

//     long long ans1=val[n]+ knapsack(n-1,cap-wt[n]);
//    long long ans2=knapsack(n-1,cap);
//     long long ans=max(ans1,ans2);
//     dp[n][cap]=ans;

//     return dp[n][cap];


// }
// int main()
// {
//   int n,cap;
//   cin>>n>>cap;

//   for(int i=1;i<=n;i++)
//     cin>>wt[i]>>val[i];
//   for(int i=0;i<=n;i++)
//   {
//     for(int j=0;j<=cap;j++){
//         dp[i][j]=-1;
//     }
//   }

//   cout<<knapsack(n,cap);

//    return 0;
// }


// Tabulation Method



int main()
{

    int w,n;
    cin>>n>>w;

    for(int i=1;i<=n;i++)
    {
        cin>>wt[i]>>val[i];
    }

    for(int i=0;i<=w;i++)
    {
        dp[0][i]=0;
    }


    for(int i=1; i<=n; i++){

        for(int cap=0; cap<= w; cap++)
        {
          if(wt[i] > cap) {
            dp[i][cap]=dp[i-1][cap];

          }

          else 
          {
            dp[i][cap]=max(
                val[i]+dp[i-1][cap-wt[i]],dp[i-1][cap]
            );
          }
             
           
        }
    }


cout<<dp[n][w]<<endl;

    return 0;
}


