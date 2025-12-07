def solve(text:str)->list[str]:
    result=set()
    path=[]
    text=list(text)
    text.sort()
    n=len(text)
    
    def backtrack(index:int):
        if index==n:
            result.add("".join(path))
            return
            
        
        path.append(text[index])
        backtrack(index+1)
        path.pop()
        backtrack(index+1)
    
    backtrack(0)
    return result

print(solve("abca"))
        
        