a=int(input())
print(bin(a)[2:])
b=int(input('which bit you want to check:'))
set_unset=a&(1<<b)
if set_unset:
    print('set')
else:
    print('unset')
