from numpy import random
import numpy as np


x=random.choice([1,2,3,4],p=[0.1,0.5,0.4,0],size=10)
print(x)

y=random.choice([98,2,-8,1,10],p=[0.3,0,0.69,0.01,0],size=(2,3))
print(y)
print()
a=np.array([6,5,0,98,2,14,34,23,67,87,9])
random.shuffle(a)
print(a)
print()

b=random.permutation(a)
print(b)