def solveNQueens(n: int):
    result=[]
    board=[['.']*n for _ in range(n)]
    
    col_set=set()
    diag=set()
    anti_diag=set()
    
    def backtrack(row):
        if row==n:
            solution=["".join(r) for r in board]
            result.append(solution)
            return
        
        for col in range(n):
            if col in col_set or row+col in anti_diag or row-col in diag:
                continue
            
            board[row][col]='Q'
            col_set.add(col)
            diag.add(row-col)
            anti_diag.add(row+col)
            
            backtrack(row+1)
            
            board[row][col]='.'
            col_set.remove(col)
            diag.remove(row-col)
            anti_diag.remove(row+col)
            
    backtrack(0)
    
    return result
  

# Example
print(solveNQueens(4))
