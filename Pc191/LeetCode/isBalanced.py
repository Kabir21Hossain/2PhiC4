def height(root):
    if not root:
        return 0
    return 1+max(height(root.left),height(root.right))

def isBalanced(root)->bool:
    if not root:
        return True

    if abs(height(root.left)-height(root.right))>1:
        return False

    return isBalanced(root.left) and isBalanced(root.right)
