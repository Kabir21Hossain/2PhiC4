def find_path(grid, h, k, t):
    m, n = len(grid), len(grid[0])
    visited = [[False] * n for _ in range(m)]
    path = []

    def dfs(i, j):
        # boundary check
        if not (0 <= i < m and 0 <= j < n):
            return False
        
        # visited check
        if visited[i][j]:
            return False

        # add current cell to path
        visited[i][j] = True
        path.append((i, j))

        # target found
        if grid[i][j] == t:
            return True

        # explore 4 directions
        if dfs(i+1, j): return True
        if dfs(i-1, j): return True
        if dfs(i, j+1): return True
        if dfs(i, j-1): return True

        # backtrack
        path.pop()
        return False

    found = dfs(h, k)
    return path if found else []
grid = [
    ['A', 'X', 'X'],
    ['B', 'C', 'D'],
    ['E', 'F', 'G']
]

print(find_path(grid, 0, 0, 'G'))
