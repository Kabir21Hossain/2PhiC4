#include<bits/stdc++.h>
using namespace std;
int main()
{
 int n;
 cin>>n;
 vector<int>primes;
 vector<bool>visited(n+1,false);
 for(int i=2;i<=n;i++)
 {
    if(visited[i]==false)
    {
        primes.push_back(i);
        for(int x=i;x*i<=n;x++)
        {
            visited[x*i]=true;
        }

    }

 }

  for(auto it: primes)
    {
        cout<<it<<" ";
    }
 

   
    return 0;
}