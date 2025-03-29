#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    
    while(t--)
    {
        int count=0;
        long long int k,l1,r1,l2,r2;
        cin>>k>>l1>>r1>>l2>>r2;

        for( long long int i=l1;i<=r1;i++)
        {
            for(long long  int j=l2;j<=r2;j++)
            {
                if(floor((log10(j/i))/log10(k))==((log10(j/i))/log10(k)))
                count++;

    
            }
        }
        cout<<count<<endl;


    }
   return 0;
}