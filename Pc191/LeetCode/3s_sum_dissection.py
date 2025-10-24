def sum_target(nums:list[int],target:int)->list[list[int]]:
    
    n=len(nums)
    nums.sort()
    res=[]
    
    for i in range(n-2):
        
        if  i >0 and nums[i]==nums[i-1]:
                    continue
                
        left=i+1
        right=n-1
        while left<right:
            
            t=nums[left]+nums[right]+nums[i]
            
            if t<target:
                left+=1
            elif t>target:
                right-=1
            
            else:
                
                
                res.append([nums[left],nums[right],nums[i]])
                left_val=nums[left]
                right_val=nums[right]
                
                while left < right and left_val==nums[left]:
                    left+=1
                while left<right and right_val==nums[right]:
                    right-=1
                
    return res

if __name__=="__main__":
    nums=[-2,4,10,2,3,-4,1,5,10,-3,-5,6]
    print(sum_target(nums,5))
    

                
                
            
        
            
        
    