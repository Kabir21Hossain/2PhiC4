def sol(s1:str,s2:str):
    def lcs(i,j):
        if i==len(s1) or j==len(s2):
            return 0
        
        if s1[i]==s2[j]:
            return 1+lcs(i+1,j+1)
        else:
            return max(lcs(i,j+1),lcs(i+1,j))
    
    return lcs(0,0)

print(sol('abx','ayb'))