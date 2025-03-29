#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void merges(vector<int>&v1,vector<int>&v2,vector<int>&v)
{
    int i=0,j=0,k=0;
    while(i<v1.size() && j<v2.size())
    {
        if(v1[i]<=v2[j])
        {
            v[k]=v1[i];
            i++;
            k++;

        }
        else{
             v[k]=v2[j];
            j++;
            k++;
        }

    }

    while(i<v1.size())
    {
        v[k]=v1[i];
        i++;
        k++;
    }
     while(j<v2.size())
    {
        v[k]=v2[j];
        j++;
        k++;
    }

}
void merge_sort(vector<int>&v)
{
    if(v.size()<2)
    return;
    int mid=v.size()/2;
    vector<int>a,b;
    for(int i=0;i<mid;i++)
    {
        a.push_back(v[i]);

    }

    for(int i=mid;i<v.size();i++)
    {
        b.push_back(v[i]);

    }

    merge_sort(a);
    merge_sort(b);
    merges(a,b,v);




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
merge_sort(v);
    for(auto it: v)
    {
        cout<<it<<" ";
    }



    return 0;
}