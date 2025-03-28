#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        stack<char>st;
        cin>>n;
        string s;
        cin>>s;

        for(char c:s)
        {
           if(c==')')
           {
                if(st.empty() || st.top()==')')
                    st.push(c);
                else
                {
                    st.pop();

                }

           }
           else 
           {
                st.push(c);
           }

        }

       
            cout<<st.size()/2<<endl;

    }
   return 0;
}