def solve_knight(n:int):
    board = [[-1]*n for _ in range(n)]

    # 8 possible knight moves
    moves = [
        (2, 1), (1, 2), (-1, 2), (-2, 1),
        (-2, -1), (-1, -2), (1, -2), (2, -1)
    ]

    board[0][0] = 0  # starting position

    def backtrack(x, y, move_no):
        # base case
        if move_no == n*n:
            return True

        # try all 8 knight moves
        for dx, dy in moves:
            nx, ny = x + dx, y + dy

            # skip invalid
            if not (0 <= nx < n and 0 <= ny < n) or board[nx][ny] != -1:
                continue

            board[nx][ny] = move_no

            if backtrack(nx, ny, move_no + 1):
                return True

            board[nx][ny] = -1   # undo (backtrack)

        return False

    backtrack(0, 0, 1)

    for row in board:
        print(row)


solve_knight(8)
