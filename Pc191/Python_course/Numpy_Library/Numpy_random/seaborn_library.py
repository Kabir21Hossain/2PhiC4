from numpy import random
import numpy as np
import seaborn as sns
import matplotlib.pyplot as knk

# sns.displot([1,2,3,4,56])
# knk.show()
# sns.displot([1,2,34,5,6,7,8,9],kind='kde')
# knk.show()

# normal distribution
# sns.displot(random.normal(size=10000),kind='kde')
# sns.displot(random.binomial(n=10,p=0.5,size=101))

# data={
#     'normal':random.normal(size=1000),
#     'binomial':random.binomial(n=10,p=0.5,size=1000)
#
# }
# sns.displot(data,kind='kde')


# x=random.poisson(lam=3,size=10)
# print(x)
#
# sns.displot(x)
# sns.displot(x,kind='kde')

x=random.uniform(size=(2,6))
sns.displot(x,kind='kde')

knk.grid()
knk.show()








