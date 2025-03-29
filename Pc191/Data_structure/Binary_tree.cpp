// #include <iostream>
// using namespace std;

// class Node {
// public:
//     int id;
//     Node* left;
//     Node* right;
//     Node * parent;

// };

// class BinaryTree {
// private:
//     Node* root;
//     Node * allnode[6];

// public:

//     BinaryTree() {
//         root = nullptr;
//     }

// Node * createNode(int value)
// {   
//     Node * a=new Node;
//     a->left=nullptr;
//     a->right=nullptr;
//     a->parent=nullptr;
//     a->id=value;

//     return a;

// }

// void build_binary_tree()
// {
    
//     for(int i=0;i<6;i++)
//     {
//         allnode[i]=createNode(i);

//     }
//     allnode[0]->left=allnode[1];
//     allnode[0]->right=allnode[2];

//     allnode[1]->left=allnode[5];
//     allnode[1]->parent=allnode[0];

//     allnode[2]->left=allnode[3];
//     allnode[2]->right=allnode[4];
//     allnode[2]->parent=allnode[0];

//     allnode[5]->parent=allnode[1]; 

//     allnode[3]->parent=allnode[2];

//     allnode[4]->parent=allnode[2];

//     root =allnode[0];


// }
    
//     void print_info()
//     {
//         for(int i=0;i<6;i++)
//         {
//             int p=-1;
//             int l=-1;
//             int r=-1;

//             if(allnode[i]->parent!=NULL)
//             {
//                 p=allnode[i]->parent->id;
//             }
//             if(allnode[i]->left!=NULL)
//             l=allnode[i]->left->id;
//             if(allnode[i]->right!=NULL)
//             r=allnode[i]->right->id;


//             cout<<"Node:"<<i<<" :parent="<<p<<" left child:"<<l<<" right child="<<r<<endl;
//         }

//     }
// };

// int main() {
//     BinaryTree tree;
//    tree.build_binary_tree();

//    tree.print_info();


//     // cout << "Tree elements in-order:" << endl;
    
//     return 0;
// }


/* manual tree (nodes to be inserted very manually)*/

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

class binaryTree
{
    private:
        node *root;
        node * allnode[6];

    public:

    node * createNode(int id)
    {
        node * newnode=new node();
        newnode->left=NULL;
        newnode->right=NULL;
        newnode->parent=NULL;
        newnode->id=id;
        return newnode;

    }

    void buildBinary_tree()
    {
        for(int i=0;i<6;i++)
        {
            allnode[i]=createNode(i);

        }

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

    }


void print_info()
{
    for(int i=0;i<6;i++)
    {
        int p=-1;
        int l=-1;
        int r=-1;

        if(allnode[i]->parent!=NULL)
         p=allnode[i]->parent->id;
        
        if(allnode[i]->left!=NULL)
        l=allnode[i]->left->id;

        if(allnode[i]->right!=NULL)
        r=allnode[i]->right->id;

        cout<<" Node ["<<i<<"]'s Parent:"<<p<<" left child:"<<l<<" right child:"<<r<<endl;

        
    }
}


void BFS()
{
    queue<node *>q;
    q.push(root);
    while(!q.empty())
    {
        node * a=q.front();
        q.pop();
        cout<<"node id="<<a->id<<" left child="<<a->left<<"";
    }
}


};
int main()
{
    binaryTree tree;
    tree.buildBinary_tree();
    tree.print_info();

   return 0;
}