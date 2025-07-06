n,m=map(int,input().split())
a=list(map(int,input().split()))
visited=[False]*100001
distinct_cnt=[0]*(n+1)

cnt=0
for i in range(n-1,-1,-1):
    if not visited[a[i]]:
        visited[a[i]]=True
        cnt+=1
        distinct_cnt[i+1]=cnt

    else:
        distinct_cnt[i+1]=cnt


for i in range(m):
    query=int(input())
    print(distinct_cnt[query])




