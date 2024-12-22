#include<bits/stdc++.h>
using namespace std;
class node{
    public:
        int data;
        node* next; 

};

class linked_list{
        public:

            node* head;
            node * tail;
            linked_list()
            {
                head=NULL;
            }

            node * createNode(int value)
            {
                node * newnode= new node;
                newnode->data=value;
                newnode->next=NULL;
               

                return newnode;

            }

            void insertAtHead(int x)
            { 
                node * a=createNode(x);
                if(head==NULL)
                {
                    head=a;

                }
                else 
                {
                    a->next=head;
                    head=a;

                }
            }

            void traverse()
            {
                node * temp=head;
                while(temp!=NULL)
                {
                    cout<<temp->data<<" ";
                    temp=temp->next;

                }
                cout<<endl;

            }

            int search(int value)
            {
                node * temp=head;
                int index=0;
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

            void searchAll(int value)
            {
                 node * temp=head;
                int index=0;
                while(temp!=NULL)
                {
                    if(temp->data==value)
                    {
                        cout<<value<<" found at :"<<index<<" ";
                        cout<<endl;
                    }
                    index++;
                    temp=temp->next;


                }
                return ;
            }

            void insert(int value)
            {
                node * a= createNode(value);
                node * tail;
                node * temp=head;
                while(temp!=NULL)
                {
                    tail=temp;
                    temp=temp->next;

                }
              
              tail->next=a;
              tail=a;

            
            }

            int len()
            {
                int s=0;
                node *temp=head;

                while(temp!=NULL)
                {
                    s++;
                    temp=temp->next;

                }
                return s;

            }

        void insertAtAny(int index,int value)
        {
            if(index==0)
            {
                insertAtHead(value);

            }

            else 
            {
                node * a=createNode(value);
                node * temp=head;
                int i=0;
                while(i!=index-1)
                {
                    temp=temp->next;
                    i++;


                }
                a->next=temp->next;
                temp->next=a;


            }


        
        }

        void deleteHead()
        {
            if(head==NULL)
            return;

            node * temp=head;
            head=temp->next;
            delete temp;
           
        
        }


        void deleteAtAny(int index)
        {
            if(index<0 || index>len()-1)
            return;
            
            if(index==0)
            {
                deleteHead();
            }
            
            int i=0;
            node * temp=head;
            while(i!=index-1)
            {
                i++;
                temp=temp->next;


            }
            node* a=temp->next;

            temp->next=a->next;
            delete a;
        }

        // insert after some value
        void insertAfterValue(int value,int m)
        {
            node* temp=head;
            while(temp!=NULL)
            {
                if(value==temp->data)
                {
                    break;
                }
                temp=temp->next;

            }

            if(temp==NULL)
            {
                cout<<"value Doesn't exist"<<endl;
                return;
            }
            node * a=createNode(m);
            a->next=temp->next;
            temp->next=a;

            
        }

        // reverse print

        // void reversePrint()
        // {
        //     node * temp=head;
        //     stack<int>st;
        //     while(temp!=NULL)
        //     {
        //         st.push(temp->data);
        //         temp=temp->next;

        //     }

        //     while(st.size()>0)
        //     {
        //         cout<<st.top()<<" ";
        //         st.pop();
                
        //     }
        //     cout<<endl;

        // }

        void reversePrint(node * a)
        {
                if(a==NULL)
                return;

            reversePrint(a->next);
            cout<<a->data<<" ";

        }






        ~linked_list() 
        {
            delete head;
            delete tail;
        
        }

};
int main()
{

    linked_list l;
    l.insertAtHead(30);
    l.traverse();

    l.insertAtHead(33);
    l.traverse();

    l.insertAtHead(12);
    l.traverse();

    l.insertAtHead(30);
    l.traverse();
    l.insertAtHead(3);
    l.traverse();

    l.insertAtHead(30);
    l.traverse();

    l.searchAll(30);
    l.insert(5000);
    l.insert(3400);
    l.traverse();
    l.insertAtAny(4,-4);
    l.insertAtAny(0,199);
    l.traverse();
    l.deleteHead();
    l.traverse();
    l.deleteHead();
    l.traverse();
    cout<<"delete at index 5"<<endl;
    l.deleteAtAny(5);
    l.traverse();

    cout<<endl;
    l.insertAfterValue(30,399);
    l.traverse();
    l.insertAfterValue(45,45);
    l.traverse();
    l.reversePrint(l.head);



    cout<<"\n size:"<<l.len()<<endl;




    

   return 0;
}