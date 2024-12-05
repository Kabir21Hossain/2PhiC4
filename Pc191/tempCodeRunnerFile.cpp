#include<bits/stdc++.h>
using namespace std;
int main()
{
    /// 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20

    int n;
    cin>>n;
    vector<int>primes;
    vector<bool>visited(n+1,false);
    for(int i=2;i<=n;i++)
    {
        if(visited[i]==false)
        {
            primes.push_back(i);
            for(int x=2;i*x<=n;x++)
            {
                visited[i*x]=true;
            }
        }

    }

    cout<<primes.size()<<"\n";
    for(int i=0;i<primes.size();i++)
    {
     cout<<primes[i]<<" ";
    }

cout<<"\n";
    return 0;
}