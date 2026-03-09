# from collections import deque
# def parentNode(root,val):
#     if not root:
#         return None
#
#     if root.val==val:
#         return None
#
#     q=deque([root])
#
#
#     while q:
#         parent=q.popleft()
#         for child in parent.children:
#             if child.val==val:
#                 return parent
#
#             q.append(child)
#
#
#     return None


def findParent(root,target):
    if not root:
        return None

    for child in root.children:
        if child.val==target:
            return root

        parent=findParent(child,target)

        return  parent if parent else None

    return None














