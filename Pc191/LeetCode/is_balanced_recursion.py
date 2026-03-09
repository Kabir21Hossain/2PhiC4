# def isBalanced(root):
#     def dfs(node):
#         if not node:
#             return 0
#
#         left=dfs(node.left)
#         if left==-1:
#             return -1
#
#         right=dfs(node.right)
#         if right==-1:
#             return -1
#
#
#         if abs(left-right)>1:
#             return -1
#
#         return 1+max(left,right)
#
#     return dfs(root)!=-1
#

def isBalanced(root):
    def dfs(node):
        if not node:
            return True,0

        lb,lh=dfs(node.left)
        rb,rh=dfs(node.right)

        balanced=lb and rb and abs(lh-rh)<=1
        height=1+max(lh,rh)
        return balanced,height

    return dfs(root)[0]