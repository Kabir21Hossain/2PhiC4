from typing import List
class Solution:
    def exist(self, board: List[List[str]], word: str) -> bool:
        m, n = len(board), len(board[0])
        visited = [[False] * n for _ in range(m)]
        
        def dfs(i, j, idx):
            if idx == len(word):
                return True
            if (i < 0 or i >= m or j < 0 or j >= n or 
                visited[i][j] or board[i][j] != word[idx]):
                return False
            
            visited[i][j] = True
            
            for di, dj in [(0,1),(1,0),(0,-1),(-1,0)]:
                if dfs(i + di, j + dj, idx + 1):
                    return True
            visited[i][j] = False  # backtrack
            return False
        
        for i in range(m):
            for j in range(n):
                if board[i][j] == word[0] and dfs(i, j, 0):
                    return True
        return False