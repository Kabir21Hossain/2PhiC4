class Node:
    def __init__(self,val):
        self.val=val
        self.left=None
        self.right=None


def rootToNode(root,target,path):
    if not root:
        return False 
    
    path.append(root.val)
    
    if root.val == target:
        return True
    

    if rootToNode(root.left,target,path) or rootToNode(root.right,target,path):
        return True
    

    path.pop()
    return False


if __name__=='__main__':
    root=Node(1)
    root.left=Node(2)
    root.right=Node(3)
    root.left.left=Node(4)
    root.left.right=Node(5)
    root.right.left=Node(6)
    root.right.right=Node(7)

    root.left.left.left=Node(8)
    root.left.left.right=Node(9)

    root.left.right.left=Node(10)
    root.left.right.right=Node(11)

    path=[]
    rootToNode(root,11,path)
    print(path)



# for bst

# def lca(root,p,q):
#     if not root:
#         return None
    
    
#     if p.val > root.val and q.val>root.val:
#         root=root.right
    
#     elif p.val<root.val and q.val<root.val:
#         root=root.left
#     else:
#         return root
    

