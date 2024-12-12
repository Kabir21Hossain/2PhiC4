#include<bits/stdc++.h>
using namespace std;

vector<int>merge_sort(vector<int>a)
{
    if(a.size()<=1)
    return a;
    
    vector<int>b;
    vector<int>c;
    int mid=a.size()/2;

    for(int i=0;i<mid;i++)
        b.push_back(a[i]);

    for(int i=mid;i<a.size();i++)
        c.push_back(a[i]);
    

    vector<int>sorted_b=merge_sort(b);
    vector<int>sorted_c=merge_sort(c);
    vector<int>sorted_a;


    int idx1=0,idx2=0;
    while(idx1<sorted_b.size() && idx2<sorted_c.size())
    {
        if(sorted_b[idx1]<sorted_c[idx2])
        {
            sorted_a.push_back(sorted_b[idx1]);
            idx1++;
        }
        else 
        {
            sorted_a.push_back(sorted_c[idx2]);
            idx2++;

        }


    }

    
        while(idx1<sorted_b.size())
        {
            sorted_a.push_back(sorted_b[idx1]);
            idx1++;
        }
        
    

   
        while(idx2<sorted_c.size())
        {
            sorted_a.push_back(sorted_c[idx2]);
            idx2++;
        }


return sorted_a;


}

int main()
 {
//     vector<int>a;
//     int n;
//     cout<<"How many elements you want to provide:\n";
//     cin>>n;
//     cout<<"enter elements:\n";
//     for(int i=0;i<n;i++)
//     {
//         cin>>a[i];
//     }

vector<int>a;
for(int i=0;i<5;i++)
{
    int b;
    cin>>b;
    a.push_back(b);

}
    vector<int>ans;
    ans=merge_sort(a);
    for(auto it:ans)
    {
        cout<<it<<" ";
        
    }


   return 0;
}
