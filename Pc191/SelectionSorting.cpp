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
   //    cin>>v[i];
   // }

   // // selection sorting 

   // for(int i=0;i<n;i++)
   // {
   //    int mini=v[i];
   //    int index=i;

   //       for(int j=i+1;j<n;j++)
   //       {
   //          if(v[j]<mini)
   //          {
   //             index=j;
   //             mini=v[j];
   //          }
            
   //       }


   //    if(mini<v[i])
   //          swap(v[i],v[index]);

   //       cout<<" i="<<i+1<<" :";
   //       print(v);
     

      
   // }

   // // after sorting

   // cout<<"After sorting:";
   // print(v);

   int n;
   cin>>n;
   vector<int>v(n);

   for(int i=0;i<n;i++)
      cin>>v[i];
   
   for(int i=0;i<n-1;i++)
   {
      int mini=v[i+1];
      int index=i+1;
      for(int j=i+1;j<n;j++)
      {
         if(v[j]<mini)
         {
            index=j;
            mini=v[j];
         }

      }

      if(v[index]<v[i])
      swap(v[index],v[i]);
      cout<<" after 1st pass: ";print(v);
   }

   cout<<"After sorting: "; print(v);



   return 0;
}