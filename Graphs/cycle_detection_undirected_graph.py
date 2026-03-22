from collections import defaultdict

def detectCycle(n,edges):

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
            elif nei!=parent:
                return True

        return False



    for i in range(n):
        if i not in visited:
            if dfs(i,-1):
                return True
            else:
                return False








