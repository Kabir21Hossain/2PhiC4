from collections import defaultdict,deque

from networkx.generators.small import bull_graph


def nodes(root,target,k):

    def buildGraph(root):

        graph=defaultdict(list)
        q=deque([root])

        while q:
            node=q.popleft()

            if node.left:
                graph[node].append(node.left)
                graph[node.left].append(node)
                q.append(node.left)
            if node.right:
                graph[node].append(node.right)
                graph[node.right].append(node)
                q.append(node.right)

        return  graph

    graph=buildGraph(root)
    visited=set()

    result=[]

    newQ=deque([target])
    visited.add(target)

    d=0

    while newQ:
        if d==k:
            result.extend([node.val for node in newQ])


        for _ in range(len(newQ)):
            node=newQ.popleft()

            for neighbour in graph[node]:
                if neighbour not in visited:
                    newQ.append(neighbour)
                    visited.add(neighbour)
        d+=1

    return result




