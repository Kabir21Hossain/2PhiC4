from collections import deque

class Node:
    def __init__(self,val):
        self.val=val
        self.left=None
        self.right=None


def inorder_traversal(root):
    if not root:
        return
    result=[]
    current=root

    while current:

        if current.left is None:
            result.append(current.val)
            current=current.right

        else:
            pred=current.left

            while pred.right and pred.right!=current:
                pred=pred.right


            if pred.right is None:
                pred.right=current
                current=current.left

            else:
                pred.right=None
                result.append(current.val)
                current=current.right


    return result



