from collections import Counter

n=int(input())
a=list(map(int,input().split()))

count=Counter(a)
mini =0

for x in count:
    cnt=count[x]
    if cnt >x:
        mini+=cnt-x
    elif cnt <x:
        mini+=cnt

print(mini)




