#include<bits/stdc++.h>
using namespace std;
int sum(int a[],int n)
{
    if(n>0)
    {
        return a[n-1]%10+sum(a,n-1);
    }
    else return 0;
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];

    }
    int s=sum(arr,n);
    cout<<s;

    return 0;
}