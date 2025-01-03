#include<bits/stdc++.h>
using namespace std;
template<class t>
class node 
{   
    public:
        t data;
        node * next;
};

template<class t>
class Stack
{
    private:
        node<t>* head;
        int sz;
        
    public:
        

        Stack()
        {
            head=NULL;
            sz=0;

        }

        node<t> * createNode(t value)
        {
            node<t>* a=new node<t>();
            a->next=NULL;
            a->data=value;
            sz++;
            return a;

        }

        void insertAtHead(t value)
        {
            node<t>* a=createNode(value);
            if(head==NULL)
            {
                head=a;
                return;
            }

            a->next=head;
            head=a;

        }

        void deleteAtHead()
        {
            if(head==NULL)
            return;
            node<t>* temp=head;
            temp=temp->next;
            delete head;
            head=temp;
            sz--;

        }

        t top()
        {
            if(head==NULL)
            return;
            return head->data;

        }
        void push(t value)
        {
            insertAtHead(value);

        }

        void pop()
        {
            deleteAtHead();

        }

        void print()
        {
            node<t>* temp=head;
            while(temp!=NULL)
            {
                cout<<temp->data<<endl;
                temp=temp->next;

            }
        }


        int getsize()
        {
            return sz;

        }


    ~Stack()
    {
        while(head!=NULL)
        {
            deleteAtHead();

        }
    }



};

int main()
{
    Stack<int>s1;
    s1.push(44);
    s1.push(340);
    s1.push(440);
    s1.push(304);
    s1.push(4);
    s1.push(3);
    s1.push(14);
    s1.push(2);
    //s1.print();
    cout<<"after sorting\n";

    // linked_list<char>l2;
    // l2.push('k');
    // l2.push('a');
    // l2.push('b');
    // l2.push('i');
    // l2.push('r');
    // l2.print();


   // linked_list<int>l2;

    // while(l1.getsize()!=0)
    // {
    //     l2.push(l1.top());
    //     l1.pop();

    // }
    // swap(l1,l2);
    // l1.print();

    Stack<int>temp;

    while(s1.getsize()>0)
    {   
         int a=s1.top();
         s1.pop();

        while(temp.getsize()>0)
        {
           
            if(a>temp.top())
            break;
            else 
            {
                
                s1.push(temp.top());
                temp.pop();
            }
        }
        temp.push(a);
       

    }
    swap(temp,s1);

    s1.print();


    



    

    

   return 0;
}