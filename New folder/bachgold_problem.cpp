#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int k=0,l=0;
    cin>>n;

    if(n%2==0)
    {
        k=n/2;

    }
    else
    {
        k=(n-3)/2;
        l=1;
    }

    cout<<k+l<<"\n";

    for(int i=0;i<k;i++)
    {
        cout<<2<<" ";

    }

    for(int i=0;i<l;i++)

    {
        cout<<3<<" ";
        
    }

   return 0;
}