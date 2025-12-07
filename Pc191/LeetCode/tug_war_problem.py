# def tug_of_war(arr):
#     n = len(arr)
#     total_sum = sum(arr)
#     target_size = n // 2

#     best_diff = float("inf")
#     best_subset = None

#     def backtrack(i, subset, current_sum):
#         nonlocal best_diff, best_subset

#         # stop if we already filled required subset size
#         if len(subset) == target_size:
#             other_sum = total_sum - current_sum
#             diff = abs(current_sum - other_sum)

#             if diff < best_diff:
#                 best_diff = diff
#                 best_subset = subset.copy()

#             return

#         if i >= n:
#             return

#         # include arr[i]
#         subset.append(arr[i])
#         backtrack(i + 1, subset, current_sum + arr[i])
#         subset.pop()

#         # exclude arr[i]
#         backtrack(i + 1, subset, current_sum)

#     backtrack(0, [], 0)

#     # Correct way to build subset2
#     subset1 = best_subset
#     used = subset1.copy()
#     subset2 = []

#     for x in arr:
#         if x in used:
#             used.remove(x)
#         else:
#             subset2.append(x)

#     return subset1, subset2, best_diff


# # Test
# arr = [1,2, 3, 4,5]
# subset1, subset2, diff = tug_of_war(arr)
# print("Subset 1:", subset1)
# print("Subset 2:", subset2)
# print("Minimum Difference:", diff)


def tugOfWar(arr):
    n=len(arr)
    total_sum=sum(arr)
    mid=n//2
    
    best_subset=None
    min_diff=float('inf')
    
    def backtrack(i,subset,subset_sum):
        
        nonlocal min_diff,mid,total_sum,best_subset
        
        if len(subset)==mid:
            other_sum=total_sum-subset_sum
            diff=abs(subset_sum-other_sum)
            
            if diff<min_diff:
                min_diff=diff
                best_subset=subset.copy()
            
            return
        
        if i>=n:
            return
        
        subset.append(arr[i])
        backtrack(i+1,subset,subset_sum+arr[i])
        subset.pop()
        
        backtrack(i+1,subset,subset_sum)
        
    
    backtrack(0,[],0)
    
    subset1=best_subset
    used=subset1.copy()
    
    subset2=[]
    
    for x in arr:
        if x not in used:
            subset2.append(x)
    
    return subset1,subset2,min_diff


arr=[1,2,3,4,5]
print(tugOfWar(arr))    
    
            
                
    
    
    