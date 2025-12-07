def sol(n:int,k:int)->list[list[int]]:
    result=[]
    path=[]
    
    def backtrack(index:int):
        if len(path)==k:
            result.append(path.copy())
            return
        
        for i in range(index,n+1):
            path.append(i)
            backtrack(i+1)
            path.pop()
            
        
    backtrack(1)
    return result

print(sol(3,2))