#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int x;
        x=(n-12)/8;

        cout<<2*x<<" "<<2*x+2<< " "<< 2*x+4<<" "<<2*x+6<<endl;
    }

   return 0;
}