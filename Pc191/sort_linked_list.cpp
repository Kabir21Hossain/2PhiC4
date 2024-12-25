#include<bits/stdc++.h>
using namespace std;
class node
{
    public:
        int data;
         node * next;
};

class linked_list
{
    public:
        node * head;
        // constructor
        linked_list()
        {
            head=NULL;
            
        }

        // create a newnode

        node * createNode(int value)
        {
            node * newnode=new node;
            newnode->data=value;
            newnode->next=NULL;


            return newnode;


        }

        // insertion at head
        
        void insertAtHead(int value)
        {
            node * a=createNode(value);
            
            // if(head!=NULL)
            // {
                a->next=head;
                head=a;


            // }
            // else 

        }

        // printing

        void print()
        {
            if(head!=NULL)
            {
                node* temp=head;
                while(temp!=NULL)
                {
                    cout<<temp->data<<" ";
                    temp=temp->next;
                }
            

            }

            else return;

                cout<<endl;
        }

        // implementing linear search

        int linear_src(int value)
        {
            int index=0;
            node * temp=head;
            while(temp!=NULL)
            {
                if(temp->data==value)
                {
                    return index;
                }
                
                index++;
                temp=temp->next;

            }
            return -1;
        }



        // all possible values

        void searchAll(int value)
        {
            node* temp=head;
            int index=0;
            while(temp!=NULL)
            {
                if(temp->data==value)
                cout<<" found at"<<index<<endl;

                index++;
                temp=temp->next;

            }
        }


    // length

    int len()
    {
        node * temp=head;
        int s=0;
        while(temp!=NULL)
        {
            s++;
            temp=temp->next;

        }
        return s;

    }


    // insert at any position


    void insertAtAny(int index,int value)
    {
        int i=0;

        if(index==0)
        {
            insertAtHead(value);
        }

        else 
        {
            node * temp=head;
            while(i!=index-1 || i<len()-1)
            {
                temp=temp->next;
                i++;

            }

            node * a=createNode(value);
                a->next=temp->next;
                temp->next=a;


        }
    }

    // delete head

    void deleteHead()
    {
        if(head==NULL)
        return;
        node* temp=head;
        head=head->next;
        delete temp;

    }


        // delete at any

        void deleteAtAny(int index)
        {
            int i=0;
            if(index==0)
            {
                deleteHead();

            }
            else 
            {
                node* temp=head;
                while(i!=index-1 || i<len()-1)
                {
                    temp=temp->next;
                    i++;

                }
                node * a=temp->next;
                temp->next=a->next;
                delete a;

            }
        }
// selection sort O(n*n)
        void Sort()
        {
            node * a=head;

            while(a!=NULL)
            {
                node * tmp=a;
                node * mini=a;

                while(tmp!=NULL)
                {
                    if(tmp->data<mini->data)
                    {
                        mini=tmp;

                    }
                    tmp=tmp->next;
                
                }

                swap(mini->data,a->data);
                a=a->next;


            }
        }

        ~ linked_list()
        {
            delete head;

        }
    

};



int main()
{
    linked_list l;
    l.insertAtHead(30);
    l.print();
    l.insertAtHead(49);
    l.print();
    l.insertAtHead(200);
    l.print();
    l.insertAtHead(30);
    l.print();
    l.insertAtHead(480);
    l.print();
    l.insertAtHead(10);
    l.print();
    //cout<<"found at:"<<l.linear_src(30)<<endl;
    //l.searchAll(30);

    // //cout<<"\nlength of this linked list:"<< l.len()<<endl;
    // cout<<"after insertions at index 3\n";

    // l.insertAtAny(3,1000);
    // l.print();
    // cout<<"after insertions at index 0\n";
    // l.insertAtAny(0,78);
    // l.print();
    // cout<<"After delete the head\n";

    // l.deleteHead();
    // l.print();
    // l.deleteAtAny(4);
    // l.deleteAtAny(5);
    // l.print();
    l.Sort();
    l.print();














    return 0;
}