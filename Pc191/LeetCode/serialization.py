from collections import deque

class TreeNode:
    def __init__(self,val):
        self.val=val
        self.left=None
        self.right=None

class Solution:
    def __init__(self):
        self.root=None

    def insert(self,val):
        node=TreeNode(val)
        if not self.root:
            self.root=node
            return

        temp=self.root
        while temp:
            if temp.val>val:
                if not temp.left:
                    temp.left=node
                    return
                temp=temp.left
            else:
                if not temp.right:
                    temp.right=node
                    return
                temp=temp.right

    def showTree(self):
        if not self.root:
            return None


        q=deque([self.root])
        result=[]

        while q:
            node=q.popleft()
            result.append(node.val)
            if node.left:
                q.append(node.left)
            if node.right:
                q.append(node.right)

        return result



    def serialization(self):
        if not self.root:
            return ""

        result=[]
        q=deque([self.root])

        while q:
            node=q.popleft()
            if node:
                result.append(str(node.val))
                q.append(node.left)
                q.append(node.right)
            else:
                result.append('null')


        return ",".join(result)


    def deserialization(self,string):
        if not string:
            return None

        index=1
        data=string.split(',')
        root=TreeNode(int(data[0]))
        q=deque([root])

        while q:
            node=q.popleft()
            if data[index]!='null':
                leftChild=TreeNode(int(data[index]))
                node.left=leftChild
                q.append(node.left)

            index+=1

            if data[index]!='null':
                rightChild=TreeNode(int(data[index]))
                node.right=rightChild
                q.append(node.right)
            index+=1

        return root



if __name__=='__main__':
    arry=[1,2,3,4,5]
    tree=Solution()
    for x in arry:
        tree.insert(x)

    print(tree.showTree())
    data=tree.serialization()
    print(data)





