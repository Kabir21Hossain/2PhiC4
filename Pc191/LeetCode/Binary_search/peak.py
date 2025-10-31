# def peakest(nums:list[int])->int:
#     n=len(nums)
#     if n==1:
#         return 0
    
#     if n>=3:
#         left,mid,right=0,1,2
#         index=0
        
#         while right<n and left<n-2 and mid<n-1:
#             if nums[left]<=nums[mid]>=nums[right]:
#                 if nums[mid]>nums[index]:
#                     index=mid
                
#             left+=1
#             mid+=1
#             right+=1
                
                
#         return index
    
#     else:
#         if nums[0]>=nums[1]:
#             return 0
#         return 1
    

# if __name__=='__main__':
#     nums = [5, 4, 3, 2, 1]
#     print(peakest(nums))


def peakest(self,nums:list[int])->int:
    n=len(nums)
    left,right=0,n-1
    
    while left<right:
        mid=left+(right-left)//2
        
        if nums[mid]<nums[mid+1]:
            left=mid+1
        else:
            right=mid
    
    return left

            
            
    