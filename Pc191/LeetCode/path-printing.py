from collections import deque
from typing import Optional

class Solution:
    def hasPathSum(self,root:Optional[TreeNode],targetSum:int)->bool:
        q=deque()
        if not root:
            return False
    
        q.append((root,targetSum,[root.val]))
        
        while q:
            node,rem,road=q.popleft()
            
            if not node.left and not node.right:
                if rem==node.val:
                    print(road)
                    return True
            
            if node.left:
                q.append((node.left,rem-node.val,road+[node.left.val]))
            if node.right:
                q.append((node.right,rem-node.val,road+[node.right.val]))
        
        return False
    
            