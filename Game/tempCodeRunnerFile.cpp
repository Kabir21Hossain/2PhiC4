#include<bits/stdc++.h>
using namespace std;
int partition(vector<int>&v,int s,int e);

void quick_sort(vector<int>&v,int s,int e)
{
    if(e-s<=1)

    return;

  int  index =partition(v,s,e);
  quick_sort(v,s,index);
  quick_sort(v,index+1,e);


}
int partition(vector<int>&v,int s,int e)
{
     int i=s,j=e;
     int pivot=v[s];
    while(i<j)
    {
    
    do
    {
        i++;
    } while (v[i]<pivot && i<e);
    
    do{
            j++;

    }while(v[j]>=pivot && j>s);
    swap(v[i],v[j]);
   
    }
     
     if(i<j)
    {
        swap(v[i],v[j]);
    }

    if(i>j)
    {
        swap(v[s],v[j]);

    }
    return j;


}
int main()
{
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }

quick_sort(v,0,v.size()-1);

for(auto it:v)
    {
        cout<<it<<" ";

    }


   return 0;
}