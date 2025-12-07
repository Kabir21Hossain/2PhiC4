def generateParenthesis(n:int)->list[str]:
    result=[]
    sol=[]
    open=close=0
    
    
    def backtrack(open,close):
        if open == n and close ==n:
            result.append("".join(sol))
            return
        if open <n:
            sol.append('(')
            backtrack(open+1,close)
            sol.pop()
        if close <open:
            sol.append(')')
            backtrack(open,close+1)
            sol.pop()
    
    backtrack(0,0)
    return result

print(generateParenthesis(3))
            
        
    
        
            
            
            