# from collections import deque
# def nodeAtKlevel(root,k):
#     if not root:
#         return 0
#
#     q=deque([root])
#     level=0
#
#     while q:
#         if k==level:
#             return len(q)
#         for _ in range(len(q)):
#             node=q.popleft()
#             for child in node.children:
#                 q.append(child)
#
#         level+=1
#
#     return 0

def nodesKLevel(root,k):
    if not root:
        return 0

    def dfs(root,level):
        if not root:
            return 0

        if level==k:
            return 1

        count=0
        for child in root.children:
            count+=dfs(child,level+1)

        return count

    return dfs(root,0)







