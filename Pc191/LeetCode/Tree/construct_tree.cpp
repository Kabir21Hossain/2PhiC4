// #include<bits/stdc++.h>
// using namespace std;

// class Node{
    
//     public:
//         int data;
//         Node *left;
//         Node *right;

//         Node(int val){
//             this->data=val;
//             left=NULL;
//             right=NULL;
//         }
    
//         bool isEmpty(Node*root){
//             return root==NULL;
//         }

//         int countNode(Node * root){
//             if(root==NULL){
//                 return 0;

//             }
//             return 1+countNode(root->left)+countNode(root->right);
//         }

//         int height(Node * root){
//             if(root==NULL){
//                 return 0;
//             }

//             return max(height(root->left),height(root->right))+1;
//         }

//         void preorder(Node * root){
//             if(root==NULL){
//                 return;

//             }

//             cout<<root->data<<" ";
//             preorder(root->left);
//             preorder(root->right);

//         }


// };

// int main(){

//     Node* root=new Node(1);
//     root->left=new Node(2);
//     root->right=new Node(3);
//     root->left->left=new Node(4);
//     root->left->right=new Node(5);
//     root->right->left=new Node(6);
//     root->right->right=new Node(7);
//     cout<<root->countNode(root);
//     root->preorder(root);





//     return 0;
// }

#include<bits/stdc++.h>
#include<queue>
using namespace std;

class Node{
    public:
        int data;
        Node* left;
        Node* right;
        
        Node(int data){
            this->data=data;
            this->left=NULL;
            this->right=NULL;

        }

};


class Tree{
    public:
        Node* root;
        Tree(){
            this->root=NULL;

        }

        int countNodes(Node*root){
            if (root == NULL){
                return 0;
            }
            return 1+countNodes(root->left)+countNodes(root->right);
        }

        int height(Node* root){
            if(root == NULL){
                return 0;
            }

            return 1+max(height(root->left),height(root->right));

        }

        void preOrder(Node * root){
            if(root==NULL){
                return;
            }
            cout<<root->data<<" ";
            preOrder(root->left);
            preOrder(root->right);
        }

        void inOrder(Node * root){
            if(root==NULL){
                return;
            }
            
            inOrder(root->left);
            cout<<root->data<<" ";
            inOrder(root->right);
        }

        void postOrder(Node * root){
            if(root==NULL){
                return;
            }
            
            postOrder(root->left);
            postOrder(root->right);
            cout<<root->data<<" ";
        }

        void bfs(Node* root){
           queue<Node *>q;
           q.push(root);
           while(!q.empty()){
            Node * node=q.front();
            q.pop();
            cout<<node->data<<" ";

            if(node->left)q.push(node->left);
            if(node->right)q.push(node->right);

           }

        }
    

};

int main(){

    Tree tree=Tree();
    Node * newNode=new Node(1);
    tree.root=newNode;



    return 0;
}