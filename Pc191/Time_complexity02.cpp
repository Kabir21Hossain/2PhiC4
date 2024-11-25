#include<bits/stdc++.h>
using namespace std;
int called=0;
int saved[100];
int f(int x)
{
    if(x==0)
    return 0;
    else if(x==1)
    return 1;
    else
    {
        if(saved[x]!=0)
        return saved[x];
        else
        {
         int a=f(x-1);
        called++;
        int b=f(x-2);
        called++;
        saved[x]=a+b;
        return a+b;

        }
       
    }
  

}
int main()
{
    int n;
    cin>>n;
    int nth=f(n);
    cout<<nth<<endl;
    cout<<"called="<<called<<endl;


   return 0;
}
