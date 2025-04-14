t=int(input())

while t>0 :
    m,n=map(int,input().split())
    matrix=[]
    for _ in range(m):
        row=list(map(int,input().split()))
        matrix.append(row)
    
    transposed=[]

    for col in range(n):
        new_row=[]
        for row in range(m):
            new_row.append(matrix[row][col])
        transposed.append(new_row)
    
    for row in transposed:
        print(*row)



