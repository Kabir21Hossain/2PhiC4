#include<bits/stdc++.h>
using namespace std;
void find_max_min(int arr[],int size,int *p,int *q)
{
    *p=arr[0];
    *q=arr[1];


    for(int i=0;i<size;i++)
    {
       if(arr[i]>=*p)
       swap(arr[i],*p);
       if(arr[i]<=*q)
       swap(arr[i],*q);


    }
    


}


int main()
{
    int n,maxi,mini;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
 find_max_min(arr,n,&maxi,&mini);
 cout<<maxi<<endl<<mini;
    
   

return 0;
}