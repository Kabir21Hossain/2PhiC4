#leetcode #34
def first_last(nums:list[int],target:int)->list[int]:
    
    def first_index(nums,target)->int:
        left=0
        right=len(nums)-1
        
        first=-1
        
        while left<=right:
            mid=left+(right-left)//2
            
            if nums[mid]==target:
                first=mid
                right=mid-1
                
            elif nums[mid]<target:
                left=mid+1
                
            else:
                right=mid-1
                
        return first

    
    def last_index(nums,target)->int:
        left,right=0,len(nums)-1
        last=-1
        
        while left<=right:
            
            mid=left+(right-left)//2
            
            if nums[mid]==target:
                last=mid
                left=mid+1
            
            elif nums[mid]>target:
                right=mid-1
            else:
                left=mid+1
        
        return last

    
    f=first_index(nums,target)
    l=last_index(nums,target)
    
    return [f,l]
                    
                    
                    
        
    