# from collections import defaultdict
# class Solution:
#     def maximumDetonation(self,bombs:list[list[int]])->int:
#         n=len(bombs)
#         if n==1:
#             return 1
        
#         #prepare graph
#         graph=defaultdict(list)
        
#         for i in range(len(bombs)):
#             x,y,r=bombs[i]
#             for j in range(len(bombs)):
#                 if i==j:
#                     continue
#                 x1,y1,_=bombs[j]

#                 if (x-x1)**2+(y-y1)**2<=r:
#                     graph[i].append(j)
        
#         def dfs(node,visited):
#             for nei in graph[node]:
#                 if nei not in visited:
#                     visited.add(nei)
#                     dfs(nei,visited)
                    
        
#         ans = 1
        
#         for i in range(n):
#             visited=set([i])
#             dfs(i,visited)
#             ans=max(ans,len(visited))
        
#         return ans
    
            
    
                
from collections import deque                 
                
class Solution:
    def maximumDetonation(self,bombs:list[list[int]])->int:
        n=len(bombs)
        if n<=1:
            return n
        
        #prepare graph
        graph=[[] for _ in range(n)]
        
        for i in range(n):
            x,y,r=bombs[i]
            for j in range(n):
                if i==j:
                    continue
            
                x1,y1,r1=bombs[j]
                if (x-x1)**2+(y-y1)**2<=r:
                    graph[i].append(j)
        
        
        def bfs_count(i):
            seen=[False]*n
            q=deque([i])
            seen[i]=True
            count=1
            while q:
                cur=q.popleft()
                for nei in graph[cur]:
                    if not seen[nei]:
                        seen[nei]=True
                        q.append(nei)
                        count+=1
            return count
        
                        
            
            
        
        max_detonated=1
        
        for i in range(n):
            max_detonated=max(max_detonated,bfs_count(i))
        
        return max_detonated
    
                
             
        