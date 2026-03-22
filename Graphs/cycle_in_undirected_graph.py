# from collections import defaultdict,deque
# def cycle(n,edges):
#
#     graph=defaultdict(list)
#     for u,v in edges:
#         graph[u].append(v)
#         graph[v].append(u)
#
#     visited=set()
#     q=deque()
#     q.append((0,-1))
#     visited.add(0)
#
#     while q:
#         node,parent=q.popleft()
#
#         for nei in graph[node]:
#             if nei not in visited:
#                 q.append((nei,node))
#                 visited.add(nei)
#
#             elif nei!=parent:
#                 return True
#
#     return False

# handle disconnected graph

from collections import defaultdict, deque


def cycle(n, edges):
    graph = defaultdict(list)
    for u, v in edges:
        graph[u].append(v)
        graph[v].append(u)

    visited = set()

    for i in range(n):
        if i not in visited:
            q=deque([(i,-1)])
            visited.add(i)



        while q:
            node, parent = q.popleft()

            for nei in graph[node]:
                if nei not in visited:
                    q.append((nei, node))
                    visited.add(nei)

                elif nei != parent:
                    return True

    return False


