#include<bits/stdc++.h>
using namespace std;
/*
    worst case:Found in the last index=O(n)
    best case: found in the first index=O(1)
    average case: O(n)
    space complexity=O(n)
*/
int main()
{
    int n;
    cin>>n;
    vector<int>v(n);
    
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }

    int key;
    cin>>key;

    for(int i=0;i<n;i++)
    {
        if(key==v[i])
        {
            cout<<"indexes:"<<i<<" ";
        }
    }
   return 0;
}

