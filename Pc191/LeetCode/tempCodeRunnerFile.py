m,n=map(int,input().split())
mat=[list(map(int,input().split())) for _ in range(m)]
v=[[] for _ in range(m)]

for i in range(m):
    for j in range(n):
        k=i+j
        v[k].append(mat[i][j])


result=[]

flag=0

for x in v:
    if flag%2==0:
        for l in reversed(x):
            result.append(l)
    else:
        result.extend(x)
        
    flag+=1

print(v)
print()
print()  
print(result)