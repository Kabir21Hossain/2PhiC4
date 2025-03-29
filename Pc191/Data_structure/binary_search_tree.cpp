#include<bits/stdc++.h>
using namespace std;
class node{
    public:
        node * left;
        node * right;
        int value;

};
class bst{
    private:
        node * root;
    public:

        bst():root(nullptr){}

        node * createNode(int x)
        {
            node * newnode=new node;
            newnode->left=nullptr;
            newnode->right=nullptr;
            newnode->value=x;

            return newnode;

        }

        // void insert(int x)
        // {
        //     node * a=createNode(x);
        //     if(root==nullptr)
        //     {
        //         root=a;
        //         return;
        //     }

        //     queue<node * >q;
        //     q.push(root);
        //     while(!q.empty())
        //     {
        //         node * temp= q.front();
        //         q.pop();
        //         if(x<temp->value)
        //         {
        //             if(temp->left!=nullptr)
        //             {
        //                 q.push(temp->left);
                    
        //             }
        //             else 
        //             {
        //                 temp->left=a;
        //                 return;
                        
        //             }


        //         }

        //         else 
        //         {
        //             if(temp->right!=nullptr)
        //             {
        //                 q.push(temp->right);

        //             }
        //             else 
        //             {
        //                 temp->right=a;
        //                 return;
        //             }
        //         }
        //     }

        // }

        void insert(int value)
        {
            node * a=createNode(value);

            if(root==nullptr)
            {
                root=a;
                return;
            }

            node * cur,*prev;
            cur=root;
            prev=nullptr;

            while(cur!=nullptr)
            {
                if(value<cur->value)
                {
                    prev=cur;
                    cur=cur->left;

                }
                else 
                {
                    prev=cur;
                    cur=cur->right;

                }

            }

            if(value>=prev->value)
            {
                prev->right=a;
            }
            else
            prev->left=a;

        }

    void print()
    {
        if(root==nullptr)
        return;
        queue<node * >q;
        q.push(root);
        while(!q.empty())
        {
            node * temp=q.front();
            q.pop();
            int r=-1,l=-1;

            if(temp->left!=nullptr)
            {
                l=temp->left->value;
                q.push(temp->left);
                
            }

            if(temp->right!=nullptr)
            {
                q.push(temp->right);
                r=temp->right->value;
            }

            cout<<" value: "<<temp->value<<" left:"<<l<<" right:"<<r<<endl;




        }
    }
bool search(int x)
    {
        if(root==nullptr)
        return false;

        node * cur=root;
        while(cur!=nullptr)
        {
            if(x>cur->value)
            {
                cur=cur->right;
            }
            else if(x<cur->value)
            {
                cur=cur->left;

            }

            else return true;
        }
         return false;
  
    }

     void Delete(int x)
     {
        if(root==nullptr)
        return;

       
        node * prev=nullptr;
        node * cur=root;
        while(cur!=nullptr)
        {
            if(x>cur->value)
            {
                prev=cur;
                cur=cur->right;

            }
            else if(x<cur->value)
            {
                prev=cur;
                cur=cur->left;

            }

            else 
                break;
        }

 // case 1: no child node to be deleted

        if(cur->left==nullptr && cur->right==nullptr)
        {
                if(x<prev->value)
                {
                    delete cur;
                    prev->left=nullptr;
                    return;
                }
                else{
                    delete cur;
                    prev->right=nullptr;

                }
        }

// case 2: one child node to be deleted

    if(cur->left!=nullptr && cur->right==nullptr)
    {
        if(x<prev->value)
        {
            prev->left=cur->left;
            delete cur;
            return;
        }
        else 
        {
            prev->right=cur->left;
            delete cur;
            return;
        }
    }


    if(cur->left==nullptr && cur->right!=nullptr)
    {
        if(x<prev->value)
        {
            prev->left=cur->right;
            delete cur;
            return;
        }

        else 
        {
            prev->right=cur->right;
            delete cur;
            return;
        }
    }


    // 3rd case: two children node to be deleted;

    node * t=cur->right;
    node * pt=cur;
    while(t->left!=nullptr)
    {
        pt=t;
        t=t->left;

    }
    cur->value=t->value;
    if(t->value<pt->value)
    {
        pt->left=nullptr;
        delete t;

    }

    else 
    {
        pt->right=nullptr;
        delete t;

    }

     }

    void dfs(node *a)
    {
        if(a==nullptr)
        return;

        dfs(a->left);
        dfs(a->right);
        delete a;


    }
    ~bst()
    {
        dfs(root);
    }

    
};


int main()
{
    int n;
    bst t;
    
    cout<<" how many nodes do you want?\n";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        t.insert(a);

    }
   // cout<<t.search(45)<<endl;
   //t.Delete(14);
   //t.Delete(75);
   t.Delete(60);

    t.print();

   return 0;
}