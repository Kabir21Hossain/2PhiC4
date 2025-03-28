#include<iostream>
using namespace std;
// tabulation solution(iterative approach)
const int N=1e5;
int dp[N];
int h[N];

// int main()
// {
//     int n;
//     cin>> n;
    

    

//     for(int i = 1 ;i<=n ; i++)
//     {
//         cin>>h[i];
//     }
//     dp[1]=0;
//     for(int i=2;i<=n;i++)
//     {
//         int ans1=dp[i-1]+abs(h[i]-h[i-1]);
//         if(i==2)
//         {
//             dp[i]=ans1;
//             continue;

//         }

//         int ans2=dp[i-2]+abs(h[i]-h[i-2]);

//         dp[i]=min(ans1,ans2); 


//     }
//     cout<<dp[n];


//     return 0;

// }


// Memoization APPROACH

int stone(int n)
{
    if(n==1)
        return 0;

    if(dp[n])
    return dp[n];
    int ans1=stone(n-1)+abs(h[n]-h[n-1]);
    if(n==2) {dp[n]=ans1; return dp[n];}
    int ans2=stone(n-2)+abs(h[n]-h[n-2]);
    dp[n]=min(ans1,ans2);
    return dp[n];
}
int main()
{
    int n;
    cin>>n;

    for(int i=1;i<=n;i++)
    {
        cin>>h[i];

    }

    
    cout<<dp[n];

return 0;

}