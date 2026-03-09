# from collections import deque
# class Node:
#     def __init__(self,data):
#         self.data=data
#         self.left=None
#         self.right=None

# class Tree:
#     def __init__(self):
#         self.root=None
    
#     def isEmpty(self):
#         if not self.root:
#             return True
#         return False
    
#     def countNode(self,root):
#         if not root:
#             return 0
        
#         return 1+self.countNode(root.left)+self.countNode(root.right)
    
#     def height(self,root):
#         if root is None:
#             return 0
        
#         return max(self.height(root.left),self.height(root.right))+1
    
#     def preorder(self,root):
#         if root is None:
#             return
#         print(root.data,end=' ')
#         self.preorder(root.left)
#         self.preorder(root.right)
    
#     def inorder(self,root):
#         if root is None:
#             return
#         self.inorder(root.left)
#         print(root.data,end=' ')
#         self.inorder(root.right)
        
    
#     def postorder(self,root):
#         if root is None:
#             return
#         self.postorder(root.left)
#         self.postorder(root.right)
#         print(root.data,end=' ')
    
#     def bfs(self,root):
#         if root is None:
#             return
#         q=deque()
#         q.append(root)
#         while q:
#             node=q.popleft()
#             print(node.data,end=" ")
            
#             if node.left:
#                 q.append(node.left)
#             if node.right:
#                 q.append(node.right)
            
        
        
        
        
    
        
# if __name__=='__main__':
#     tree=Tree()
#     tree.root=Node(1)
#     tree.root.left=Node(2)
#     tree.root.right=Node(3)
#     tree.root.left.left=Node(4)
#     tree.root.left.right=Node(5)
#     tree.root.right.left=Node(6)
#     tree.root.right.right=Node(7)
#     print(tree.isEmpty())
#     print(tree.countNode(tree.root))
    
#     print(tree.height(tree.root))
    
#     tree.preorder(tree.root)
#     print()
#     tree.inorder(tree.root)
#     print()
#     tree.bfs(tree.root)
    

from collections import deque
    
class Node:
    def __init__(self,data):
        self.data=data
        self.left=None
        self.right=None

class Tree:
    def __init__(self):
        self.root=None
    
    def countNodes(self,root):
        if root is None:
            return 0
        return 1+self.countNodes(root.left)+self.countNodes(root.right)
    
    def height(self,root):
        if root is None:
            return 0
        return 1+max(self.height(root.left),self.height(root.right))
    
    def preOrder(self,root):
        if root is None:
            return
        print(root.data,end=" ")
        self.preOrder(root.left)
        self.preOrder(root.right)
    
    def postOrder(self,root):
        if root is None:
            return
        
        self.postOrder(root.left)
        self.postOrder(root.right)
        print(root.data,end=" ")

    def inOrder(self,root):
        if root is None:
            return 
        self.inOrder(root.left)
        print(root.data,end=" ")
        self.inOrder(root.right)
    
    
    def bfs(self,root):
        if root is None:
            return
        q=deque()
        q.append(root)
        
        while q:
            node=q.popleft()
            print(node.data,end=" ")
            if node.left:
                q.append(node.left)
            if node.right:
                q.append(node.right)
    
                
        



if __name__=='__main__':
    tree=Tree()
    node=Node(1)
    tree.root=node
    tree.root.left=Node(2)
    tree.root.right=Node(3)
    tree.root.left.left=Node(4)
    tree.root.left.right=Node(5)
    tree.root.right.left=Node(6)
    tree.root.right.right=Node(7)
    
    print(tree.countNodes(tree.root))
    
    
    