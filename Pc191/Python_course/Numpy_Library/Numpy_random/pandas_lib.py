import pandas as pd
import numpy
import matplotlib.pyplot as knk
from sympy.physics.control.control_plots import matplotlib
from sympy.physics.quantum.circuitplot import pyplot

# df = pd.read_csv('data.csv')
#
# print(df.to_string())

mydataset={
    'cars':['audi','toyota','tata','tesla','BMW','Ford'],
    'value':[12,13,11,100,500,342]


}

x=pd.DataFrame(mydataset)
print(x)

print(pd.__version__)
print(numpy.__version__)
print(matplotlib.__version__)

# lis=[1,2,4,5,6]
# a=pd.Series(list)
# print(a)
# print(a[0])
# print(pd.Series(mydataset))
# print(x.loc[0])

x=pd.read_csv("C:/Users/user/Downloads/data.csv")
# print(x.to_string())
# print(x.head())
# print(x.tail())
# print(x.info())
new_dataset=x.dropna()
print(new_dataset)
print(x.duplicated())
knk.plot(x)
knk.show()
