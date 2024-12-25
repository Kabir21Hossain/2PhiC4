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
class linked_list
{
    private:
        node<t>* head;
        int sz;

    public:
    class errorr{};

        linked_list()
        {
            head=NULL;
            sz=0;
        }
      node<t>* createNode(t value)
        {
            node<t> * temp=new node<t>();
            temp->next=NULL;
            temp->data=value;
            sz++;
            return temp;

            
        }

        void insertAtHead(t value)
        {
            node<t> * temp=createNode(value);
            if(head==NULL)
            {
                head=temp;
                return;
            }

            temp->next=head;
            head=temp;

        }

        int getSize()
        {
            return sz;

        }
        void print()
        {
            node<t>* temp=head;
            while(temp!=NULL)
            {
                cout<<temp->data<<" ";
                temp=temp->next;

            }
            cout<<endl;
        }


    void deleteAtHead()
    {
        node<t>*temp;
        if(head==NULL)
        {
            return;
        }
        temp=head->next;
        delete head;
        head=temp;
    }

    ~linked_list()
    {
        while(head!=NULL)
        {
             deleteAtHead();
        }
      

    }




};
int main()
{
        linked_list<int> l1;
        l1.insertAtHead(45);
        l1.print();
        l1.insertAtHead(34);
        l1.print();
        l1.insertAtHead(450);
        l1.print();
        l1.insertAtHead(134);
        l1.print();
        l1.insertAtHead(4);
        l1.print();
        l1.insertAtHead(3);
        l1.print();
        l1.insertAtHead(405);
        l1.print();
        l1.insertAtHead(343);
        l1.print();

        linked_list<double>d;
        d.insertAtHead(34.5);
        d.print();
        

   return 0;
}