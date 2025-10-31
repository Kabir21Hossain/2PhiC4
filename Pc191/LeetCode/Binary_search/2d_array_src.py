# m,n=map(int,input().split())
# mat=[[0 for _ in range(n)] for _ in range(m)]
# result=False
# for i in range(m):
#     mat[i]=list(map(int,input().split()))

# target=int(input())

# row=-1
# for i in range(m):
#     if target<=mat[i][n-1]:
#         row=i
#         break
    
# if row!=-1:
#     nums=mat[row]
#     left=0
#     right=n-1
    
#     while left<=right:
#         mid=left+(right-left)//2
        
#         if nums[mid]==target:
#             result=True
#             break
        
#         elif nums[mid]>target:
#             right=mid-1
#         else:
#             left=mid+1

# else:
#     result=False

# print(result)

def src(nums:list[list[int]],target:int)->bool:
    rows,cols=len(nums),len(nums[0])
    
    left=0
    right=rows*cols-1
    
    while left<=right:
        mid=left+(right-left)//2
        
        if nums[mid//cols][mid%cols]==target:
            return True
        elif nums[mid//cols][mid%cols]>target:
            right=mid-1
            
        else:
            left=mid+1
    
    return False

    


    