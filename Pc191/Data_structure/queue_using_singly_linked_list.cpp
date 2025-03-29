#include<bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node * next;
};

class Queue
{
private:
    node * head;
    node *tail;
    int sz;

public:

    Queue()
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
        
        return temp;

    }

    void insertAtTail(int value)
    {
        node *a=createNode(value);
        if(tail==NULL && head==NULL)
        {
            tail=a;
            head=a;
            sz++;
            return;
        }

        tail->next=a;
        tail=a;

        sz++;
        
    }

    void deleteAtHead()
    {
        if(sz==0)
        {cout<<"Empty\n";return;}
        node * temp=head->next;
        delete head;
        head=temp;
        sz--;
        
    }

    int front()
    {
        return head->data;

    }
    
    int back()
    {
        return tail->data;
    }

    

    void enqueue(int value)
    {
        insertAtTail(value);
    }

    void dequeue()
    {
        deleteAtHead();

    }


    int len()
    {
        return sz;
    }
    ~Queue()
    {
        while(head!=NULL)
        {
            deleteAtHead();
        }
    }


};


int main()
{
    Queue q;
    q.enqueue(45);
    q.enqueue(23);
    q.enqueue(-2);
    q.enqueue(82);
    q.enqueue(232);
    cout<<"front:"<<q.front()<<endl;
    cout<<"back:"<<q.back()<<endl;
    cout<<endl<<"size:"<<q.len()<<endl;
    q.dequeue();
    q.dequeue();
    q.dequeue();
    q.dequeue();
    q.dequeue();
    q.dequeue();
    q.dequeue();



   return 0;
}