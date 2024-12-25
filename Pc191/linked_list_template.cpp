#include<bits/stdc++.h>
using namespace std;
template<class type>

class node{
        public:
            type data;
            node* next;

};
template<class type>

class linked_list{
    private:
        node<type>* head;
        int sz;
    public:

        linked_list()
        {
            head=NULL;
            sz=0;
        }

    node<type> * createNode(type value)
    {
        node<type>* a=new node<type>();
        
        a->next=NULL;
        a->data=value;
        sz++;

        return a;
        
        
    }

    void insertAtHead(type value)
    {
        node<type>*a= createNode(value);
        if(head==NULL)
        {
            head=a;
            

            return;

        }

        a->next=head;
        head=a;


    }

    void print()
    {
        node<type>* temp=head;
        while(temp!=NULL)
        {
            cout<<temp->data<<endl;
            temp=temp->next;
        }
        cout<<endl;

    }





};


int main()
{
    linked_list<int> l;
    l.insertAtHead(23);
    l.insertAtHead(34);
    l.insertAtHead(56);
    l.insertAtHead(78);
    l.print();

    linked_list<string>l1;
    l1.insertAtHead("MdKabirHossain");
    l1.insertAtHead("MdKabirHossain");

    l1.insertAtHead("MdKabirHossain");

    l1.insertAtHead("MdKabirHossain");
    l1.print();




    return 0;
}