def dec2bin(n:int):
    binary=''

    while n!=0:
        if n%2 == 0:
            binary='0'+binary
        else:
            binary='1'+binary

        n//=2

    return binary

# print(dec2bin(15))
# print(dec2bin(17))



def bin2dec(binary:str):
    deci=0
    pw=1
    n=len(binary)
    for i in range(n-1,-1,-1):
        if binary[i]=='1':
            deci+=pw
        pw*=2
    return deci

# print(bin2dec('11110011'))

def equalizer(x:str,y:str):
    n1=len(x)
    n2=len(y)
    res=abs(n1-n2)
    if n1 > n2:
        for i in range(res):
            y='0'+y
    else:
        for i in range(res):
            x='0'+x
    return x,y
# print(equalizer('1011','11100110011'))

def and_operation(a:int,b:int):
    x=dec2bin(a)
    y=dec2bin(b)
    x,y=equalizer(x,y)
    result=''

    for i in range(len(x)):
        bit1=x[i]
        bit2=y[i]
        if bit1=='1' and bit2=='1':
            result+='1'
        else:
            result+='0'
    return result

# print(equalizer(dec2bin(7),dec2bin(16)))
# print(and_operation(7,16))

def or_operation(a:int,b:int):
    x=dec2bin(a)
    y=dec2bin(b)
    x,y=equalizer(x,y)

    print(x)
    print(y)
    result=''
    for i in range(len(x)):
        bit1=x[i]
        bit2=y[i]

        if bit1=='1' or bit2=='1':
            result+='1'
        else:
            result+='0'
    return result

# print(or_operation(19,3))

def ones_compliment(a:int):
    x=dec2bin(a)
    result=''
    print(x)

    for bit in x:
        if bit=='0':
            result+='1'
        else:
            result+='0'
    return result


print(ones_compliment(8))






