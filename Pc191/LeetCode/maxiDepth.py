def maxDepth(root):
    if not root:
        return 0

    if not root.children:
        return 1

    depth=0

    for child in root.children:
        childDepth=maxDepth(child)
        depth=max(depth,childDepth)

    return 1+depth
