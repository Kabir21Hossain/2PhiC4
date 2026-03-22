edges = [[0,1],[0,2],[1,3]]

from collections import defaultdict
graph=defaultdict(list)

for u,v in edges:
    graph[u].append(v)
    graph[v].append(u)

print(graph)


