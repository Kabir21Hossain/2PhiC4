#include<bits/stdc++.h>
using namespace std;
class node
{
    public:
    int value;
    node * parent;
    node * left;
    node * right;

};
class bst
{
    private:
            node*root;
    public:

            bst()
            {
                root=nullptr;
            }

            ~bst()
            {
                delete root;

            }

            // create new node

            node * createNewnode(int value)
            {
                node * a=new node;
                a->parent=nullptr;
                a->value=value;
                a->left=nullptr;
                a->right=nullptr;
                return a;

            }

            // insert

            void insert(int value)
            {
                node * a=createNewnode(value);
                if(root==nullptr)
                {
                    root=a;
                    return;
                }

                node * prev=nullptr;
                node * cur=root;
                while(cur!=nullptr)
                {
                    if(value>=cur->value)
                    {
                        prev=cur;
                        cur=cur->right;

                    }
                    else 
                    {
                        prev=cur;
                        cur=cur->left;

                    }
                }

                if(value>=prev->value)
                {
                    prev->right=a;
                    a->parent=prev;
                    
                }
                else 
                {
                    prev->left=a;
                    a->parent=prev;

                }

            }


            void BFS()
            {
                if(root==nullptr)
                return;

                queue<node *>q;
                q.push(root);
                node * a=new node;
                while(!q.empty())
                {
                    a=q.front();
                    q.pop();

                    int p=-1,r=-1,l=-1;

                    if(a->left!=nullptr)
                    {
                        l=a->left->value;
                        q.push(a->left);

                    }
                    if(a->right!=nullptr)
                    {
                        r=a->right->value;
                        q.push(a->right);
                    }

                    if(a->parent!=nullptr)
                    {
                        p=a->parent->value;
                    }


                    cout<<"parent: "<<p<< " value: "<<a->value<<" left_child:"<<l<<"  right_child:"<<r<<endl;

                }
                

            }

        
        int search(int value)
        {
            if(root==nullptr)
            return 0;

            node* cur=root;
            while(cur!=nullptr)
            {
                if(value>cur->value)
                {
                    cur=cur->right;

                }
                else if(value<cur->value)
                {
                    cur=cur->left;
                }

                else 
                {
                    return 1;
                }
            }

        }




            

    
};
int main()
{
    bst b;
    b.insert(3);
    b.insert(2);
    b.insert(23);
    b.insert(20);
    b.insert(45);
    b.insert(2);
    b.insert(200);
    b.insert(6);
    b.insert(5);
    b.BFS();
    cout<<endl<<b.search(3)<<endl;
    cout<<b.search(2340);
    

   return 0;
}