def subsets(nums:list[int])->list[list[int]]:
    n=len(nums)
    index=0
    result=[]
    sol=[]
    
    def backtrack(index:int):
        
        if index==n:
            result.append(sol.copy())
            return
        
        sol.append(nums[index])
        backtrack(index+1)
        sol.pop()
        backtrack(index+1)
        
    backtrack(index)
    return result

nums=[1,2]
print(subsets(nums))
        
        
            