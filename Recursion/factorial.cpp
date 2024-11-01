#include<bits/stdc++.h>
using namespace std;
int fact(int x)
{
    if(x==1)
    return 1;
    else 
    return x*fact(x-1);

}
int main()
{
    int n;
    cin>>n;
    int f=fact(n);
    cout<<f;
    


   return 0;
}