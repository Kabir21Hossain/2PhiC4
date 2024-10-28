#include<bits/stdc++.h>
using namespace std;
int counter(int arr[],int n)
{
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]%3==0 || arr[i]%5==0)
        {
            count++;
        }

       

    }
     if(count==0)
        return -1;
        else return count;
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

    int result=counter(arr,n);
    cout<<result;

return 0;
}