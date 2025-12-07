def sol(n:int)->list[str]:
    result=[]
    path=[]
    
    def backtrack(index:int):
        if n==index:
            result.append("".join(path))
            return
        
        path.append('0')
        backtrack(index+1)
        path.pop()
        
        if len(path)==0 or path[-1]=='0':
            path.append('1')
            backtrack(index+1)
            path.pop()
            
    
    backtrack(0)
    return result


