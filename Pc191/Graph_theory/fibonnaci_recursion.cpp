#include<bits/stdc++.h>
using namespace std;
int called=0;
#define max 50
int saved[max];

int fib(int a)
{
    // if(saved[a])
    // return saved[a];

    if(a==0 || a==1)
    return a;
    int x=fib(a-1);
    called++;
    saved[a-1]=x;
    int y=fib(a-2);
    saved[a-2]=y;
    called++;
    
    return x+y;

    
    
}
int main()
{
    int a;
    cin>>a;
    int x=fib(a);
    cout<<x<<endl;
    cout<<" total call:"<<called<<endl;

   return 0;
}