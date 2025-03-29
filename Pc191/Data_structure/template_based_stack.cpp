#include<bits/stdc++.h>
using namespace std;
// using dynamic array
template<class t>
class Stack
{
    private:
        t *st;
        int sz;
        int cap;
    
    public:
    Stack()
    {
        st=new t[1];
        sz=0;
        cap=1;
        
    }
    void increase_cap()
    {
        cap=cap*2;
        t * temp=new t[cap];
        for(int i=0;i<sz;i++)
        {
            temp[i]=st[i];

        }
        delete []st;
        st=temp;

    }


    void push(t value)
    {
        if(sz>=cap)
        {
            increase_cap();

        }
        st[sz++]=value;


    }
    void pop()
    {
        if(sz<0)
        {
            cout<<" underflow"<<endl;
            return;

        }

        sz--;


        
    }

    t top()
    {
        if(sz<=0)
        {
          cout<<" Error"<<endl;
        }
        return st[sz-1];

    }

    ~Stack()
    {
        delete[] st;

    }

};


int main()
{

    Stack<int> s;
    s.push(34);
    s.push(45);
    s.push(10);
    s.push(345);
    s.push(567);
    cout<<s.top()<<endl;
    s.pop();
    cout<<s.top()<<endl;

    Stack<char>st;
    st.push('a');
    cout<<st.top()<<endl;
    st.push('b');
    cout<<st.top()<<endl;
    st.push('i');
    cout<<char(st.top())<<endl;
    st.push('r');
    cout<<st.top()<<endl;
    st.push('k');
    cout<<st.top()<<endl;
    st.push('u');
    cout<<st.top()<<endl;
    
    return 0;
}