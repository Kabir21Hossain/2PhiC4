a=int(input('Enter a number:'))
b=int(input('Enter your target:'))
c=a^b

count=0
while c!=0:
    count+=1
    c=c&(c-1)

print('minimum bits to flip:',count)