#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cout<<"Enter the number of elements:";
  cin>>n;
  int arr[n];
  cout<<"Enter the elements:\n";
  for(int i=0;i<n;i++)
  {
      cin>>arr[i];
  }
  int sparsetable[32][10000];
  memset(sparsetable,-1,sizeof(sparsetable));
  for(int i=0;i<n;i++)sparsetable[0][i]=arr[i];
  for(int i=1;i<log2(n);i++)
  {
      for(int j=0;j<n;j++){
           // cout<<j+(1<<(i-1))<<" ";
            if(sparsetable[i-1][j+(1<<(i-1))]!=-1)
          sparsetable[i][j]=sparsetable[i-1][j]+sparsetable[i-1][j+(1<<(i-1))];

      }
      cout<<endl;

  }

  cout<<"Sparse Table:\n";
  for(int i=0;i<log2(n);i++)
  {
      for(int j=0;j<n;j++)
          cout<<sparsetable[i][j]<<" ";
          cout<<endl;

  }


}
/*
10
1 2 3 4 5 6 7 8 9 10
*/
