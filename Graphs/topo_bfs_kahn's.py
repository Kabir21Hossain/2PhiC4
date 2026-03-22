from collections import defaultdict,deque

def topoSortBFS(n,edges):
    graph=defaultdict(list)
    indegree=[0]*(n+1)

    q=deque()

    for u,v in edges:
        graph[u].append(v)
        indegree[v]+=1

    for i in range(n+1):
        if indegree[i]==0:
            q.append(i)

    topo=[]
    while q:
        node=q.popleft()
        topo.append(node)

        for nei in graph[node]:
            indegree[nei]-=1
            if indegree[nei]==0:
                q.append(nei)

    if len(topo)!=n:
        return 'cycle exist'

    return topo








