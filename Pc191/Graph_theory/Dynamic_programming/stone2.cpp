#include<bits/stdc++.h>
using namespace std;
const int N=1e5;;
int h[N];
const int INF=2e9;
int dp[N];
int k,n;

//memoization approach
// int stone2(int n)
// {
//     if(n==1)
//         return 0;

//     if(dp[n]!=-1)
//         return dp[n];

//     int candidate=INF;

//     for(int i=1;i<=k;i++)
//     {
//         if(n-i<=0)
//             break;
//         int ans=stone2(n-i)+abs(h[n]-h[n-i]);
//         candidate=min(candidate,ans);

//     }

//     dp[n]=candidate;
//     return candidate;

// }

// int main()
// {
    
//     cin>>n>>k;
//     for(int i=1;i<=n;i++)
//         cin>>h[i]; 
//     memset(dp,-1,sizeof(dp));

//     cout<<stone2(n);



//    return 0;
// }

// Tabulation approach


int main()
{
    cin>>n>>k;
    
    for(int i=1; i<= n; i++)
    cin>>h[i];

    dp[1]=0;
    

    for(int i=2;i<=n;i++)
    {
        dp[i]=INF;
        for(int j=1; j<=k; j++)
        {
            if(i-j <= 0)break;

            int ans=dp[i-j]+abs(h[i]-h[i-j]);
            dp[i]=min(dp[i],ans);
            
        }
        
    }

    cout<<dp[n];


    return 0;
}