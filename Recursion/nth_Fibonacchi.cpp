#include<bits/stdc++.h>
using namespace std;
int fibonacci(int a)
{
    
   if(a==0)
   return 0;
   else if(a==1)
   return 1;
   else 
   return fibonacci(a-1)+fibonacci(a-2);

}
int main()
{
    int n;
    cin>>n;
    int x=fibonacci(n);
    cout<<x;

   return 0;
}