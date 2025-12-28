from typing import List
class Solution:
    def sortColors(self, nums: List[int]) -> None:
        """
        Do not return anything, modify nums in-place instead.
        """
        low=mid=0
        high=len(nums)-1

        while mid<=high:
            if nums[mid]==0:
                nums[low],nums[mid]=nums[mid],nums[low]
                mid+=1
                low+=1
            elif nums[mid]==1:
                mid+=1
            
            else:
                nums[high],nums[mid]=nums[mid],nums[high]
                high-=1
        
        print(nums)



tests = [
    [],
    [0],
    [2,0,1],
    [2,0,2,1,1,0],
    [1,1,1,1],
    [0,2,1,0,2,1,0]
]   

s=Solution()
for t in tests:
    s.sortColors(t)
    