#include<bits/stdc++.h>
using namespace std;
int conversion(string postfix)
{
    stack<int>st;
    for(int i=0;i<postfix.size();i++)
    {
        char ch=postfix[i];
        if(isdigit(ch))
        {
            st.push(ch-'0');

        }
        else 
        {
            int operand1=st.top();
            st.pop();
            int operand2=st.top();
            st.pop();
            if(ch=='+')
            {
                st.push(operand1+operand2);

            }
             else if(ch=='-')
            {
                st.push(operand2-operand1);
                
            }
            else if(ch=='*')
            {
                st.push(operand2*operand1);
                
            }
           else  if(ch=='/')
            {
                st.push(operand2/operand1);
                
            }
        }
    }

    return st.top();


}
int main()
{
    string postfix;
    cout<<"Enter postfix Expression:";
    cin>>postfix;
    
    int result=conversion(postfix);
    cout<<"evaluated value:"<<result<<endl;
    
   return 0;
}