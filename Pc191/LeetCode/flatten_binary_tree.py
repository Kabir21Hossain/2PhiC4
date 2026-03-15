def flatten(root):
    if not root:
        return None

    flatten(root.left)
    flatten(root.right)

    right=root.right
    left=root.left

    root.left=None
    root.right=left

    cur=root

    while cur.root:
        cur=cur.root

    cur.right=right


    

