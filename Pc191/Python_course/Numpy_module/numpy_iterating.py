import numpy as np
from numpy import random

# a=np.array([1,2,34,21,45,146])

# for x in a:
#     print(x,end="  ")

# for x in range(len(a)):
#     print(a[x],end='  ')


b=np.array([[1,2,4],[443,2,3]])

# for x in b:
#     for y in x:
#         print(y,end="  ")
#     print()
# l=np.where((b==4))
# print(l)

a=np.array([1,2,3,4,5,6,7,8,9,10])
l=np.where(a==4)
print(l)
x=np.where(a%2==0)
print(x)
c=np.array_split(a,3)
print(c)

# random number

m=random.randint(3)
print(m)
l=random.rand()
print(l)

p=random.randint(100,size=6)
print(p)

