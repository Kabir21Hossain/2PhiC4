#include<bits/stdc++.h>
using namespace std;
const int N=1e9;
int saved[N];


int fib(int n)
{

    if(n<=2) return 1;
    if(saved[n-1]==0){
        int a=fib(n-1);
        saved[n-1]=a;
    }
       
    else return saved[n-1];

    if(saved[n-2]==0)
    {
        int b=fib(n-2);
        saved[n-2]=b;
    }
    else return saved[n-2];

    return fib(n-1)+fib(n-2);




}
int main()
{
    int n;
    cin>>n;
    int x=fib(n);
    cout<<x;

   return 0;
}