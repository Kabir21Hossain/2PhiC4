from collections import deque
class Node:
    def __init__(self,val,children=None):
        self.val=val
        self.children=children if children else []


def serialize(root):
    if not root:
        return ""

    def dfs(node):
        if not node.children:
            return str(node.val)

        children_str=",".join(dfs(child) for child in node.children)

        return str(node.val)+"[" + children_str + "]"
    return dfs(root)


def deserialize(data):
    if not data:
        return None

    i=0

    def dfs():
        nonlocal i

        num=""

        while i<len(data) and data[i].isdigit():
            num+=data[i]
            i+=1

        node =Node(int(num),[])

        if i<len(data) and data[i]=='[':
            i+=1

            while data[i]!=']':
                child=dfs()
                node.children.append(child)

                if data[i]==',':
                    i+=1
            i+=1
        return node

    return dfs()









