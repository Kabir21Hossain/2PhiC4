def subset_iterative(nums:list[int])->list[list[int]]:
    result=[[]]

    for num in nums:
        s=len(result)
        for i in range(s):
            new_set=result[i].copy()
            new_set.append(num)
            result.append(new_set)
    
    return result


print(subset_iterative([1,2,3,4]))
