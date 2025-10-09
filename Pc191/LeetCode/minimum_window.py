class Solution:
    def findMedianSortedArrays(self,num1:list[int],num2:list[int])->float:

        merged_array=[]

        l1=len(num1)
        l2=len(num2)

        l=min(l1,l2)
        left=right=0
        for i in range(l):
            if num1[left]< num2[right]:
                merged_array.append(num1[left])
                left+=1
            else:
                merged_array.append(num2[right])
                right+=1

        while left<len(num1):
            merged_array.append(num1[left])
            left+=1
            
        while right<len(num2):
            merged_array.append(num2[right])
            right+=1

        median=0.0
        n=l1+l2
        
        if n%2==1:
            median=merged_array[(n+1)/2]
        else:
            median=(merged_array[(n/2)+1]+merged_array[(n/2)])/2.0
            
        return median          
            