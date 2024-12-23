#include<bits/stdc++.h>
using namespace std;
class node
{
    public:
        int data;
        node* next;

};

class Stack{
    private:
        node * head;
        int sz;
    public:

        Stack()
        {
            head=NULL;
            sz=0;

        }

        node * createNode(int value)
        {
            node * newnode=new node();
            newnode->data=value;
            newnode->next=NULL;
            
            
         }

         void insertAthead(int value)
         {
            node *a=createNode(value);
            if(head==NULL)
            {
                head=a;
                
                return;

            }

            a->next=head;
            head=a;
         }

         void push(int value)
         {
            insertAthead(value);
            sz++;
         }
         
        void deleteAtHead()
        {
            node*temp=head;
            head=temp->next;
            delete temp;

        }

        void pop()
        {
            deleteAtHead();
            sz--;
        }

        int top()
        {
            return head->data;
        }

    int len()
    {
        return sz;

    }

    void print()
    {
        node * temp=head;
        while(temp!=NULL)
        {
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<endl;
        
    }

    ~Stack()
    {
        delete head;

    }
};
int main()
{
    Stack s;
    s.push(56);
    s.push(46);
    s.push(6);
    s.push(34);
    s.push(99);
    s.print();
    cout<<"size:"<<s.len()<<endl;
    cout<<"top:"<<s.top()<<endl;
    s.pop();
    s.pop();
    s.print();




   return 0;
}