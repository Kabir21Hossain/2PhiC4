#include<bits/stdc++.h>
using namespace std;
int sum(int a[],int x)
{
    if(x>=1)
    {
        return a[x-1]+sum(a,x-1);

    }

}
int main()
{

    int arr[]={8,3,1,10,33,4};
    int x=sum(arr,6);
    cout<<x;
    
   return 0;
}