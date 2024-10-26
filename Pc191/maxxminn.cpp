#include<bits/stdc++.h>
using namespace std;
int find_max(int arr[],int size)
{
    int large=arr[0];
    for(int i=0;i<size;i++)
    {
        if(arr[i]>=large)
        swap(large,arr[i]);

    }
    return large;


}

int find_min(int arr[],int size)
{
    int smallest=arr[0];
    for(int i=0;i<size;i++)
    {
        if(arr[i]<=smallest)
        swap(smallest,arr[i]);

    }
    return smallest;
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
    int maxx=find_max(arr,n);
    int minn=find_min(arr,n);
    cout<<maxx<<endl<<minn<<endl;

return 0;
}