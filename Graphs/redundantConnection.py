# def cycleDetection(n,edges):
#     parent=[i for i in range(n+1)]
#     size=[1]*(n+1)
#
#     def find(x):
#         if parent[x]!=x:
#             parent[x]=find(parent[x])
#
#         return parent[x]
#
#     def union(u,v):
#         pu=find(u)
#         pv=find(v)
#
#         if pu==pv:
#             return True
#
#         if size[pu]>size[pv]:
#             parent[pv]=pu
#             size[pu]+=size[pv]
#         else:
#             parent[pu]=pv
#             size[pv]+=size[pu]
#
#         return False
#
#     for u,v in edges:
#         if union(u,v):
#             return [u,v]
#     return [-1,-1]


from collections import defaultdict,deque


# def bfs(n,edges):
#     graph=defaultdict(list)
#     q=deque()
#
#     for u,v in edges:
#         graph[u].append(v)
#         graph[v].append(u)
#
#
#
#     visited=set()
#     q.append((1,-1))
#     visited.add(1)
#
#     while q:
#         node,parent=q.popleft()
#
#         for nei in graph[node]:
#             if nei not in visited :
#                 q.append((nei,node))
#                 visited.add(nei)
#
#             elif nei!=parent:
#                 return True,[nei,node]
#
#
#     return False,[-1,-1]



# def bfs(n,edges):
#
#     graph=defaultdict(list)
#
#     for u,v in edges:
#         graph[u].append(v)
#         graph[v].append(u)
#
#     visited=set()
#
#     for i in range(n+1):
#         if i not in visited:
#             visited.add(i)
#             q=deque([(i,-1)])
#
#             while q:
#                 node,parent=q.popleft()
#                 for nei in graph[node]:
#                     if nei not in visited:
#                         q.append((nei,node))
#                         visited.add(nei)
#                     elif nei!=parent:
#                         return True,[nei,node]
#
#
#     return False
#

def hasCycles(n,edges):
    graph=defaultdict(list)
    for u,v in edges:
        graph[u].append(v)
        graph[v].append(u)

    visited=set()

    def dfs(node,parent):
        visited.add(node)

        for nei in graph[node]:
            if nei not in visited:
                if dfs(nei,node):
                    return True
            if nei!=parent:
                return True

        return False

    for i in range(n+1):
        if i not in visited:
            if dfs(i,-1):
                return True
    return False






# edges=[[1,2],[1,3],[2,3],[2,5],[3,4]]

edges=[[1,2],[1,5],[2,4],[2,3],[3,7],[3,6],[6,8],[7,6]]

print(bfs(5,edges))

