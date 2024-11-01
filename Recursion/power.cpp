#include<bits/stdc++.h>
using namespace std;
int power(int a,int b)
{
    if(b>=1)
    return a*power(a,b-1);
    else return 1;

}

    int main()
{
    int n,m;
    cin>>n>>m;
    int x=power(n,m);
    cout<<x;

   return 0;
}