def countLeafNodes(root):
    # if not root:
    #     return 0
    #
    # def dfs(root):
    #     if not root:
    #         return 0
    #
    #     if not root.children:
    #         return 1
    #     count=0
    #     for child in root.children:
    #         count+=dfs(child)
    #
    #     return count
    #
    # return dfs(root)

    from collections import deque
    if not root:
        return 0

    q=deque([root])

    leaf=0

    while q:
        node=q.popleft()

        if not node.children:
            leaf+=1

        for child in node.children:
            q.append(child)

    return leaf




