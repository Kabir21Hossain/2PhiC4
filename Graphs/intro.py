from collections import deque
def dfs(v,visited,graph):
    visited[v]=True

    print(v,end=" ")

    for u in graph[v]:
        if not visited[u]:
            dfs(u,visited,graph)



def bfs(i,graph,visited):
    q=deque([i])
    visited[i]=True

    while q:
        u=q.popleft()
        print(u,end=' ')

        for v in graph[u]:
            if not visited[v]:
                visited[v]=True
                q.append(v)




if __name__=='__main__':

    graph = {
        1: [2, 3],
        2: [1, 4],
        3: [1, 4],
        4: [2, 3]
    }

    visited = [False for _ in range(len(graph)+1)]

    # for i in range(1,len(graph)+1):
    #     if not visited[i]:
    #         dfs(i,visited,graph)



    for i in range(1,len(graph)+1):
        if not visited[i]:
            bfs(i,graph,visited)

