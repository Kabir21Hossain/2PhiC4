def rat_in_maze(maze:list[list[int]]):
    n=len(maze)
    
    result=[]
    visited=[[False]*n for _ in range(n)]
    
    def is_safe(x,y):
        if 0<=x<n and 0<=y<n and  visited[x][y]==False and  maze[x][y]==1:
            return True
    
    def backtrack(x,y,path):
        if x==n-1 and y==n-1:
            result.append(path)
            return
        
        for move,dx,dy in [('R',0,1),('L',0,-1),('U',-1,0),('D',1,0)]:
            nx,ny=x+dx,y+dy
            
            if is_safe(nx,ny):
                visited[nx][ny]=True
                backtrack(nx,ny,path+move)
                visited[nx][ny]=False
                
    
    if maze[0][0]==0:
        return result
    
    visited[0][0]=True
    backtrack(0,0,"")
    return result

                
        

# Example
maze = [
    [1, 1, 0, 1, 1, 1],
    [0, 1, 1, 1, 0, 1],
    [1, 1, 0, 1, 1, 1],
    [1, 0, 1, 1, 1, 0],
    [1, 1, 1, 0, 1, 1],
    [0, 1, 1, 1, 1, 1]
]


print(rat_in_maze(maze))
