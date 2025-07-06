# def dec2bin(n):
#     binary=''
#     a=n
#     while n!=0:
#         if n%2==0:
#             binary='0'+binary
#         else:
#             binary='1'+binary
#         n>>=1
#     print(bin(a)[2:])
#     print(binary)

# dec2bin(100)

# def bin2dec(binary):
#     num=0
#     n=len(binary)
#     pw=1
#     for i in range((n-1),-1,-1):
#         if binary[i]=='1':
#            num+=pw

#         pw*=2
    
#     print(num)


# bin2dec('11001')
# print(int("11001",2))

# a=int(input('a:'))
# b=int(input('b:'))
# a=a^b
# b=a^b
# a=a^b
# print('a:',a)
# print('b:',b)
        
# a=int(input())
# print(bin(a)[2:])
# bit=int(input())

# if a & (1<<bit):
#     print('set')
# else:
#     print('unset')


# a=int(input())
# print(bin(a)[2:])
# bit=int(input())
# a=a|(1<<bit)
# print(bin(a)[2:])

# a=a&(~(1<<bit))
# print(bin(a)[2:])
# a=a^(1<<bit)
# print(bin(a)[2:])
# print(bin(49)[2:])
# a=a&(a-1)
# print(bin(a)[2:])

# for i in range(47,100):
#     print('i:',i,bin(i)[2:])


# cnt=0

# while a!=0:
#     cnt+=1
#     a=a&(a-1)

# if cnt==1:
#     print('power of 2')
# else:
#     print('not power of 2')

# if a&1==0:
#     print('even')
# else:
#     print('odd')

# backtracking

def power_set(arr,subset,index):
    if index == len(arr):
        print(subset)
        return
    subset.append(arr[index])
    power_set(arr,subset,index+1)
    subset.pop()
    power_set(arr,subset,index+1)


if __name__=='__main__':
    arr=[3,6,2,9,5]
    power_set(arr,[],0)

