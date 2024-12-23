#include<bits/stdc++.h>
using namespace std;
void merge_sort(vector<int>&v)
{

    if(v.size()<2)
    {
        return ;

    }

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

    int i=0,j=0,k=0;
    while(i<a.size() && j<b.size())
    {
        if(a[i]<b[j])
        {
            v[k]=a[i];
            i++;
            k++;
        }

        else 
        {
            v[k]=b[j];
            j++;
            k++;
        }

    }

    while(i<a.size())
    {
        v[k]=a[i];
        k++;
        i++;

    }

     while(j<b.size())
    {
        v[k]=b[j];
        j++;
        k++;
        
    }

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