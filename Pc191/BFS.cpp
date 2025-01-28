#include<bits/stdc++.h>
using namespace std;
class node
{
    public:
        int id;
        node * left;
        node * right;
        node * parent;

};

class binary_tree
{
    private:
       
        node * allnode[6];
    
    public:
     node * root;
    binary_tree()
    {
        root =NULL;
    }

    node * createNode(int value)
    {
        node * newnode=new node;
        newnode->id=value;
        newnode->left=NULL;
        newnode->right=NULL;
        newnode->parent=NULL;

        return newnode;

    }

    void build_binary_tree()
    {
        for(int i=0;i<6;i++)
        {
            allnode[i]=createNode(i);

        }

        allnode[0]->parent=nullptr;
        allnode[0]->left=allnode[1];
        allnode[0]->right=allnode[2];

        allnode[1]->parent=allnode[0];
        allnode[1]->left=allnode[5];

        allnode[2]->parent=allnode[0];
        allnode[2]->left=allnode[3];
        allnode[2]->right=allnode[4];

        allnode[3]->parent=allnode[2];

        allnode[4]->parent=allnode[2];

        allnode[5]->parent=allnode[1];

        root =allnode[0];

        

    }

    // void print()
    // {
    //     for(int i=0;i<6;i++)
    //     {
            
    //             int l=-1,r=-1,p=-1;
    //             if(allnode[i]->left!=nullptr)
    //             l=allnode[i]->left->id;
    //             if(allnode[i]->right!=nullptr)
    //             r=allnode[i]->right->id;
    //             if(allnode[i]->parent!=nullptr)
    //             p=allnode[i]->parent->id;
    //             cout<<"node "<<i<<" 's parent:"<<p<<" left child: "<<l<<" right child: "<<r<<endl;


                
        
    //     }
    // }

    void BFS()
    {
        queue<node *>q;
        q.push(root);
        while(!q.empty())
        {
            node * a=q.front();
            q.pop();
            int l=-1,r=-1,p=-1;
            if(a->left!=NULL)
            {
                l=a->left->id;
                q.push(a->left);
            }

            if(a->right!=NULL)
            {
                r=a->right->id;
                q.push(a->right);

            }
            if(a->parent!=NULL)
             p=a->parent->id;


            cout<<"node :"<<a->id<<" left_child:"<<l<<" right_child:"<<r<<" parent:"<<p<<endl;

        }

    }


    void DFS(node * r)
    {
        if(r==nullptr)
        return;

        cout<<r->id<<" ";
        DFS(r->left);
        DFS(r->right);

    }

    void inorder(node * a)
    {
        if(a==nullptr)
        {
            return;

        }

        inorder(a->left);
        cout<<a->id<<" ";
        inorder(a->right);

    }

    void preorder(node * a)
    {
        if(a==nullptr)
        return;
        cout<<a->id<<" ";
        preorder(a->left);
        preorder(a->right);


    }

    void postorder(node * a)
    {
        if(a==nullptr)
        return;

        postorder(a->left);
        postorder(a->right);
        cout<<a->id<<" ";


    }


        
};
int main()
{
    binary_tree bt;
    bt.build_binary_tree();
    // bt.print();
    //bt.BFS();
   // bt.DFS(bt.root);
   bt.inorder(bt.root);
   cout<<endl;
   bt.preorder(bt.root);
   cout<<endl;
   bt.postorder(bt.root);




   return 0;
}