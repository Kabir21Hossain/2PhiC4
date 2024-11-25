#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,s;
    cin>>n;
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
    if(n>s)
    {
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<s;j++)
            {
                if(v1[i]==v2[j])
                cout<<v1[i]<<" ";
            }
        }
    }
    else
    {
        for(int i=0;i<s;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(v2[i]==v1[j])
                cout<<v2[i]<<" ";

            }

        }
    }

    
   return 0;
}