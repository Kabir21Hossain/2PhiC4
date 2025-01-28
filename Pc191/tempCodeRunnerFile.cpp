#include<bits/stdc++.h>
using namespace std;

class node
{
    public:
         node * right;
         node * left;
         int id;
         node *parent;

};

class tree{
    private:
        node * arr[6];
    public:
    node * root;
    tree():root(nullptr){}
    
    node * createNode(int id)
    {
        node * newnode=new node;
        newnode->left=nullptr;
        newnode->right=nullptr;
        newnode->parent=nullptr;
        newnode->id=id;
        return newnode;

    }

    void build_binary_tree()
    {
        for(int i=0;i<6;i++)
        {
            arr[i]=createNode(i);
            
        }

        arr[0]->left=arr[1];
        arr[0]->right=arr[2];
        
        arr[1]->parent=arr[0];
        arr[1]->left=arr[5];
        
        arr[2]->left=arr[3];
        arr[2]->right=arr[4];
        arr[2]->parent=arr[0];

        arr[3]->parent=arr[2];
        arr[4]->parent=arr[2];

        arr[5]->parent=arr[1];

        root=arr[0];

            
    }

    // void print()
    // {
    //     for(int i=0;i<6;i++)
    //     {
    //         int p=-1,r=-1,l=-1;
    //         if(arr[i]!=nullptr)
    //         {
    //            if(arr[i]->parent!=nullptr)
    //            {
    //             p=arr[i]->parent->id;

    //            }
    //            if(arr[i]->left!=nullptr)
    //            l=arr[i]->left->id;

    //            if(arr[i]->right!=nullptr)
    //            r=arr[i]->right->id;

    //         }

    //         cout<<" values:"<<arr[i]->id<<" left_child:"<<l<<" right_child:"<<r<<" parent:"<<p<<endl;




    //     }
    // }


// void bfs()
// {
//     if(root==nullptr)
//     return;

//     queue<node *>q;
//     q.push(root);
    
//     while(!q.empty())
//     {
//         int p=-1,r=-1,l=-1;
//         node * temp=q.front();
//         q.pop();
//         if(temp->left!=nullptr)
//         {
//             l=temp->left->id;
//             q.push(temp->left);

//         }

//         if(temp->right!=nullptr)
//         {
//             q.push(temp->right);
//             r=temp->right->id;

//         }

//         if(temp->parent!=nullptr)
//           p=temp->parent->id;



//         cout<<"parent:"<< p<<" values:"<<temp->id<<" left_child:"<<l<<" right_child:"<<r<<endl;
//     }


// }

// insertions 

void insert(int x,node * a)
{
    if(a==nullptr)
    {
        a->id=x;
        return;
    }

    insert(x,a->left);
    insert(x,a->right);

}

void Insert(int a)
{
    insert(a,root);
}

    void dfs(node * a)
    {
        if(a==nullptr)
        return;
        int p=-1,r=-1,l=-1;
        if(a->left!=nullptr)
        l=a->left->id;
        if(a->right!=nullptr)
        r=a->right->id;
        if(a->parent!=nullptr)
        p=a->parent->id;

        cout<<" parent: "<<p<<" value: "<<a->id<<" left_child:"<<l<<" right_child:"<<r<<endl;
        dfs(a->right);
        dfs(a->left);
        
    }
    void Dfs()
    {
        dfs(root);
    }

    // inorder traversal 

    void inorder(node *a)
    {
        if(a==nullptr)
        return;
        inorder(a->left);
        cout<<a->id<<" ";
        inorder(a->right);

    }

// preorder traversal 

void preorder(node * a)
{
    if(a==nullptr)
        return;
    cout<<a->id<<" ";
    preorder(a->left);
    preorder(a->right);

    
}

// post order traversal

void postorder(node * a)
{
    if(a==nullptr)
        return;

    postorder(a->left);
    postorder(a->right);
    cout<<a->id<<" ";

}
    void del(node * r)
    {
        if(r!=nullptr)
        {
            del(r->left);
            del(r->right);
            delete r;


        }

        else return;
    }
    ~tree()
    {
         del(root);
    }


};
int main()
{

    tree t;
    t.build_binary_tree();
   // t.print();
   //t.bfs();
  // t.Dfs();
  t.Insert(34);
  t.Insert(100);

  t.preorder(t.root);
  cout<<endl;
  t.inorder(t.root);
  cout<<endl;
  t.postorder(t.root);



   return 0;
}