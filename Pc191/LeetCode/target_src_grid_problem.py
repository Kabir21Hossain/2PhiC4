# def find(grid,x,y,t):
#     m,n=len(grid),len(grid[0])
#     visited=[[False for _ in range(n)] for _ in range(m)]
    
#     def dfs(i,j):
#         if not(0<=i<m and 0<=j<n):
#             return False
        
#         if visited[i][j]:
#             return False
#         if grid[i][j]==t:
#             return True
        
#         visited[i][j]=True
        
#         return (dfs(i+1,j) or dfs(i-1,j) or dfs(i,j+1) or dfs(i,j-1))
    
#     return dfs(x,y)


def find(grid,x,y,t):
    m,n=len(grid),len(grid[0])
    visited=[[False for _ in range(n)] for _ in range(m)]
    found=False
    
    def backtrack(i,j):
        nonlocal found
        
        if found:
            return
        
        if not(0<=i<m and 0<=j<n):
            return
        
        if visited[i][j]:
            return
        
        
        if grid[i][j]==t:
            found=True
            return
        
        visited[i][j]=True
        
        backtrack(i+1,j)
        backtrack(i-1,j)
        backtrack(i,j+1)
        backtrack(i,j-1)
    
    backtrack(x,y)
    
    return found


        
        
        
        
        
        
        
        
            