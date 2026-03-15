from collections import defaultdict
from cytoolz.itertoolz import deque

#
# def tree2graph(root):
#     if not root:
#         return None
#
#     q=deque([root])
#     adjacency_list=defaultdict(list)
#
#     while q:
#         node=q.popleft()
#
#         if node.left:
#             adjacency_list[node.val].append(node.left.val)
#             adjacency_list[node.left.val].append(node.val)
#             q.append(node.left)
#
#         if node.right:
#             adjacency_list[node.val].append(node.right.val)
#             adjacency_list[node.right.val].append(node.val)
#             q.append(node.right)
#
#     return adjacency_list
#


from collections import defaultdict

def buildGraph(root):
    graph=defaultdict(list)

    def dfs(node):
        if not node:
            return

        if node.left:
            graph[node.val].append(node.left.val)
            graph[node.left.val].append(node.val)
            dfs(node.left)

        if node.right:
            graph[node.val].append(node.right.val)
            graph[node.right.val].append(node.val)
            dfs(node.right)

    dfs(root)

    return graph

