from typing import List
def merge_sort(arr:list[int])->list[int]:
    if len(arr)<=1:
        return arr
    
    mid=len(arr)//2
    a=merge_sort(arr[:mid])
    b=merge_sort(arr[mid:])
    
    left=right=0
    m=len(a)
    n=len(b)
    
    res=[]
    
    while left < m and right < n:
        if a[left]<b[right]:
            res.append(a[left])
            left+=1
        else:
            res.append(b[right])
            right+=1
    
    if left<m:
        res.extend(a[left:])
    if right<n:
        res.extend(b[right:])
    
    return res

            
            
        

if __name__ == "__main__":
    arr = [9, 2, 0, 67, -2, 11, 5, 45]
    sorted_arr = merge_sort(arr)
    print(sorted_arr)
