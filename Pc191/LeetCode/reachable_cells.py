def cells(grid,h,k):
    m,n=len(grid),len(grid[0])
    visited=[[False for _ in range(n)] for _ in range(m)]
    
    def dfs(grid,x,y):
        if not(0<=x<m and 0<=y<n):
            return
        
        if visited[x][y]:
            return
        
        if grid[x][y]=='#':
            return
        
        print(f'({x},{y})')
        
        visited[x][y]=True
        
        dfs(grid,x+1,y)
        dfs(grid,x-1,y)
        dfs(grid,x,y+1)
        dfs(grid,x,y-1)
        
        
    dfs(grid,h,k)
    
    
    
grid = [
    ['.', '.', '#', '.', '.'],
    ['.', '#', '.', '.', '#'],
    ['.', '#', '.', '.', '.'],
    ['.', '.', '.', '#', '.'],
    ['.', '#', '.', '.', '#']
]

cells(grid,0,0)



        
        
            