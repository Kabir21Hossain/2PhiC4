def permute(nums:list[int])->list[list[int]]:
    n=len(nums)
    ans=[]
    
    def backtrack(idx:int):
        if idx==n:
            ans.append(nums.copy())
            return
        
        for i in range(idx,n):
            nums[i],nums[idx]=nums[idx],nums[i]
            backtrack(idx+1)
            nums[i],nums[idx]=nums[idx],nums[i]
        
    backtrack(0)
    return ans

nums=[1,2,3]
print(permute(nums))
        
        
            
            
        
    
        