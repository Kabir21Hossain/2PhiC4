#include<bits/stdc++.h>
using namespace std;
class node
{
    public:
         int data;
         node* next;
         node* prev;


};

class doubly
{
    public: 

    node * head;
    int sz;
    doubly()
    {
        head=NULL;
        sz=0;

    }

    node * createNode(int value)
    {
        node * newnode=new node;
        newnode->data=value;
        newnode->next=NULL;
        newnode->prev=NULL;
        return newnode;



    }

    void insert(int value)
    {
        node * a=createNode(value);
        sz++;

        if(head==NULL)
        {
            head=a;

        }
        else 
        {
            node * temp=head;
            while(temp->next!=NULL)
            {
                temp=temp->next;

            }
            temp->next=a;
            a->prev=temp;

        }

    }


    void insertAtHead(int value)
    {
        node * a=createNode(value);
        if(head==NULL)
        {
            head=a;

        }
        else 
        {
            node * temp=head;
            a->next=temp;
            temp->prev=a;
            head=a;

        }
        sz++;
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

   
    void insertAtany(int index,int value)
    {
        int i=0;
        node* temp=head;
        if(index<0 || index>sz )
        return ;

        if(index==0)
        {
            insertAtHead(value);
            
            return;

        }
        if(index==sz)
        {
            insert(value);
            
            return;
        }

        while(i!=index-1)
        {
            temp=temp->next;
            i++;

        }
        node * a=new node;
        a=createNode(value);
        a->next=temp->next;
        temp->next->prev=a;
        a->prev=temp;
        temp->next=a;
        sz++; 
    }


    // delete at head
  void  deleteAtHead()
   {
    if (head==NULL)
    return;
        node* temp=head;
        head=temp->next;
        head->prev=NULL;
        delete temp;
        sz--;

   }

   void deleteAtany(int index)
   {
        if(index<0 || index>sz)
        {
            return;
        }
        if(index==0)
        {
            deleteAtHead();
            sz--;
            return;
        }

        int i=0;
        node* temp=head;
        while(i!=index)
        {
            temp=temp->next;
            i++;

        }
        temp->prev->next=temp->next;
        temp->next->prev=temp->prev;
        delete temp;
        sz--;


   }

  void reversePrint()
  {
    node * temp=head;
    
    while(temp->next!=NULL)
    {
        temp=temp->next;

    }

    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->prev;

    }
    cout<<endl;

  }

    void reverse()
    {
        node* temp=head;
        int curr_index=0;
        while(curr_index!=sz-1)
        {
            temp=temp->next;

            curr_index++;
        }
        node * a=head;
        while(a!=NULL)
        {
            swap(a->prev,a->next);
            a=a->prev;

        }
        head=temp;

    }

    int len()
    {
        return sz;
    }

    ~ doubly()
    {
        delete head;
    }

};

int main()
{
    doubly l;
    l.insert(45);
    l.insert(100);
     l.insert(450);
    l.insert(1000);
     l.insertAtHead(4);
    l.insertAtHead(10);
    l.print();
    l.insertAtany(4,8900);
    l.print();
    l.insertAtany(0,200);
    l.print();
    l.insertAtany(l.sz,10000);
    l.print();
    cout<<endl<<l.sz<<endl;
    l.deleteAtHead();
    l.print();
     cout<<endl<<l.sz<<endl;
     l.deleteAtHead();
    l.print();
     cout<<endl<<l.sz<<endl;
     l.deleteAtHead();
    l.print();
     cout<<endl<<l.sz<<endl;
     l.insert(23);
     l.insert(45);
     l.print();

     cout<<"After deletion:";
     l.deleteAtany(4);
     l.print();
     l.reversePrint();
     l.reverse();
     l.print();







   return 0;
}