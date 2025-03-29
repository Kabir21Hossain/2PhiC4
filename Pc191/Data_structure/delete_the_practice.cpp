#include<bits/stdc++.h>
using namespace std;

class node
{
    public:
         node * right;
         node * left;
         int value;
         //int id;
         node *parent;

};

class tree
{
    private:
        
    
    public:
    node * root;
        tree()
        {
            root=nullptr;

        }

        node * createNode(int x)
        {
            node * newnode=new node;
            newnode->parent=nullptr;
            newnode->left=nullptr;
            newnode->right=nullptr;
            newnode->value=x;
            return newnode;
        }
        
        void insert(int x)
        {
            node *temp= createNode(x);
            if(root==nullptr)
            {
                root=temp;
                return;

            }

            queue<node *>q;
            q.push(root);
            while(!q.empty())
            {
                node * t=q.front();
                q.pop();

                if(t->left!=nullptr)
                {
                    q.push(t->left);

                }
                else 
                {
                    t->left=temp;
                    temp->parent=t;
                    return;
                }

                if(t->right!=nullptr)
                {
                    q.push(t->right);

                }
                else 
                {
                    t->right=temp;
                    temp->parent=t;
                    return;
                }
            }

        }


        void print()
        {
            if(root==nullptr)
            return;

            queue<node *>q;
            q.push(root);
            while(!q.empty())
            {   int p=-1,r=-1,l=-1;

                node * temp=q.front();
                q.pop();
                if(temp->left!=nullptr)
                {
                    l=temp->left->value;
                    q.push(temp->left);

                }
                if(temp->right!=nullptr)
                {
                    r=temp->right->value;
                    q.push(temp->right);

                }
                if(temp->parent!=nullptr)
                {
                    p=temp->parent->value;

                }

                cout<<"parent: "<<p<<" value:"<<temp->value<<" left_child: "<<l<<" right_child:"<<r<<endl;

            }
        }

        // int search(int x,node *a)
        // {
        //     if(a==nullptr)
        //     return -1;

        //     if(a->value==x)
        //     return 1;

        //     int b=search(x,a->left);
        //     if(b==1)
        //     return b;

        //     int c=search(x,a->right);
        //     if(c==1)
        //     return c;

        //     return -1;


        // }
        
        int search(int x)
        {
            if(root==nullptr)
            return -1;

            queue<node * >q;
            q.push(root);
            while(!q.empty())
            {
                node * temp=q.front();
                q.pop();


                if(temp->value==x)
                return 1;

                 if(temp->left!=nullptr)
                {
                    q.push(temp->left);

                }

                if(temp->right!=nullptr)
                {
                    q.push(temp->right);

                }
                


            }

            return -1;
        }
        void del(node *a)
        {
            if(a==nullptr)
            {
                return;
            }

            del(a->left);
            del(a->right);
            delete a;

        }

        ~tree()

        {
            del(root);

        }


};

int main()
{
    tree t;
    t.insert(34);
    t.insert(89);
    t.insert(1100);
    t.insert(2300);
    t.insert(17);
    t.insert(24);
    t.insert(16);
    t.insert(15);
    t.print();
//    int a= t.search(17,t.root);
//    cout<<a<<endl;
//    cout<<t.search(89,t.root)<<endl;
//    cout<<t.search(23438,t.root)<<endl;

int a=t.search(34);

if(a==1)
{
    cout<<"found\n";

}  

else 
cout<<"not found\n";


int y=t.search(346);
if(y==1)
cout<<"found\n";
else cout<<" not found\n";



    return 0;
}
   