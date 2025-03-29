#include<bits/stdc++.h>
using namespace std;
void validity_checker(string &s,stack<char>&st)
{
        //O(n)
        for(int i=0;i<s.size();i++)
        {
            char ch=s[i];
            if(ch=='(' || ch=='{' || ch=='[')
            st.push(ch);
            else
            {
                if(st.empty())
                {
                    cout<<"invalid\n";
                    return;
                }

                else if(st.top()=='(' && ch==')')
                {
                    st.pop();

                }
                else if(st.top()=='{' && ch=='}')
                {
                    st.pop();
                    
                }
                else if(st.top()=='[' && ch==']')
                {
                    st.pop();
                    
                }
                else 
                {
                    cout<<"invalid\n";
                    return ;

                }


            }

        }
        if(st.empty())
        {
            cout<<"valid\n";

        }
        else 
        {
            cout<<"invalid\n";

        }
}
int main()
{
    string s;
    cin>>s;
    stack<char>st;
    // for(int i=0;i<s.size();i++)
    // {
    //         char ch=s[i];
    //         if(ch=='(' || ch=='{' || ch=='[')
    //         {
    //             st.push(ch);

    //         }
    //         else 
    //         {
    //             if(st.empty())
    //             {
    //                 cout<<"Invalid \n";
    //                 return 0;

    //             }

    //             else if(st.top()=='(' && ch==')')
    //             {
    //                 st.pop();
    //             }

    //             else if(st.top()=='{' && ch=='}')
    //             {
    //                 st.pop();
    //             }

    //             else if(st.top()=='[' && ch==']')
    //             {
    //                 st.pop();
    //             }

    //             else
    //             {
    //                 cout<<"invalid\n";
    //                 return 0;
                    
    //             }
                

    //         }

    // }

    // if(st.empty())
    // {
    //     cout<<"valid\n";

    // }
    // else 
    // {
    //     cout<<"Invalid\n";
        
    // }

   validity_checker(s,st);
   

   return 0;
}