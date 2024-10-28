#include<bits/stdc++.h>
using namespace std;
int sum(int arr[],int size)
{
    int summation=0;
    for(int i=0;i<size;i++)
    {
        if(arr[i]%2==0 && (i+1)%2==0)
        summation+=arr[i]+i+1;
        if(arr[i]%2!=0 && (i+1)%2!=0)
        summation+=arr[i]+i+1;

        
    }
    return summation;
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

    int result=sum(arr,n);
    cout<<result;


return 0;
}