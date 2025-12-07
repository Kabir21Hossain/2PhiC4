# nums=[2,2,4,5,4,2,2,4,4]
# a=nums[0]
# for x in nums[1:]:
#     a=a^x

# print(a)

def find_unique(nums:list[int],k:int)->int:
    low,high=0,len(nums)-1
    
    while low < high:
        mid=low+(high-low)//2
        
        mid-=mid%k
        
        if nums[mid]==nums[mid+k-1]:
            low=mid+k
        else:
            high=mid
        
    
    return nums[low]


if __name__=='__main__':
    nums=[4,4,4,7,7,7,8,8,8,12,12,12,15]
    print(find_unique(nums,3))

            
        
        