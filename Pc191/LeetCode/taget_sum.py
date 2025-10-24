class Solution:
    
    def target_sum2(self,nums:list[int],target:int)->list[list[int]]:
        result=[]
        n=len(nums)
        nums.sort()
        
        left=0
        right=n-1
        
        while left<right:
            t=nums[left]+nums[right]
            
            if t<target:
                left+=1
            elif t>target:
                right-=1
            else:
                result.append([nums[left],nums[right]])
                left_val=nums[left]
                right_val=nums[right]
                
                while left<right and nums[left_val]==nums[left]:
                    left+=1
                while left<right and nums[right_val]==nums[right]:
                    right-=1
                
                
                
        return result
    

    def brute_force(self,nums:list[int],target:int)->list[list[int]]:
        n=len(nums)
        res=set() # for unique pairs
        
        for i in range(n):
            for j in range(i+1,n):
                t=nums[i]+nums[j]
                
                if t==target:
                    pair=tuple(sorted((nums[i],nums[j])))
                    res.add(pair)
        
        return [list(pair) for pair in res]
    
                
    def mapping_solution(self,nums:list[int],target:int)->list[list[int]]:
        
        seen=set()
        res=set()
        
        n=len(nums)
        
        for x in nums:
            complement=target-x
            
            if complement in seen:
                pair=tuple(sorted((x,complement)))
                res.add(pair)
            else:
                seen.add(x)
        
        return [list(pair) for pair in res]

                        
        
    
                
        
    

if __name__=="__main__":
    s=Solution()
    nums=[3,8,0,-2,5,1,7,-8,-1,8]
    # nums.sort()
    # print(nums)
    print(s.brute_force(nums,6))
    print(s.mapping_solution(nums,6))
    res=s.target_sum2(nums,6)
    print(res)