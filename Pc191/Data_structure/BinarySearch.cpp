#include<bits/stdc++.h>
using namespace std;
int Binary_search(vector<int>&v1,int key)
{
    int beg=0;
    int end=v1.size()-1;
    int mid=(beg+end)/2;

    while(v1[mid]!=key)
    {
        mid=(beg+end)/2;
        if(v1[mid]>key)
        {
            end=mid;
        }
        else
        beg=mid;
    }
    return mid;


}
int main()
{
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    cin>>v[i];

    int key;
    cin>>key;
    int index=Binary_search(v,key);
    cout<<index;

   return 0;
}