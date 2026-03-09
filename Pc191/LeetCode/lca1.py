# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution:
    def lowestCommonAncestor(self, root: 'TreeNode', p: 'TreeNode', q: 'TreeNode') -> 'TreeNode':

        # def dfs(node,target,path):
        #     if not node:
        #         return False

        #     path.append(node)

        #     if target==node:
        #         return True

        #     if dfs(node.left,target,path) or dfs(node.right,target,path):
        #         return True

        #     path.pop()

        #     return False

        # path1=[]
        # path2=[]

        # dfs(root,p,path1)
        # dfs(root,q,path2)

        # i=0

        # while i<len(path1) and i<len(path2):
        #     if path1[i]!=path2[i]:
        #         break
        #     i+=1

        # return path1[i-1]
        # second method
        # parent={root:None}
        # stack=[root]

        # while p not in parent or q not in parent:

        #     node=stack.pop()

        #     if node.left:
        #         stack.append(node.left)
        #         parent[node.left]=node

        #     if node.right:
        #         stack.append(node.right)
        #         parent[node.right]=node

        # ancestor=set()

        # while  p:
        #     ancestor.add(p)
        #     p=parent[p]

        # while q not in ancestor:
        #     q=parent[q]

        # return q

        # third approach

        parent = {root: None}
        stack = [root]

        while p not in parent or q not in parent:
            node = stack.pop()

            if node.left:
                parent[node.left] = node
                stack.append(node.left)
            if node.right:
                parent[node.right] = node
                stack.append(node.right)

        def depth(node):
            d = 0

            while node in parent:
                d += 1
                node = parent[node]
            return d

        d1 = depth(p)
        d2 = depth(q)

        while d1 > d2:
            p = parent[p]
            d1 -= 1

        while d2 > d1:
            q = parent[q]
            d2 -= 1

        while p != q:
            p = parent[p]
            q = parent[q]

        return p





