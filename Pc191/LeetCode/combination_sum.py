# class Solution:
#     def combinationSum(self,candidates:list[int],target:int)->list[list[int]]:
#         result:list[list[int]]=[]
#         sol=[]
        
#         n=len(candidates)
        
#         def backtrack(i:int,cur_sum:int):
#             if cur_sum==target:
#                 result.apppend(sol.copy())
#                 return
#             if cur_sum>target or i==n:
#                 return 
            
#             sol.append(candidates[i])
#             backtrack(i,cur_sum+candidates[i])
#             sol.pop()
#             backtrack(i+1,cur_sum)
        
#         backtrack(0,0)
#         return result


# def combination_sum(nums:list[int],target:int)->list[list[int]]:
#     res=[]
#     sol=[]
#     n=len(nums)
    
#     def backtrack(index:int,cur_sum:int):
#         if cur_sum==target:
#             res.append(sol.copy())
#             return
        
#         if cur_sum> target or index >=n:
#             return
        
#         sol.append(nums[index])
#         backtrack(index,cur_sum+nums[index])
#         sol.pop()
#         backtrack(index+1,cur_sum)
    
#     backtrack(0,0)
#     return res

# nums=[2,2,3,5]
# print(combination_sum(nums,7))



class Solution:
    def combinationSum(self,candidates:list[int],target:int)->list[list[int]]:
        result:list[list[int]]=[]
        sol=[]
        
        n=len(candidates)
        
        def backtrack(i:int,cur_sum:int):
            if cur_sum==target:
                result.append(sol.copy())
                return
            if cur_sum>target or i==n:
                return 
            
            sol.append(candidates[i])
            backtrack(i,cur_sum+candidates[i])
            sol.pop()
            backtrack(i+1,cur_sum)
        
        backtrack(0,0)
        return result
    

nums=[2,2,3,5]

x=Solution()
print(x.combinationSum(nums,7))