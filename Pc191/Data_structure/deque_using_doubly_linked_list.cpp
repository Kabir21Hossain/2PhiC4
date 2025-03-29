#include<bits/stdc++.h>
using namespace std;
class node
{
    public:
    int data;
    node* next;
    node*prev;

};

class Deque
{
    private:
        node * head;
        node * tail;
        int sz;
    
    public:
        Deque()
        {
            head=NULL;
            tail=NULL;
            sz=0;

        }


        node * createNode(int value)
        {
            node * temp=new node;
            temp->data=value;
            temp->next=NULL;
            temp->prev=NULL;
            return temp;

        }

        void insertAtHead(int value)
        {
            node * a=createNode(value);
            if(head==NULL)
            {
                head=a;
                tail=a;
            }
            else 
            {
               
                head->prev=a;
                a->next=head;
                head=a;

            }
            sz++;
        }

        void insertAtEnd(int value)
        {       
            
                node * a=createNode(value);
                if(tail==NULL)
                 {
                        tail=a;
                        head=a;
                        sz++;
                        return;
                }
                a->prev=tail;
                tail->next=a;
                tail=a;
                sz++;


                
        }


        void deleteAtEnd()
        {
            if(tail==NULL)
            {
                cout<<"Empty\n";
                return;
            }
             node * temp=tail;
             tail=tail->prev;
             tail->next=NULL;
             delete temp;
             sz--;

        }

    void deleteAtFront()
    {
         if(head==NULL)
            {
                cout<<"Empty\n";
                return;
            }
        node * temp=head;
        temp=head->next;
        temp->prev=NULL;
        delete head;
        head=temp;
        sz--;

    }
    void push_back(int value)
    {
        insertAtEnd(value);
    }

    void push_front(int value)
    {
        insertAtHead(value);

    }

    void pop_front()
    {
        deleteAtFront();

    }

    void pop_back()
    {
        deleteAtEnd();

    }

    int getLen()
    {
        return sz;

    }

    int front()
    {
        return head->data;
    }

    int back()
    {
        return tail->data;
    }
};
int main()
{
    Deque dq;
    dq.push_back(450);
    dq.push_back(5);
    dq.push_back(-9);
    dq.push_back(-5);
    dq.push_back(50);
    //cout<<dq.front()<<endl;
    dq.push_front(76);
     cout<<"front:"<<dq.front()<<" Back:"<<dq.back()<<endl;
     dq.pop_back();
     dq.pop_front();
     cout<<"front:"<<dq.front()<<" Back:"<<dq.back()<<endl;
     cout<<" size:"<<dq.getLen()<<endl;
     

   return 0;
}