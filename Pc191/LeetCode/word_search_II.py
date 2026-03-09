from typing import List

class TrieNode:
    def __init__(self):
        self.children = {}
        self.is_word = False
        self.word = None  # Store the full word here for easy retrieval

class Solution:
    def findWords(self, board: List[List[str]], words: List[str]) -> List[str]:
        if not board or not board[0]:
            return []
        
        m, n = len(board), len(board[0])
        
        # Step 1: Build Trie
        root = TrieNode()
        for word in words:
            node = root
            for char in word:
                if char not in node.children:
                    node.children[char] = TrieNode()
                node = node.children[char]
            node.is_word = True
            node.word = word  # Store the word at the end node
        
        # Step 2: DFS function
        result = []
        directions = [(0, 1), (1, 0), (0, -1), (-1, 0)]
        
        def dfs(i: int, j: int, node: TrieNode):
            char = board[i][j]
            if char == '#' or char not in node.children:
                return
            
            next_node = node.children[char]
            
            # If we found a complete word
            if next_node.is_word:
                result.append(next_node.word)
                next_node.is_word = False  # Prevent duplicates if same word appears multiple times
            
            # Mark as visited
            board[i][j] = '#'
            
            # Explore neighbors
            for di, dj in directions:
                ni, nj = i + di, j + dj
                if 0 <= ni < m and 0 <= nj < n:
                    dfs(ni, nj, next_node)
            
            # Backtrack: restore cell
            board[i][j] = char
        
        # Step 3: Start DFS from every cell
        for i in range(m):
            for j in range(n):
                dfs(i, j, root)
        
        return result
                                

board = [
  ['o','a','a','n'],
  ['e','t','a','e'],
  ['i','h','k','r'],
  ['i','f','l','v']
]
words = ["oath","pea","eat","rain"]
# Output: ["oath", "eat"]  

s=Solution()
print(s.findWords(board,words))
          
        
        