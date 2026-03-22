# class DSU:
#     def __init__(self,n):
#         self.size=[1]*(n+1)
#         self.parent=[i for i in range(n+1)]
#
#     def find(self,x):
#         if self.parent[x]!=x:
#             self.parent[x]=self.find(self.parent[x]) # path compression
#
#         return x
#
#     def union(self,u,v):
#         pu=self.find(u)
#         pv=self.find(v)
#
#         if pu==pv:
#             return
#
#         su=self.size(u)
#         sv=self.size(v)
#
#         if su>sv:
#             self.parent[v]=u
#             self.size[v]+=su
#
#         else:
#             self.parent[u]=v
#             self.size[u]+=sv



class DSU:
    def __init__(self,n):
        self.rank=[0]*(n+1)
        self.parent=[i for i in range(n+1)]

    def find(self,x):
        if self.parent[x]!=x:
            self.parent[x]=self.find(self.parent[x])


        return x

    def union(self,u,v):
        pu=self.parent[u]
        pv=self.parent[v]

        if pu==pv:
            return
        if self.rank[u]>self.rank[v]:
            self.parent[v]=u
        elif self.rank[v]>self.rank[u]:
            self.parent[u]=v

        else:
            self.parent[u]=v
            self.rank[v]+=1






