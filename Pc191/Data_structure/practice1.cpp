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
        node * root;
        // node * allnode[6];
    
    public:

        binary_tree()
        {
            root=nullptr;

        }

    node * createNode(int id)
    {
        node * a=new node;
        a->id=id;
        a->left=nullptr;
        a->right=nullptr;
        a->parent=nullptr;

        return a;

    }
    // void insert(int data)
    // {
    //     node * a=createNode(data);

    //     if(root==nullptr)
    //     {
    //         root=a;
    //         return;
    //     }

    //     queue<node *>q;
    //     q.push(root);
    //     while(!q.empty())
    //     {
    //         node * temp=q.front();
    //         q.pop();

    //         if(temp->left==nullptr)
    //         {

    //             temp->left=a;
    //             a->parent=temp;
    //             return;
    //         }

    //         else 
    //         {
    //             q.push(temp->left);
                
    //         }

    //         if(temp->right==nullptr)
    //         {
    //             temp->right=a;
    //             a->parent=temp;
    //             return;

    //         }

    //         else 
    //         {
    //             q.push(a->right);
                
    //         }


    //     }


    // }

    // void build_tree()
    // {
    //     for(int i=0;i<6;i++)
    //     {
    //         allnode[i]=createNode(i);

    //     }

    //     allnode[0]->parent=nullptr;
    //     allnode[0]->left=allnode[1];
    //     allnode[0]->right=allnode[2];
        
    //     allnode[1]->parent=allnode[0];
    //     allnode[1]->left=allnode[5];
        
    //     allnode[2]->parent=allnode[0];
    //     allnode[2]->left=allnode[3];
    //     allnode[2]->right=allnode[4];

    //     allnode[3]->parent=allnode[2];
    //     allnode[4]->parent=allnode[2];

    //     root=allnode[0];



    // }



    // void print()
    // {
    //     for(int i=0;i<6;i++)
    //     {
    //         node * a=allnode[i];

    //         int p=-1,r=-1,l=-1;

    //         if(a->parent!=nullptr)
    //         p=a->parent->id;


    //         if(a->left!=nullptr)
    //         l=a->left->id;

    //         if(a->right!=nullptr)
    //         r=a->right->id;

    //         cout<<"node value:"<<a->id<<" parent:"<<p<<" left_child:"<<l<<" right_child:"<<r<<endl;


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
            int p=-1,l=-1,r=-1;

            if(a->parent!=nullptr)
            p=a->parent->id;

            if(a->left!=nullptr)
            {
                  l=a->left->id;
                  q.push(a->left);

            }
          
            if(a->right!=nullptr)
            {
                r=a->right->id;
                q.push(a->right);

            }

            cout<<"node id:"<<a->id<<" left_child:"<<l<<" right_child:"<<r<<" parent:"<<p<<endl;
            



        }
    }


   void  DFS(node * a)
   {
        if(a==nullptr)
        return;
        cout<<a->id<<" ";

        DFS(a->left);
        DFS(a->right);


   }

   void dfs()
   {
    DFS(root);

   }


   void post(node * a)
   {    
     if(a==nullptr)
     return;

     post(a->left);
     post(a->right);
     cout<<a->id<<" ";

   }

   void postorder()
   {
    post(root);

   }


   void ino(node *a)
   {
        if(a==nullptr)
        return;

        ino(a->left);
        cout<<a->id<<" ";
        ino(a->right);

   }

   void inorder()
   {
    ino(root);

   }

   void pre(node *a)
   {
    
        if(a==nullptr)
        return;
        cout<<a->id<<" ";

        DFS(a->left);
        DFS(a->right);
    
   }

   void preorder()
   {
    pre(root);

   }

void dlt(node *a)
{
    if(a==nullptr)
    return;
    dlt(a->left);
    dlt(a->right);
    delete a;

}

   ~binary_tree()
   {
            dlt(root);

   }    




};





int main()
{

    binary_tree bt;
    //bt.build_tree();
    // bt.print();
   // bt.BFS();

   // bt.dfs();
    // cout<<endl;
    // bt.preorder();
    //  cout<<endl;
    // bt.postorder();
    //  cout<<endl;
    // bt.inorder();

    // bt.insert(45);
    // bt.insert(34);
    // bt.insert(124);
    // bt.insert(98);
    // bt.insert(100);
    // bt.BFS();
   // bt.preorder();






   return 0;
}