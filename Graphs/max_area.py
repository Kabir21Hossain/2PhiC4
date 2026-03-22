# def maxArea(grid):
#     m,n=len(grid),len(grid[0])
#
#
#     def dfs(i,j):
#         if i<0 or j<0 or i>=m or j>=n or grid[i][j]==0:
#             return 0
#
#         grid[i][j]=0
#
#         area=1
#         for dx,dy in [(0,-1),(0,1),(1,0),(-1,0)]:
#            area=area+dfs(i+dx,j+dy)
#
#         return area
#     area=0
#
#     for i in range(m):
#         for  j in range(n):
#             if grid[i][j]==1:
#                 area=max(area,dfs(i,j))
#
#     return area
#


def dfs(i,j):
    if i==0 or i==row-1 or j==0 or j==col-1:
        if grid[i][j]=='o':
            return
        grid[i][j]='x'



#
#



