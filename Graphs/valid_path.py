class Solution:
    def __init__(self):
        pass

    def validpath(self,n,edges,source,destination):

        parent=[i for i in range(n)]

        def find(x):
            if parent[x]!=x:
                parent[x]=find(parent[x])

            return x

        def union(u,v):
            pu=parent[u]
            pv=parent[v]

            if pu!=pv:
                parent[pu]=pv


        for u,v in edges:
            union(u,v)

        return find(source)==find(destination)

