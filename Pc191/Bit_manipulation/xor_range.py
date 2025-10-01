# n=int(input())
"""_summary_
result=1^2^3^4^5^...      ...^n

    """
# solution=0 
# for i in range(n+1):
#     solution^=i
#     print(f'{i}:',solution)
# print(solution)
    

def xor_range(n:int)->int:
    res=0
    if n%4==0:
        res=n
    elif n%4==1:
        res=1
    elif n%4 ==2:
        res=n+1
    else:
        res=0
    return res

l=int(input('left:'))
r=int(input('right:'))
res=xor_range(l-1)^xor_range(r)
print(res)