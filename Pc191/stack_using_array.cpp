#include<bits/stdc++.h>
using namespace std;
#define max_sz 100
class Stack{
    private:
        int st[max_sz]={0};
        int sz;
    
    public:

      // constructor

        Stack()
        {
            sz=0;
        }

        void push(int value)
        {
            if(sz>max_sz-1)
            {
                cout<<"overflow"<<endl;
                return;

            }

            st[sz++]=value;

        }

        void pop()
        {
            if(sz==0)
            {
                cout<<"Underflow"<<endl;
                return;

            }

            sz--;

        }

        int  top()
        {

            return st[sz-1];

        }

        void print()
        {
            for(int i=sz-1;i>=0;i--)
            {
                cout<<st[i]<<" ";
            }
            cout<<endl;
        }


};
int main()
{
    Stack s;
    s.push(100);
    s.push(45);
    s.push(43);
    s.push(36);
    s.push(99);
    s.push(100);
    s.print();
    s.pop();
    s.print();
    s.pop();
    s.print();
    cout<<s.top()<<endl;
    

    


   return 0;
}