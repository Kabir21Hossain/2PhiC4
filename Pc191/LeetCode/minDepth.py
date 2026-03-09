from collections import deque
def minDepth(root):
    # if not root:
    #     return 0
    #
    # q=deque([root])
    # level=0
    #
    # while q:
    #     level+=1
    #     for _ in range(len(q)):
    #         node=q.popleft()
    #         if not node.children:
    #             return level
    #         for child in node.children:
    #             q.append(child)
    #
    #     return level

    if root is None:
        return 0

    q=deque([(root,1)])

    while q:
        node,depth=q.popleft()

        if not node.children:
            return depth

        for child in node.children:
            q.append((child,depth+1))

    






