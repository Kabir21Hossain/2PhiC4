t=int(input())
cnt=0
for _ in range(t):
    
    row=list(map(int,input().split()))
    c=row.count(1)
    if c>=2:
        cnt=cnt+1

print(cnt)

    
    
