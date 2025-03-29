#include<bits/stdc++.h>
using namespace std;

// class node{
//     public:

//         int data;
//         node* next;


// };

// class linkedlist{
//        public:
//         node* head;
//         linkedlist()
//         {
//             head=NULL;
//         }

//         // Insert new value at the head

//          node * Create_newnode(int value)
//          {
//             node * newnode=new node;
//             newnode->data=value;
//             newnode->next=NULL;
//             return newnode;
//          }

//         void insert_at_head(int value)
//         {
//             node * a=Create_newnode(value);
//             if(head==NULL)
//             {
//                 head=a;
//                 return;
//             }
//             else 
//             {
//                 a->next=head;
//                 head=a;


//             }
//         }
//         void traverse()
//         {
//             node * temp=head;
//             while(temp!=NULL)
//             {
//                 cout<<temp->data<<" ";
//                 temp=temp->next;

//             }
//             cout<<endl;

//         }
//          int searchDistinctvalue(int x)
//         {
//             int index=0;
//             node * temp=head;
//             while(temp!=NULL)
//             {   
//                 if(temp->data==x)
//                 return index;
//                 index++;
//                 temp=temp->next;
            
//             }
//             return -1;
//         }

//         void searchAllValue(int x)
//         {
//              int index=0;
//             node * temp=head;
//             while(temp!=NULL)
//             {   
//                 if(temp->data==x)
//                 cout<<x<<" is found at :"<<index<<endl;
//                 index++;
//                 temp=temp->next;
            
//             }
//         }

// };

class node{
    public:
        int data;
        node* next; 

};

class linked_list{
        public:

            node* head;
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


};

int main()
{
    // linkedlist l;
    // l.insert_at_head(45);

    // l.traverse();
    // l.insert_at_head(100);
    // l.traverse();
    // l.insert_at_head(12);
    // l.traverse();
    // l.insert_at_head(4);
    // l.traverse();
    // l.insert_at_head(4);
    // l.traverse();
    // l.insert_at_head(100);
    // l.traverse();
    // l.insert_at_head(4);
    // l.traverse();

    // int a=l.searchDistinctvalue(4);
    // cout<<"4 is found at :"<<a<<endl;
    // l.searchAllValue(4);

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




    
   

   



   return 0;
}