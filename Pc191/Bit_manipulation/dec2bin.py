# def d2b(n:int)->str:
#     res=""
#     if n==0:
#         return '0'
#     while n!=0:
#         if n%2==1:
#             res='1'+res
#         else:
#             res='0'+res
#         n>>=1
#     return res


def d2b(n:int)->str:
    res=""
    if n==0:
        return '0'
    while n!=0:
        if n&1==1:
            res='1'+res
        else:
            res='0'+res
        n>>=1
    return res


if __name__=='__main__':
    print(d2b(10))
    print(d2b(0))
    print(d2b(15))
    
    
    
        
            
    