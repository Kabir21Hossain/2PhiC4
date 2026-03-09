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
        temp=self.root
        while temp:
            if val<temp.val:
                if not temp.left:
                    temp.left=node
                    return
                temp=temp.left
            else:
                if not temp.right:
                    temp.right=node
                    return
                temp=temp.right
        
        def floor_bst(self,root,key):
            floor_value=-1
            temp=root
            while temp:
                if temp.val==key:
                    return temp.val
                elif key<temp.val:
                    temp=temp.left
                else:
                    floor_value=temp.val
                    temp=temp.right
            
            return floor_value

if __name__=="__main__":
            