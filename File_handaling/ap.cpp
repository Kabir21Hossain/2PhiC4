#include<iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;

    while(t--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        bool l=false;

        int m;

        if((2*b-c)%a==0 && (2*b-c>0))
            l=true;
        
        else if((a+c>0) && (a+c)%(2*b)==0)
            l=true;

        else if((2*b-a>0 ) && (2*b-a)%c==0)
            l=true;

        else l=false;

        if(l)
            cout<<"YES\n";
        else 
            cout<<"NO\n";

    }

    return 0;
}