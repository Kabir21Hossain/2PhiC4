#include<bits/stdc++.h>
using namespace std;

int n;
int tree[10000];
int a[10000];
void update(int idx,int val)
{
    while(idx<=n)
    {
        tree[idx]+=val;
        idx+=(idx&-idx);
    }
}

int query(int idx)
{
    int sum=0;
    while(idx>0)
    {
        sum+=tree[idx];
        idx-=(idx&-idx);
    }

    return sum;
}
int main()
{
    cout<<"Enter the number of elements : ";
    cin>>n;

    cout<<"Enter the value of the array :";
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
        update(i,a[i]);
    }

    int q;
    cout<<"Enter the number of queries :";
    cin>>q;

    while(q--)
    {

        int x;
        cout<<"Enter 1/0 (0 for update & 1 for query ): ";
        cin>>x;
        if(x==0)
        {
            cout<<"Enter index and value(update ): ";
            int idx,val;
            cin>>idx>>val;
            update(idx,val);
            cout<<"updated Tree: ";
            for(int i=1; i<=n; i++)
                cout<<tree[i]<<" ";
            cout<<endl;
        }
        if(x==1)
        {
            int l,r;
            cout<<"Input range(left and right ): ";
            cin>>l>>r;
            int s=query(l-1);
            int f=query(r);
            cout<<"\t\tSum: "<<(f-s)<<endl;
        }
    }
    return 0;
}
