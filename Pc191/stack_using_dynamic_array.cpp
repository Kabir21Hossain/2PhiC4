#include<bits/stdc++.h>
using namespace std;
class Stack
{       
    private:
        int sz;
        int * st;
        int array_cap;
    public:

        Stack()
        {
            sz=0;
            st=new int[1];
            array_cap=1;
        }

    void increase_cap()
    {
       int *temp=new int[array_cap*2];
       for(int i=0;i<sz;i++)
       {
        temp[i]=st[i];
       }
       delete []st;
       st=temp;
       
       array_cap*=2;


    }

    void push(int value)
    {
        if(sz+1>array_cap)
        {
            increase_cap();

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

    int top()
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

~Stack()
{
    delete []st;

}

};
int main()
{
    Stack s;
    s.push(20);
    s.push(34);
    s.push(20);
    s.push(29);
    s.push(23);
    s.print();
    s.pop();
    s.print();
    cout<<s.top();
    


   return 0;
}