// Memoization method
#include<iostream>
using namespace std;
const int N=1e5;
int dp[N];
// int fib(int n)
// {
//     if(n<=2)
//     return 1;

//     if(dp[n])
//         return dp[n];
//     dp[n]=fib(n-1)+fib(n-2);
//     return dp[n];
// }
// int main()
// {
//     int n;
//     cin>>n;

//     cout<<fib(n);

//     return 0;
// }


// Tabulation Method

int main()
{
    int n;
    cin>>n;

    for(int i=0;i<=n;i++)
        dp[i]=0;

    dp[1]=1;
    dp[2]=1;

    for(int i=3;i<=n;i++)
    {
        dp[i]=dp[i-1]+dp[i-2];

    }
    cout<<dp[n];
    


    return 0;
}


