#include<bits/stdc++.h>
using namespace std;
class node
{   
    public:
        int data;
        node * left;
        node * right;

        node(int data)
        {
            this->data=data;
            left=nullptr;
            right=nullptr;

        }

};

class binary_tree
{
    private:
        node * root;

    
    void insert(node *& current,int data)
    {
        if(current==nullptr)
        {
            current=new node(data);

        }

        else if(data<current->data)
        {
            insert(current->left,data);

        }
        else
        {
            insert(current->right,data);

        }

    }

    void print(node * n)
    {
        if(n!=nullptr)
        {
            print(n->left);
            cout<<n->data<<" ";
            print(n->right);

        }
    }

    public:

        binary_tree()
        {
            root=nullptr;

        }

        void insert(int data)
        {
            insert(root,data);

        }

        void printTree()
        {
            print(root);
        }
};

int main()
{
    binary_tree t;
    t.insert(45);
    t.insert(34);
    t.insert(234);
    t.insert(3);
    t.printTree();
    
   return 0;
}