# https://codeforces.com/problemset/problem/1343/C

t=int(input())
for _ in range(t):
    n=int(input())
    a=list(map(int,input().split()))
    max_sum=0
    max_size=0
    sz=0
    l=[]
    for i in range(n):
        if (len(l) == 0) or (l[-1] >0 and  a[i] <0) or (l[-1]< 0 and a[i]>0):
            l.append(a[i])
        else:
            sz=len(l)
            if sz >= max_size:
                max_size=sz
                max_sum=sum(l)
                l.clear()
            i=i-1
    print(max_sum)
        



   


