# num1=[2,3,10,23,0,0,0]
# num2=[-2,2,8,100]
# m=4
# n=3

from typing import List


class Solution:
    def merge(self, nums1: List[int], m: int, nums2: List[int], n: int) -> list[int]:
        """
        Do not return anything, modify nums1 in-place instead.
        """
        left=right=0
        
        while left<m and right<n:
            if nums1[left]<nums2[right]:
                left+=1
            else:
                i=left
                x=0
                while nums1[i]!=0:
                    a=nums1[i]
                    b=nums1[i+1]
                    nums1[i+1]=a
                    a=b
                    i+=1
                    x=a
                nums1[i+1]=x
                nums1[left]=nums2[right]
                right+=1
                left+=1
        
        while right<n:
            nums1[left]=nums2[right]
            left+=1
            right+=1
        
        return nums1
    
            
                    
            
                
                    
            
                
            
        