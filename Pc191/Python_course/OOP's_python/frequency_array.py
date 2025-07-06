N,M=list(map(int,input().split()))
A=list(map(int,input().split()))
l=[0]*(M+1)
for x in A:
    l[x]+=1

for x in range(1,len(l)):
    print(l[x])

