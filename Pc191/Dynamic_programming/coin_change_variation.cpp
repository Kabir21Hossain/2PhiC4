#include<bits/stdc++.h>
using namespace std;
const int N=101;
int value[N];
int limit[N];
int dp[N][N];

int ways(int n,int t)
{
    if( n== 0){
        if( t== 0 )return 1;
        return 0;

    }

    if(dp[n][t] != -1) return dp[n][t];


    int ans= ways(n-1,t);

    for(int i=1; i<= limit[n] ; i++)
    {
        if(t-i*value[n]<0)break;

            int ret= ways(n-1, t- i*value[n]);
            ans= ans+ret;
        
       
    }

    dp[n][t]=ans;
    return ans;

   

}
int main()
{
    int n,target;
    cin >> n >> target;

    for(int i = 1 ; i <=n ; i++)
    {
        cin >> value[i];
    }

    for(int i =1 ; i <= n ; i++)
    {
        cin >> limit[i];

    }

    for(int i=0; i <= n ; i++)
    {
        for( int j=0 ; j<= target; j++ )
        {
            dp[i][j]=-1;

        }
    }


    cout<<  ways(n,target);


    return 0;
}
