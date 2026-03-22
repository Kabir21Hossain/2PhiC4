def solution(matrix):
    n=len(matrix)

    if matrix[0][0]==1 or matrix[n-1][n-1]:
        return -1

    dirs=[(0,1),(0,-1),(1,0),(-1,0),(1,1),(-1,-1),(1,-1),(-1,1)]

    def dfs(i,j):
        #base case
        if i==n-1 and j==n-1:
            return 1

        matrix[i][j]=1 #visited

        min_dist=float('inf')

        for dx,dy in dirs:
            ni,nj=i+dx,j+dy

            if 0<=ni<n and 0<=nj<n and matrix[ni][nj]==0:
                dist=dfs(ni,nj)
                min_dist=min(min_dist,dist)

        matrix[i][j]=0

        return 1+min_dist

    res=dfs(0,0)

    return res if res!= float('inf') else -1




if __name__=='__main__':
    grid = [
        [0, 0, 0],
        [1, 1, 0],
        [1, 1, 0]
    ]

    print(solution(grid))





