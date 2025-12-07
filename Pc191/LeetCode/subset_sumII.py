class Solution:
    def combinationSum2(self,candidates,target):
        candidates.sort()
        n=len(candidates)
        res=[]
        path=[]
        
        def backtrack(start,r):
            if r==0:
                res.append(path.copy())
                return
            if r<0:
                return
            
            for i in range(start,n):
                if i> start and candidates[i]==candidates[i-1]:
                    continue
                
                path.append(candidates[i])
                backtrack(i+1,r-candidates[i])
                path.pop()
        
        backtrack(0,target)
        
        return res
    
                
                
            