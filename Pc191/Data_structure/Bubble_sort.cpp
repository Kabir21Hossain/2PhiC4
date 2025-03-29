#include<bits/stdc++.h>
using namespace std;
void print( vector<int>&v)
{
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    int s;
    cin>>s;
    vector<int>v(s);
    cout<<"Enter your data\n";
    for(int i=0;i<s;i++)
    {
        cin>>v[i];

    }
    bool swa=false;
    for(int i=0;i<s;i++)
    {
        bool sorted=true;
        for(int j=0;j<s-1-i;j++)
        {
            
            if(v[j]>v[j+1])
            {
                 swap(v[j],v[j+1]);
                 sorted=false;

            }
            
           

        }


     cout<<"After pass "<<i+1<<": ";
     print(v);
     if(sorted==true)
     break;

    }

    print(v);





    return 0;
}