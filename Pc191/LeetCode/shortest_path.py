from collections import deque

def shortest_path(grid, x, y, t):
    m, n = len(grid), len(grid[0])

    # If start is target
    if grid[x][y] == t:
        return [(x, y)]

    visited = [[False]*n for _ in range(m)]
    parent = {}

    q = deque()
    q.append((x, y))
    visited[x][y] = True

    dirs = [(-1,0),(1,0),(0,-1),(0,1)]

    target_cell = None

    while q:
        fx, fy = q.popleft()

        for dx, dy in dirs:
            nx, ny = fx + dx, fy + dy

            # 1. bounds check
            if not (0 <= nx < m and 0 <= ny < n):
                continue

            # 2. visited check
            if visited[nx][ny]:
                continue

            # 3. mark visited
            visited[nx][ny] = True
            parent[(nx, ny)] = (fx, fy)

            # 4. check target character
            if grid[nx][ny] == t:
                target_cell = (nx, ny)
                q.clear()     # stop BFS
                break

            q.append((nx, ny))

    # If no target was found
    if target_cell is None:
        return None

    # Reconstruct path
    path = []
    cur = target_cell

    while cur != (x, y):
        path.append(cur)
        cur = parent[cur]

    path.append((x, y))
    path.reverse()

    return path

grid = [
    ['A','B','E'],
    ['S','F','C'],
    ['A','D','E']
]

print(shortest_path(grid, 0, 0, 'C'))
