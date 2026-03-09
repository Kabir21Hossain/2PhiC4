class Node:
    def __init(self,val):
        self.val=val
        self.children=[]


def makeMirror(root):
    if not root:
        return None

    root.children.reverse()

    for child in root.children:
        makeMirror(child)

    return root








