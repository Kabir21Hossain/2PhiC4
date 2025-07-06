from numpy import random
import numpy as np
# a=random.random()
# print(a)
#
# b=random.randint(5)
# print(b)
# c=random.rand()
# print(c)
#
# x=random.randint(100,size=10)
# print(x)
# print()
#
# y=random.randint(12,size=(3,4))
# print(y)

#random.random()==#random.rand() ---> same functions
#random.randint()


# print(random.random(6)) # creating 1d array
# print(random.random((6,4))) # creating 2d array
# print()
# print(random.random(size=(2,3))) # this is same as the previous actions
# print()
# a=random.randint(100)
# print(a)
#
# a=random.randint(100,size=10) # create 1d array of random numbers
# print(a)
# print()
# b=random.randint(55,size=(2,4)) # create 2d array where seed=55
# print(b)
# print()

m=random.choice([1,3,4,9,8,2])
print(m)
lists=np.array([1,2,44,5,56,134,12,111])
a=random.choice(lists)
print(a)
print()
arr=random.choice(lists,size=(2,3))
print(arr)














