#include<bits/stdc++.h>
using namespace std;
const int N=101;
int dp[N][N];

// int fun(int n,int m)
// {
//     if(n==0 && m==0)
//         return 1;
    
//     if(dp[n][m]!=-1)
//         return dp[n][m];

//     if(n>0){
//         int ans1=fun(n-1,m);
//         dp[n-1][m]=ans1;

//     }
     
//     if(m>0){
//         int ans2=fun(n,m-1);
//         dp[n][m-1]=ans2;
//     }

//     dp[n][m]=dp[n-1][m]+dp[n][m-1];

//     return dp[n][m];

    

// }


// int main()
// {
//     int n,m;
//     cin>>n>>m;

//     for(int i=0;i<n;i++)
//     {
//         for(int j=0;j<m;j++)
//         {
//             dp[i][j]=-1;
//         }
//     }

//     cout<<fun(n-1,m-1);



//    return 0;
// }

// tabulation method

int main()
{
    int n,m;
    cin>>n>>m;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            dp[i][j]=-1;
        }
    }

   dp[0][0]=1;

   for(int i=0;i<n;i++){
   
        for(int j=0; j<m; j++){

            if(i==0 && j==0)
            continue;

            int ans = 0;

            if(i>0) ans+=dp[i-1][j];
            if(j>0) ans+=dp[i][j-1];
            dp[i][j]=ans;

        }

   }

   cout<<dp[n-1][m-1];
   


   return 0;
}

