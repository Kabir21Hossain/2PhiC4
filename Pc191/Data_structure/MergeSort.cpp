#include<bits/stdc++.h>
using namespace std;
vector<int>merge_sort(vector<int>a)
{
    if(a.size()<=1)
    return a;

   
        int mid=a.size()/2;
        vector<int>b;
        vector<int>c;

        for(int i=0;i<mid;i++)
        {
            b.push_back(a[i]);

        }
        for(int i=mid;i<a.size();i++)
        {
            c.push_back(a[i]);
        }
    
   
    vector<int>sorted_b=merge_sort(b);
    vector<int>sorted_c=merge_sort(c);

    vector<int>sorted_a;
    int idx1=0;
    int idx2=0;
    while(idx1<sorted_b.size() && idx2<sorted_c.size())
    {
        if(sorted_b[idx1]<sorted_c[idx2])
        {
            sorted_a.push_back(sorted_b[idx1]);
            idx1++;
        }
        else {
            sorted_a.push_back(sorted_c[idx2]);
            idx2++;

        }
    }

// int k=sorted_a.size();
    if(idx1<sorted_b.size())
    {
        while(idx1<sorted_b.size())
        {
            sorted_a.push_back(sorted_b[idx1]);
            idx1++;
        }
    }
    else 
    {

        while(idx2<sorted_c.size())
        {
            sorted_a.push_back(sorted_c[idx2]);
            idx2++;

        }
    }
    return sorted_a;


}

int main()
{
    vector<int>a={30,-2,100,60,17,29};
    
    vector<int>ans;
    ans=merge_sort(a);
    for(auto it:ans)
    {
        cout<<it<<" ";

    }
   return 0;
}