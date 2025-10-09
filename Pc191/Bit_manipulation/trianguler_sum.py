num=list(map(int,input().split()))
s=len(num)

# for i in range(len(num)):
#     matrix=[]
#     if len(num)==1:
#         break
    
#     for j in range(len(num)-1):
#         matrix.append((num[j]+num[j+1])%10)
#     num.clear()
#     num.extend(matrix)
#     del matrix

# print(num[0])
    

import math

v=[]
for i in range(s+1):
    v.append(math.comb(s,i))

total=0
for i in range(s):
    total+=v[i]*num[i]

print(total%10)

    
    
        
    

