N=int(input())
A=list(map(int,input().split()))

def is_even(l):
    for x in l:
        if x%2==1:
            return False
    return True

d=lambda x:x//2

cnt=0

while is_even(A):
    cnt+=1
    A=list(map(d,A))
print(cnt)

