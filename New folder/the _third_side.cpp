#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        deque<int>a(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];

        }

        while(a.size()!=1)
        {
            int b=a.front();
            a.pop_front();
            int c=a.front();
            a.pop_front();

            a.push_back(b+c-1);

        }

        cout<<a.front()<<endl;
        a.clear();
        

    }

   return 0;
}