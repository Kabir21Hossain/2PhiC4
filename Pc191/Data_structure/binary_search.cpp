#include<bits/stdc++.h>
using namespace std;
/*int binarySrc(int a[],int s,int target)
{
    int mid,index,beg=0,end=s-1;
    while(beg<end)
    {
        mid=beg+(end-beg)/2;
        if(a[mid]==target)
        {
            return mid;
        }
        else if(a[mid]>target)
        {
            end=mid-1;
        }
        else beg=mid+1;
    }
    return -1;
}*/



//recursive function
int binary_src(int a[],int left,int right,int key)
{
    if(left>right)
    return -1;
   int  mid=left+(right-left)/2;
   if(a[mid]==key)
   return mid;
   else if(a[mid]>key)
   {
    right=mid-1;

   }
   else 
   left=mid+1;
   binary_src(a,left,right,key);


}

int main()
{
    int n,index,flag=0,key;
    // int beg=0,end=n-1,mid;
    int operation=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
   
     cin>>key;

//     // while(beg<end)
//     // {
//     //     operation++;
//     //     mid=(beg+end)/2;// mid=beg+(end-beg)/2;
//     //     if(a[mid]==key)
//     //     {
            
//     //         cout<<"index:"<<mid<<endl;
//     //         flag=1;
//     //         break;

//     //     }
//     //     if(a[mid]>key)
//     //     {
//     //         end=mid-1;
//     //     }
//     //     else
//     //     beg=mid+1;

     
//     // }
//     // if(flag==0)
//     // cout<<"item not found\n";
//     // cout<<"operation number:"<<operation<<endl;

    
//     // using function

//  index=binarySrc(a,n,key);
// if(index==-1)
// cout<<"item not found\n";
// else 
// cout<<"index: "<<index<<endl;

index=binary_src(a,0,n-1,key);
if(index==-1)
cout<<"Item not found\n";
else 
cout<<index<<endl;


    return 0;
}