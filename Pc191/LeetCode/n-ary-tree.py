class TreeNode:
    def __init__(self,val):
        self.val=val
        self.children=[]

class Tree:
    def __init__(self):
        self.root=None
    def visit(self):
        def dfs(Curnode):
            if not Curnode:
                return

            print(Curnode.val)
            for node in Curnode.children:
                dfs(node)
        dfs(self.root)




if __name__=='__main__':

    tree=Tree()
    root=TreeNode(10)
    for i in range(4):
        node=TreeNode(i*4+1)
        root.children.append(node)



    tree.root=root
    tree.visit()


