#include<bits/stdc++.h>
using namespace std;
int sum(int a)
{
    if(a==0)
    return 0;
    else 
    return a+sum(a-1);

}
int main()
{
    int n;
    cin>>n;

    int x=sum(n);
    cout<<x;
    
   return 0;
}