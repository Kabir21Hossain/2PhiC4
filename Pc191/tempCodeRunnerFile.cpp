#include<bits/stdc++.h>
using namespace std;
class linked_list{
         public:
            int a;
            linked_list* next;

      linked_list()
      {
         a=0;
         next=NULL;
      }
      linked_list(int x):a(x),next(NULL){}


};
int main()
{
   linked_list *newnode,*temp,*head=NULL;
   int n;
   cin>>n;
   for(int i=0;i<n;i++)
   {
      newnode =new linked_list;
      
      cin>>newnode->a;
      

      
      if(head==NULL)
      {
         head=newnode;
         temp=head;

      }
      else 
      {
         temp->next=newnode;
         temp=temp->next;


      }
   }



temp=head;

  while(temp!=NULL)
  {
    cout<<temp->a<<" ";
    temp=temp->next;

  }
temp=head;
while(temp!=NULL)
{
   linked_list * a=temp;
   delete a;
   temp=temp->next;

}
cout<<endl;
linked_list * temp=head;

 while(temp!=NULL)
  {
    cout<<temp->a<<" ";
    temp=temp->next;

  }


    
return 0;
}