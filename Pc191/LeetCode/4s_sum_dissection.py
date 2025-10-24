def sum4_target(nums:list[int],target:int)->list[list[int]]:
    n=len(nums)
    nums.sort()
    res=[]
    
    for i in range(n-3):
        if i>0 and nums[i]==nums[i-1]:
            continue
        
        for j in range(i+1,n-2):
            if j>i+1 and nums[j]==nums[j-1]:
                continue
            
            left=j+1
            right=n-1
            
            while left <right:
                t=nums[i]+nums[j]+nums[left]+nums[right]

                if t<target:
                    left+=1
                elif t> target:
                    right-=1
                else:
                    res.append([nums[left],nums[right],nums[i],nums[j]])
                    
                    left_val=nums[left]
                    right_val=nums[right]
                    while left< right and left_val==nums[left]:
                        left+=1
                    while left < right and right_val==nums[right]:
                        right-=1
                        
    return res
                   
                        
if __name__=="__main__":
    
    nums = [1, 0, -1, 0, -2, 2]
    res =sum4_target(nums, 0)
    print(res)
                   
                    
            
        