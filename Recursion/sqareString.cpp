#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        bool sq=true;
        string s;
        cin>>s;

        int l=s.size();
        if(l%2!=0)
        {
            sq=false;
        }

        else 
        {
            int i=0;
            int j=l/2;
    
            while( i<l/2 && j<l)
            {
                if(s[i]!=s[j])
                    {
                        sq=false;
                        break;
                    }
            
                i++;
                j++;
                
            }
    
        }

        
        if(sq)
        {
            cout<<"YES\n";

        }
        else
        cout<<"NO\n";
    }
    

   return 0;
}