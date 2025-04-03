/*
lcs(i,j){

if(i == s.size() || j == t.size()) return 0;

if( s[i] == t[j] ) return 1 + lcs( i+1 , j+1 );

else{

return max( lcs( i+1,j ) , lcs( i,j+1 )  );
}

}


*/

//Memoization approach

#include<bits/stdc++.h>
using namespace std;
const int N=101;
int dp[N][N];
string s,t;
int lcs( int i, int j){

    if(i == s.size() || j == t.size()){
        return 0;

    }

    if(dp[i][j] != -1)
        return dp[i][j];

    if(s[i] == t[j]){

       int ans=1+lcs(i+1,j+1);

       dp[i][j]=ans;
       return ans;


    }
   
    else 
    {
        dp[i][j]=max(lcs(i+1,j),lcs(i,j+1));

        return dp[i][j];
    } 


}
int main()
{

   
    cin >> s>> t;

    for(int i = 0 ; i < s.size() ; i++){

        for( int j = 0 ; j < t.size() ; j++){
            dp[i][j]=-1;
        }
    }

    cout<<lcs(0,0);




   return 0;
}


