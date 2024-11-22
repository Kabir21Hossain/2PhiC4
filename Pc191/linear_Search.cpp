#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];

    }
    int key;
    cin>>key;
    for(int i=0;i<n;i++)
    {
        if(key==v[i])
        {
            cout<<"indexes:"<<i<<" ";
        }
    }
   return 0;
}