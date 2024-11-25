#include<bits/stdc++.h>
using namespace std;
int main()
{
     int n,s;
    cin>>n;
    vector<int>v;
    vector<int>v1(n);
    for(int i=0;i<n;i++)
    {
        cin>>v1[i];
    }
    cin>>s;
    vector<int>v2(s);
     for(int i=0;i<s;i++)
    {
        cin>>v2[i];
    }
    v=v1;
    for(int i=0;i<s;i++)
    {
        string s="no";
        for(int j=0;j<n;j++)
        {
            if(v2[i]==v[j])
            s="yes";

        }
        if(s=="no")
        v.push_back(v2[i]);

    }
    for(auto i:v)
    {
        cout<<i<<" ";
        
    }
    
   return 0;
}