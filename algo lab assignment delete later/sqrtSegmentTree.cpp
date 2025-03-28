#include<bits/stdc++.h>
using namespace std;
#define Mx 100000
#define RootN 320
int A[Mx+5];
int Block[RootN];
const int MX=10000000;

int main()
{
    int N,Q;
    cout<<"Number of Element and Query ";
    cin>>N;
    cin>>Q;
    for(int i=0;i<N;i++)
        cin>>A[i];
    int B = ceil(sqrt(N));
    int M = sqrt(N);
    int cnt=0,ind=0,mn1=MX;

    for(int k=0;k<N;k++)
    {
        mn1=min(mn1,A[k]);
        cnt++;
        if(cnt==M && ind!=B-1)
        {
            Block[ind]=mn1;
            mn1=MX;
            cnt=0;
            ind++;
        }
  }

    Block[ind]=mn1;

    for(int j=0;j<Q;j++)
    {
        int L,R;
        cin>>L>>R;
    cout<<"In range ["<<L<<","<<R<<"] minimum value is :";
    int BL,BR;
    int mn=MX;
    BL=min(B-1,L/M);
    BR=min(B-1,R/M);
    if(BL==BR)
    {
        for(int i=L;i<=R;i++)
            mn=min(mn,A[i]);
        cout<<mn<<endl;continue;
    }
    for(int i=BL+1;i<BR;i++)
    {
        mn=min(mn,Block[i]);
    }
    int p_l,p_r;
    p_l=(BL*M)+(M-1);
    p_r=BR*M;
    for(int i=L;i<=p_l;i++)mn=min(mn,A[i]);
    for(int i=p_r;i<=R;i++)mn=min(mn,A[i]);
    cout<<mn<<endl;
    }



    return 0;
}
/*
13 5
1 2 3 4 5 6 7 8 9 10 11 12 13
*/
