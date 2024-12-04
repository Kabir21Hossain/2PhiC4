#include<bits/stdc++.h>
using namespace std;
void print(vector<int>&v)
{
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    // int n;
    // cin>>n;
    // vector<int>v(n);
    // for(int i=0;i<n;i++)
    // {
    //     cin>>v[i];
    // }

    // for(int i=1;i<n;i++)
    // {
    //     for(int j=i-1;j>=0;j--)
    //     {
    //         if(v[j+1]<v[j])
    //         swap(v[j+1],v[j]);
    //     }
    //     cout<<" pass:"<<i+1<<" ";
    //     print(v);

    // }

int n;
cin>>n;
vector<int>v(n);
for(int i=0;i<n;i++)
{
    cin>>v[i];

}

for(int i=1;i<n;i++)
    {
        for(int j=i-1;j>=0;j--)
        {
            if(v[j+1]<v[j])
            {
                swap(v[j+1],v[j]);

            }
        }
        cout<<i<<": ";
        print(v);
    }

print(v);

   return 0;
}
