a=int(input())
count=0
while a!=0:
    count+=1
    a=a&(a-1)

if count==1:
    print('power of 2')
else:
    print('no')