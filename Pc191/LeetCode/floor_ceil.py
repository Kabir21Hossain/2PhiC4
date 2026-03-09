class TreeNode:
    def __init__(self,val):
        self.val=val
        self.left=None
        self.right=None

class Tree:
    def __init__(self):
        self.root=None

    def insert(self,val):
        node=TreeNode(val)
        if not self.root:
            self.root=node
            return
        cur=self.root
        while cur:
            if val>cur.val:
                if not cur.right:
                    cur.right=node
                    return
                cur=cur.right

            else:
                if not cur.left:
                    cur.left=node
                    return
                cur=cur.left

    def floor_bst(self,x):
        if not self.root:
            return -1
        ans=-1
        temp=self.root
        while temp:
            if temp.val==x:
                return x

            elif temp.val>x:
                temp=temp.left
            else:
                ans=temp.val
                temp=temp.right

        return ans

    def ceil_bst(self,x):
        if not self.root:
            return -1

        ans=-1
        temp=self.root

        while temp:
            if x==temp.val:
                return x
            elif temp.val<x:
                temp=temp.right
            else:
                ans=temp.val
                temp=temp.left
        return ans


    def floor_ceil(self,x):
        if not self.root:
            return -1,-1

        floor,ceil=-1,-1
        temp=self.root

        while temp:
            if temp.val==x:
                floor=x
                ceil=x
                return floor,ceil

            elif temp.val>x:
                ceil=temp.val
                temp=temp.left
            else:
                floor=temp.val
                temp=temp.right

        return floor,ceil






if __name__=="__main__":
    values=[23,45,67,71,75,80,83,89,200,225,499]
    tree=Tree()

    for val in values:
        tree.insert(val)

    # print(tree.floor_bst(89))
    # print(tree.ceil_bst(72))

    print(tree.floor_ceil(88))















