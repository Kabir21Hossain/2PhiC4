class Solution:
    def shortestPath(self,root,targetSum:int):
        if not root:
            return []
        
        shortest_path=None
        def dfs(node,rem,path):
            nonlocal shortest_path
            if not node:
                return 
            
            path.append(node.val)
            
            if not node.left and not node.right and rem==node.val:
                if not shortest_path  or len(shortest_path)>len(path):
                    shortest_path=path.copy()
            
            
                    
            dfs(node.left,rem-node.val,path)
            dfs(node.right,rem-node.val,path)
            path.pop()
            
        dfs(root,targetSum,[])
        return shortest_path
         
            
        