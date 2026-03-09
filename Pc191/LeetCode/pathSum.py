from collections import deque

class TreeNode:
    def __init__(self,val):
        self.val=val
        self.left=None
        self.right=None

class Solution:
    def __init__(self):
        self.root=None

    def insert(self,val):
        node=TreeNode(val)

        if not self.root:
            self.root=node
            return

        temp=self.root

        while temp:
            if temp.val<val:
                if not temp.right:
                    temp.right=node
                    return
                temp=temp.right

            else:
                if not temp.left:
                    temp.left=node
                    return
                temp=temp.left

    def showTree(self):
        result=[]
        def dfs(node):
            if not node:
                return
            dfs(node.left)
            result.append(node.val)
            dfs(node.right)
        dfs(self.root)
        return result

    def allPossiblePaths(self):
        result=[]

        def dfs(node,path):
            if not node:
                return

            path.append(str(node.val))

            if not node.left and not node.right:
                result.append("->".join(path))

            dfs(node.left,path)
            dfs(node.right,path)

            path.pop()

        dfs(self.root,[])
        return result




    def bfs(self):
        if not self.root:
            return []
        result=[]
        q=deque([self.root])

        while q:
            node=q.popleft()
            result.append(node.val)
            if node.left:
                q.append(node.left)
            if node.right:
                q.append(node.right)

        return result

    def pathAsList(self):
        result=[]
        def dfs(node,path):
            if not node:
                return

            path.append(node.val)

            if not node.left and not node.right:
                result.append(path.copy())


            dfs(node.left,path)
            dfs(node.right,path)

            path.pop()

        dfs(self.root,[])
        return result


    def shortestPath(self,node):
        if not node:
            return float('inf')

        if not node.left and not node.right:
            return 1

        return 1+min(self.shortestPath(node.left),self.shortestPath(node.right))

    def printShortestPath(self):
        shortest=None
        def dfs(node,path):
            nonlocal shortest

            if not node:
                return
            path.append(node.val)

            if not node.left and not node.right:
                if shortest is None or len(shortest)>len(path):
                    shortest=path.copy()

            dfs(node.left,path)
            dfs(node.right,path)

            path.pop()

        dfs(self.root,[])
        return shortest

    def longestPathFromRoot(self):
        def dfs(node):
            if not node:
                return 0

            return 1+max(dfs(node.left),dfs(node.right))
        return dfs(self.root)

    def longestPathPrint(self):
        longPath=[]

        def dfs(node,path):
            nonlocal longPath
            if not node:
                return

            path.append(node.val)

            if not node.left and not node.right:
                if len(longPath)<len(path):
                    longPath=path.copy()

            dfs(node.left,path)
            dfs(node.right,path)

            path.pop()

        dfs(self.root,[])
        return longPath


    def allSum(self):
        summ=0
        def dfs(node):
            nonlocal summ
            if not node:
                return

            summ+=node.val

            dfs(node.left)
            dfs(node.right)
        dfs(self.root)

        return summ


    def sumOfLeafNodes(self):
        summ=0
        def dfs(node):
            nonlocal summ

            if not node:
                return

            if not node.left and not node.right:
                summ+=node.val

            dfs(node.left)
            dfs(node.right)

        dfs(self.root)
        return summ

    def countLeafNodes(self):
        counts=0
        def dfs(node):
            nonlocal counts
            if not node:
                return

            if not node.left and not node.right:
                counts+=1

            dfs(node.left)
            dfs(node.right)
        dfs(self.root)
        return counts









if __name__=='__main__':
    res=[43,2,89,-4,12,34,23,11,0]
    tree=Solution()
    for val in res:
        tree.insert(val)

    print(tree.showTree())
    print(tree.bfs())

    print(tree.allPossiblePaths())
    print(tree.pathAsList())
    print(tree.shortestPath(tree.root))
    print(tree.printShortestPath())
    print(tree.longestPathFromRoot())
    print(tree.longestPathPrint())
    print(tree.sumOfLeafNodes())

    print(sum(res))
    print(tree.allSum())
    print(tree.countLeafNodes())

