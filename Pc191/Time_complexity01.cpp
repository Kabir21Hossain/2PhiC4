#include<bits/stdc++.h>
using namespace std;
int main()
{
    // constant time operation
    // time complexity O(1)
    /*
    space complexity O(1)
    because 7 variable to be stored. Since it's constant.
    
    */
    
         

    // int a,b,c;
    // cin>>a>>b>>c;
    // int maxi=max({a,b,c});
    // int mini=min({a,b,c});
    // int sum=a+b+c;
    // int mul=a*b*c;

    // cout<<maxi<<endl;
    // cout<<mini<<endl;
    // cout<<sum<<endl;
    // cout<<mul<<endl;

    /*
    O(n) =time complexity
    
    */
  int n;
   cin>>n;
   vector<int>v(n);
   for(int i=0;i<n;i++)
   {
    cin>>v[i];
   }
//    int maxi=v[0];
//    int mini=v[0];
//    int sum=0;
//    for(int i=0;i<n;i++)
//    {
//     maxi=max(maxi,v[i]);
//     mini=min(mini,v[i]);
//     sum+=v[i];
//    }

/*
O(n*n)

*/

// for(int i=0;i<n;i++)
// {
//     string ans="no";
//     for(int j=0;j<n;j++)
//     {


//         if(i==j)
//         continue;
//         if (v[i]==v[j])
//         ans="yes";


//     }
//     cout<<"i "<<i<<" "<<ans<<endl;
// }

for(int i=0;i<n;i++)
{
    string ans="no";
    for(int j=i+1;j<n;j++)
    {
        if(v[i]==v[j])
        {
            ans="yes";
        }
    }
    cout<<"i: "<<i<<" "<<ans<<endl;
}


    

   return 0;
}