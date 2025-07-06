# https://codeforces.com/problemset/problem/1343/C

t=int(input())
for _ in range(t):
    n=int(input())
    a=list(map(int,input().split()))
    max_sum=0
    sz=1
    s=a[0]
    max_size=0

    for i in range(n-1):
        if a[i]>0 != a[i+1]>0:
            s+=a[i+1]
            sz+=1
        else:
             if sz >= max_size:
                    if sz> max_size:
                     max_sum=s
                     max_size=sz

                    else:
                        max_sum=max(max_sum,s)
    print(max_sum)
                 






   


