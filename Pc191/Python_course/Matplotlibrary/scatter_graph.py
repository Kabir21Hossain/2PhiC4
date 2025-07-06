import matplotlib.pyplot as knk
import numpy as np
# x=np.array([0,1,2,3,4,5,6])
# y=np.array([2,4,90,1,20,11,34])
# colors=['r','b','g','b','m','c','w']
# shades=[0.1,0.5,0.3,0.8,0.7,0.2,0.6]
# sizes=[100,20,300,110,200,250,12]
# knk.scatter(x,y,color=colors,alpha=shades,sizes=sizes)
# knk.xlabel('age')
# knk.ylabel('weight')
# knk.title('age-weight',loc='right')
# knk.grid()
# knk.show()

# x=np.array([0,1,2,3,4,5,6])
# y=np.array([20,44,50,10,25,100,304])
# # colors=['r','b','g','b','m','c','w']
# shades=[0.1,0.5,0.3,0.8,0.7,0.2,0.6]
# sizes=[100,20,300,110,200,250,12]
#
# x1=np.array([0,1,2,3,4,5,6])
# y1=np.array([2,4,90,1,20,11,34])
# # colors1=['y','b','g','b','m','c','w']
# shades1=[0.1,0.5,0.3,0.8,0.7,0.2,0.6]
# sizes1=[100,200,300,110,299,250,400]
# knk.scatter(x1,y1,alpha=shades1,sizes=sizes1)
# knk.scatter(x,y,alpha=shades,sizes=sizes)
# knk.xlabel('age')
# knk.ylabel('weight')
# knk.title('age-weight',loc='right')
# knk.legend()
# knk.grid()
# knk.show()

from numpy import random

x=random.randint(100,size=100)
y=random.randint(500,size=100)
alphas=random.rand(100)
size=random.randint(600,size=100)
colors=random.randint(100,size=100)
knk.scatter(x,y,alpha=alphas,sizes=size,c=colors)
knk.grid()
knk.show()

