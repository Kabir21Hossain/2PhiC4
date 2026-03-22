from collection import defaultdict

def connected_component(n,edges):
    graph=defaultdict(list)
    for u,v in edges:
        graph[u].append(v)
        graph[v].append(u)

    visited=set()

    def dfs(node):
        if node in visited:
            return

        visited.add(node)

        for nei in graph[node]:
            dfs(nei)


    count=0

    for i in range(n):
        if i not in visited:
            dfs(i)
            count+=1

    return count
