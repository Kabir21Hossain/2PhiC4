def topo(n,graph):
    stack=[]
    visited=set()
    def dfs(node):
        visited.add(node)

        for nei in graph[node]:
            if nei not in visited:
                dfs(nei)

        stack.append(node)
        # return


    for i in range(n):
        if i not in visited:
            dfs(i)

    for i in range(n-1,-1,-1):
        print(stack[i],end=" ")


graph={
    0:[1,2,3],
    1:[3,4],
    2:[4],
    3:[5],
    4:[5],
    5:[]

}

topo(6,graph)



