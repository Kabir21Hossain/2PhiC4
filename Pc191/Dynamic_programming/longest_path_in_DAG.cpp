#include<bits/stdc++.h>
using namespace std;
const int N=1e5;
vector<int>parent_list[N];
int dp[N];
int root,dest;


int maxi_path( int d)
{

    if(root == 0) return 0;

    if(dp[d] != -1)
        return dp[d];
    
    int ans=0;
    
    for(int parent: parent_list[d])
    {
        int dist=maxi_path(parent)+1;
        ans=max(dist,ans);

    }

    dp[d]=ans;
    return ans;
    


}


int main()
{
    int n,m;
    cin>> n >> m;

    for( int i = 0; i < m; i++){
        int u,v;
        cin>> u>> v;

        parent_list[v].push_back(u);

    }

    for(int i = 0; i <= n; i++)
    {
        dp[i]=-1;

    }

   
    cin >> root >> dest;

    cout<<maxi_path( dest);
   return 0;
}