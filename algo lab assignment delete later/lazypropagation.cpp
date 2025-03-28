#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll MAX=1e18;
const ll MX=10e5+10;
bool arr[MX+1];
ll ara[MX];
ll ST[4*MX];
ll lazy[4*MX];
void build(ll b,ll e,ll node)
{
    if(b>e)return;
    if(b==e)
    {
        ST[node]=ara[b];
        return;
    }
    ll mid=(b+e)/2;
    build(b,mid,2*node);
    build(mid+1,e,2*node+1);
    ST[node]=(ST[2*node]+ST[2*node+1]);

}
void propagate(ll SI,ll b,ll e)
{
    if(lazy[SI]!=0)
    {
        ST[SI]+=(lazy[SI]*(e-b+1));
        if(b!=e)
        {
            lazy[2*SI]+=lazy[SI];
            lazy[2*SI+1]+=lazy[SI];
        }
        lazy[SI]=0;
    }
    return;
}

void update(ll SI,ll b,ll e,ll l,ll r,ll val)
{
    propagate(SI,b,e);
    if(b>r || e<l)
    {
        return;
    }
    if(b>=l && e<=r)
    {

        ST[SI]+=(val*(e-b+1));
        if(b!=e)
        {
            lazy[2*SI]+=val;
            lazy[2*SI+1]+=val;
        }
        return;
    }
    ll left=2*SI;
    ll right=left+1;
    ll mid=(b+e)/2;
    update(left,b,mid,l,r,val);
    update(right,mid+1,e,l,r,val);
    ST[SI]=ST[left]+ST[right];
}
ll query(ll SI,ll b,ll e,ll l,ll r)
{
    propagate(SI,b,e);
    if(b>r || e<l)
    {
        return 0;
    }
    if(b>=l && e<=r)
    {
        return ST[SI];
    }
    ll left=2*SI;
    ll right=left+1;
    ll mid=(b+e)/2;
    ll L=query(left,b,mid,l,r);
    ll R=query(right,mid+1,e,l,r);
    return (L+R);
}
int main()
{
    ll n, x, y, q, val;
    cin >> n;
    for (ll i = 1; i <= n; i++) cin >> ara[i];
    build(1, n, 1);
    cin >> q;
    while (q--)
    {
        char type;
        cin >> type;
        if (type == 'u') // Update query
        {
            ll l, r, val;
            cin >> l >> r >> val;
            update(1, 1, n, l, r, val);

        }
        else if(type == 'q') // Sum query
        {
            cin >> x >> y;
            cout << "SUM " << query(1, 1, n, x, y) << endl;
        }
    }
}

