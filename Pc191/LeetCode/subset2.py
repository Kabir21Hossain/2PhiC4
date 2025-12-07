def subset2(nums:list[int])->list[list[int]]:
    res=[]
    sol=[]
    n=len(nums)
    
    def backtrack(start):
        res.append(sol.copy())
        
        for i in range(start,n):
            if i> start and nums[i]==nums[i-1]:
                continue
            
            sol.append(nums[i])
            backtrack(i+1)
            sol.pop()
        
    
    backtrack(0)
    return res

print(subset2([2,2,2]))
        
        