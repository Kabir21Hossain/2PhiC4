#include<bits/stdc++.h>
using namespace std;
const int N=1e6;
long long  save[N];



long  fib(int n)
{
        if(n<=2) return 1;

        if(save[n])
        return save[n];

        save[n]=fib(n-1)+fib(n-2);
        return save[n];

        

}
int main()
{
    int n;
    cin>>n;
    long long x=fib(n);
    cout<<x;

   return 0;
}