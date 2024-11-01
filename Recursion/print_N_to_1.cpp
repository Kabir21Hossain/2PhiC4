#include<bits/stdc++.h>
using namespace std;
void show(int x)
{
    if(x>=1)
    cout<<x<<" ";
    show(x-1);
    
}
int main()
{
    int n;
    cin>>n;
    show(n);

   return 0;
}