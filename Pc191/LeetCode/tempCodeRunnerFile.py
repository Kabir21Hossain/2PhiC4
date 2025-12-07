from collections import deque

def shortest_path(grid,x,y,t):
    m,n=len(grid),len(grid[0])
    
    if grid[x][y]==t:
        return [(x,y)]
    
    visited=[[False]*n for _ in range(m)]
    parent={}
    q=deque()
    
    q.append((x,y))
    visited[x][y]=True
    
    dirs=[(-1,0),(1,0),(0,-1),(0,1)]
    target_cell=None
    
    while q:
        
        fx,fy=q.popleft()
        
        for dx,dy in dirs:
            nx,ny=fx+dx,fy+dy
            
            if not(0<=nx<m and 0<=ny<n) or visited[nx][ny]:
                continue
            
            visited[nx][ny]==True
            
            if grid[nx][ny]==t:
                target_cell=(nx,ny)
                q.clear()
                break
            
            q.append((nx,ny))
            parent[(nx,ny)]=(fx,fy)
            
    
    if target_cell== None:
        return None
    
    path=[]
    
    cur=target_cell
    
    while cur!=(x,y):
        path.append(cur)
        cur=parent[cur]
    
    path.append(cur)
    path.reverse()
    
    return path

grid=[
    ['A','B','E'],
    ['S','F','C'],
    ['A','D','E']
]

print(shortest_path(grid,0,0,'C'))
           
        