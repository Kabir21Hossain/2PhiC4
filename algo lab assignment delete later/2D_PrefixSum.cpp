#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cout<<"Enter number of Row and Column ";
    cin>>n>>m;
    int arr[n+1][m+1];
    cout<<"Enter the elements:"<<endl;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
         cin>>arr[i][j];
    }
    int pre_sum[n+1][m+1];
    pre_sum[0][0]=arr[0][0];
    for(int i=1; i<n; i++)
    {
        pre_sum[i][0]=pre_sum[i-1][0]+arr[i][0];

    }
    for(int i=1; i<m; i++)
    {
        pre_sum[0][i]=pre_sum[0][i-1]+arr[0][i];

    }
    for(int i=1; i<n; i++)
    {
        for(int j=1; j<m; j++)
            pre_sum[i][j]=pre_sum[i-1][j]+pre_sum[i][j-1]+arr[i][j]-pre_sum[i-1][j-1];
    }
    cout<<"Prefix sum:"<<endl;

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
            cout<<pre_sum[i][j]<<" ";
        cout<<endl;
    }
    cout<<"\n Enter number of Queries :";
    int q;
    cin>>q;
    while(q--)
    {
        int l1,r1,l2,r2;
        cout<<" Enter two cell number"<<endl;
        cin>>l1>>r1>>l2>>r2;
        cout<<"Sum in range ["<<l1<<","<<r1<<"]["<<l2<<","<<r2<<"] : ";
        int x,y,z,w;
        if(l1>0)
            x=pre_sum[l1-1][r2];
        else
            x=0;
        if(r1>0)
            y=pre_sum[l2][r1-1];
        else
            y=0;
        if(l1>0 && r1>0)
            z=pre_sum[l1-1][r1-1];
        else
            z=0;
        cout<<pre_sum[l2][r2]-y-x+z<<endl;
    }
    return 0;
}

