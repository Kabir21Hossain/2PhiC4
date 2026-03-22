def dfs(start,visited,graph):

    for nei in graph[start]:
        if nei not in visited:
            visited.add(nei)
            dfs(nei,visited,graph)


count=0
graph={}
visited=set()
n=len(graph)
for i in range(n):
    if i not in visited:
        count+=1
        visited.add(i)
        dfs(i,visited,graph)

print(count)






