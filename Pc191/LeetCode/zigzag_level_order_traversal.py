from collections import deque

def zigzag(root):
    # if not root:
    #     return
    #
    # q=deque([root])
    # result=[]
    # left_to_right=True
    #
    # while q:
    #     level=[]
    #
    #     for _ in range(len(q)):
    #         node=q.popleft()
    #         level.append(node.val)
    #
    #         for child in node.children:
    #             q.append(child)
    #
    #     if not left_to_right:
    #         level.reverse()
    #
    #     result.append(level)
    #
    #     left_to_right=not left_to_right
    #
    # return result
    #
    if not root:
        return []

    q=deque([root])
    result=[]
    left_to_right=True

    while q:
        level=deque()
        for _ in range(len(q)):
            node=q.popleft()

            if not left_to_right:
                level.appendleft(node.val)
            else:
                level.append(node.val)

            for child in node.children:
                q.append(child)

        result.append(list(level))
        left_to_right=not left_to_right

    return result

