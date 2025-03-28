#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Number of elements ";
    cin>>n;
    int sum[n+1];
    sum[0]=0;
    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;
        sum[i+1]=(x+sum[i]);
    }
    int q;
    cout<<"Number of query ";
    cin>>q;
    while(q--)
    {
        int l,r;
        cin>>l>>r;
        cout<<"Sum in range ["<<l<<","<<r<<"] :";
        cout<<sum[r+1]-sum[l]<<endl;

    }
}

