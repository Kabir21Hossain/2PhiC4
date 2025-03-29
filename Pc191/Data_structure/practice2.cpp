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
       
        //node * allnode[6];
    
    public:
        node * root;
        binary_tree()
        {
            root=nullptr;
        
        }

        node * createNode(int i)
        {
           node * temp=new node;
           temp->id=i;
           temp->left=nullptr;
           temp->right=nullptr;
           temp->parent=nullptr;
           return temp;

        }

        void insert(int i)
        {
            node * newnode=createNode(i);
            if(root==nullptr)
            {
                root=newnode;
                newnode->parent=root;
                return;  
            }

            queue<node *>q;
            q.push(root);
            node* temp=new node;
            while(!q.empty())
            {
                temp=q.front();
                q.pop();
                if(temp->left==nullptr)
                {
                    temp->left=newnode;
                    newnode->parent=temp;
                    return;

                }

                else 
                {
                    q.push(temp->left);
                }

                if(temp->right==nullptr)
                {
                    temp->right=newnode;
                    newnode->parent=temp;
                    return;
                }

                else 
                {
                    q.push(temp->right);

                }


            }


            
        }

       

        


        // void build_binary_tree()
        // {
        //     for(int i=0;i<6;i++)
        //     {
        //         allnode[i]=createNode(i);
                
        //     }

        //     allnode[0]->right=allnode[2];
        //     allnode[0]->left=allnode[1];

        //     allnode[1]->left=allnode[5];
        //     allnode[1]->parent=allnode[0];
            
        //     allnode[2]->parent=allnode[0];
        //     allnode[2]->left=allnode[3];
        //     allnode[2]->right=allnode[4];

        //     allnode[3]->parent=allnode[2];
        //     allnode[4]->parent=allnode[2];
        //     allnode[5]->parent=allnode[1];


        //     root=allnode[0];


        // }


        // void print()
        // {
        //     for(int i=0;i<6;i++)
        //     {
        //         int p=-1,r=-1,l=-1;

        //         if(allnode[i]->parent!=nullptr)
        //         p=allnode[i]->parent->id;

        //         if(allnode[i]->left!=nullptr)
        //         l=allnode[i]->left->id;

        //         if(allnode[i]->right!=nullptr)
        //         r=allnode[i]->right->id;

        //         cout<<"node id: "<<allnode[i]->id<<" parent: "<<p<<" left:"<<l<<" right:"<<r<<endl;

        //     }
        // }

        void release(node * a)
        {
            if(a==nullptr)
            return;

            release(a->left);
            release(a->right);
            delete a;




        }

        ~binary_tree()
        {
            node * temp=root;
            release(temp);

            // for(int i=0;i<6;i++)
            // {
            //     allnode[i]=nullptr;
            // }
            root=nullptr;
            delete root;


            
        }

        void BFS(node *a)
        {
            if(a==nullptr)
            return;

            queue<node *>q;
            q.push(a);
            while(!q.empty())
            {
                node * temp=q.front();
                q.pop();
                if(temp->left!=nullptr)
                q.push(temp->left);
                if(temp->right!=nullptr)
                q.push(temp->right);

                cout<<temp->id<<" ";

            }
            
        }

        void DFS(node * a)
        {
            if(a==nullptr)
            return;

            DFS(a->left);
            DFS(a->right);
            cout<<a->id<<" ";

        }

        void dfs()
        {
            DFS(root);

        }
        void bfs()
        {
            BFS(root);
        }

        void inorder(node * a)
        {
            if(a==nullptr)
            return ;
            inorder(a->left);
            cout<<a->id<<" ";
            inorder(a->right);

        }

         void preorder(node * a)
        {
            if(a==nullptr)
            return ;
             cout<<a->id<<" ";
            preorder(a->left);
            preorder(a->right);

        }

         void postorder(node * a)
        {
            if(a==nullptr)
            return ;
            postorder(a->left);
            postorder(a->right);
            cout<<a->id<<" ";

        }


        void search(node * a,int x)
        {
            if(a==nullptr)
            return;

            if(a->id==x)
            {
                cout<<"\nfound"<<endl;
            }
            search(a->left,x);
            search(a->right,x);


        }
        void Search(int x)
        {
            search(root,x);
        }


};
int main()
{
    binary_tree bt;
   // bt.build_binary_tree();
    //bt.print();
   // bt.bfs();
   //bt.dfs();
   bt.insert(45);
   bt.insert(100);
   bt.insert(35);
   bt.insert(89);
   bt.insert(23);
   bt.insert(335);

   bt.preorder(bt.root);
   cout<<endl;

   bt.postorder(bt.root);
   cout<<endl;
   bt.inorder(bt.root);
  bt.Search(35);






   return 0;
}