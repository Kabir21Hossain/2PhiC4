# dec to binary
from torch.nn.init import ones_


def dec2bin(n):
    s=""
    while n!= 0:
        if n%2==0:
            s+='0'
        else:
            s+='1'
        n//=2
    s=s[::-1]

    return s


# binary to decimal
def bin2dec(s):
    num=0
    pw=1
    n=len(s)
    for i in range(n-1,-1,-1):
        num+=int(s[i])*pw
        pw*=2
    return num


def equalizer(s):
    a=""
    n=len(s)

    for i in range(32-n):
        a+='0'

    a+=s
    return a

def ones_compliment(n):
    s=dec2bin(n)
    s=equalizer(s)
    a=''
    for i in range(len(s)):
        if s[i] == '0':
            a+='1'

        else:
            a+='0'
    return a


def binary_add(a1,b1):
    s1=dec2bin(a1)
    s2=dec2bin(b1)
    s1=equalizer(s1)
    s2=equalizer(s2)
    a=''
    c='0'
    for i in range(31,-1,-1):
        if s1[i]=='1' and s2[i]=='0':
            if c=='0':
                a='1'+a
            else:
                a='0'+a
                c='1'

        elif s1[i]=='1' and s2[i]=='1':
            if c=='0':
                a='0'+a
                c='1'

            else:
                a='1'+a
                c='1'

        elif s1[i]=='0' and s2[i]=='0':
            if c=='0':
                a='0'+a
            else:
                a='1'+a
                c='0'

        else:
            if c=='0':
                a='1'+a
            else:
                a='0'+a
                c='1'
    if c=='1':
        a=c+a
    return bin2dec(a)




def twos_compliment(n):
    s=ones_compliment(n)
    b=bin2dec(s)
    a=binary_add(b,1)
    return dec2bin(a)



def and_operation(a,b):
    s1=dec2bin(a)
    s2=dec2bin(b)
    s1=equalizer(s1)
    s2=equalizer(s2)
    result=''

    for i in range(32):
        bit1=s1[i]
        bit2=s2[i]

        if bit1=='1' and bit2=='1':
            result+='1'
        else:
            result+='0'
    return bin2dec(result),result

def or_operation(a,b):
    s1=dec2bin(a)
    s2=dec2bin(b)
    s1=equalizer(s1)
    s2=equalizer(s2)
    a=''

    for i in range(32):
        if s1[i]=='0' and s2[i]=='0':
            a+='0'
        else:
            a+='1'

    return a


def right_shift(a,b):
    return a//2**b
def left_shift(a,b):
    return a*(2**b)






print(right_shift(13,2))
print(dec2bin(13))
# print(equalizer(dec2bin(5)))
# print(equalizer(dec2bin(8)))
# print(or_operation(5,8))
# print('12-->',dec2bin(12))
# print('5-->',dec2bin(5))
# print(and_operation(12,5))
# print(twos_compliment(7))
# print(binary_add(1001,121))
# print(ones_compliment(10))
# print(equalizer('110101'))
# print(bin2dec('111111'))
# # print(dec2bin(1457))
