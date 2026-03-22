from collections import deque

def wallsAndGates(rooms):
    if not rooms:
        return

    rows,cols=len(rooms),len(rooms[0])

    q=deque()

    for i in range(rows):
        for j in range(cols):

            if rooms[i][j]==0:
                q.append((i,j))

    while q:
        r,c=q.popleft()

        for dr,dc in [(-1,0),(1,0),(0,1),(0,-1)]:
            nr=r+dr
            nc=c+dc

            if 0<=nr<rows and 0<=nc<cols and rooms[nr][nc]==float('inf') :
                rooms[nr][nc]=rooms[r][c]+1
                q.append((nr,nc))
