from collections import deque

class Node:
    def __init__(self):
        self.val=
        self.children=[]

def isSame(root1,root2):
    if not root1 and not root2:
        return True

    if not root1 or not root2:
        return False

    if root1.val != root2.val:
        return False

    if len(root1.children)!=len(root2.children):
        return False

    for child1,child2 in zip(root1.children,root2.children):
        if not isSame(child1,child2):
            return False


    return True









