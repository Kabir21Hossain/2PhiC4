#include<bits/stdc++.h>
using namespace std;
int main()
{
    string n;
    cin>>n;
    while(!n.empty())
    {
        if(n.size()>3 && n.substr(n.size()-3)=="144")
        {
            n.erase(n.size()-3);

        }
        else if(n.size()>=2 && n.substr(n.size()-2)=="14")
        n.erase(n.size()-2);

        else if(n.size()>1 && n.back()=='1')
        {
            n.pop_back();

        }
        else 
        {
            cout<<"NO";
            return 0;
        }
    }

    cout<<"YES";
    
   return 0;
}