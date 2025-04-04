#include<bits/stdc++.h>
using namespace std;

vector<int> merge_sort(vector<int>&v, int l, int r){

        if(l==r) return {v[l]};

        int mid=(l+r)/2;
       vector<int>a = merge_sort(v,l,mid);
       vector<int>b = merge_sort(v,mid+1,r);

       vector<int>c;

      int m=0,n=0;
      while( m< a.size() && n< b.size()){
        if(a[m]<b[n]){
            c.push_back(a[m]);
            m++;
            

        }
        else {
            c.push_back(b[n]);
            n++;
           

        }
      }

      while(m< a.size()){
        c.push_back(a[m]);
        m++;
      }
      while(n< b.size()){
        c.push_back(b[n]);
        n++;

      }


      return c;


}
int main()
{
    int n;
    cin>>n;

    vector<int>v(n);

    for(int i = 0 ; i < n ; i ++){
        cin>>v[i];

    }

    vector<int >d= merge_sort(v,0,n-1);

    for( int x: d){
        cout<<x<<" ";

    }


   return 0;
}

