#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    queue<string>s;
    s.push("1");
    for(int i=0;i<n;i++)
    {
        string temp=s.front();

        cout<<"Binary representation of "<<i+1<<" is:"<<temp<<endl;
        s.pop();
        s.push(temp+"0");
        s.push(temp+"1");
    
    }
    

   return 0;
}