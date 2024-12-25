#include<bits/stdc++.h>
using namespace std;
template<class t>
class node
{
    public:
        t data;
        node* next;
        node * prev;

};
template<class t>
class linked_list
{
    private:
         node<t>* head;
         int sz;
    public:

        linked_list()
        {
            head=NULL;
            sz=0;

        }
    node<t> * createNode(t value)
    {
        node<t> * a=new node<t>;
        a->next=NULL;
        a->prev=NULL;
        a->data=value;

        return a;

    }

        void insertAtHead(t value)
        {
            node<t>*a=createNode(value);
            if(head==NULL)
            {
                head=a;
                return;

            }

            node<t> * temp=head;
            a->next=head;
            head->prev=a;
            head=a;

 
        }
        void deleteAtHead()
        {
            if(head==NULL)
            return;

            node<t>* temp=head;
            head=temp->next;
            temp->next->prev=NULL;
            delete temp;

        }

        void push(t value)
        {
            insertAtHead(value);
            sz++;

        }
        void pop()
        {
            deleteAtHead();
            sz--;
        }
        void  top()
        {
            cout<<head->data<<" ";
        }

        ~linked_list()
        {
            node<t>*temp=head;
            while(temp!=NULL)
            {
                deleteAtHead();
                temp=head;

            }

        }


};
int main()
{
    linked_list<int> l;
    l.insertAtHead(145);
    //l.top();
    l.insertAtHead(45);
    //l.top();
    l.insertAtHead(340);
    //l.top();
    l.insertAtHead(4);
    //l.top();
    l.insertAtHead(3);
    //l.top();
    l.insertAtHead(33);
    l.top();
    l.pop();
    l.top();

    linked_list<char>ch;
    ch.insertAtHead('q');
    ch.top();
    


   return 0;
}