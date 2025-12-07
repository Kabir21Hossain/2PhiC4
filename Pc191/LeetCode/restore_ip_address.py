def restoreIpAddress(s:str)->list[str]:
    res=[]
    path=[]
    def backtrack(index:int):
        #base case
        if len(path)==4:
            if index==len(s):
                res.append(".".join(path))
            return
        
                
        
        
        for lent in range(1,4):
            if index+lent>len(s):
                break
            segment=s[index:index+lent]
            
            if int(segment)>255:
                continue
            if segment[0]=='0' and len(segment)>1:
                continue
            
            path.append(segment)
            backtrack(index+lent)
            path.pop()
    backtrack(0)
    return res

print(restoreIpAddress("101023"))     