import matplotlib.pyplot as knk
import numpy as np
from numpy import random
from sympy.abc import alpha

name=np.array(['kabir','abir','kair','kaur','kadir','kamir','kafir'])
run=np.array([20,40,50,12,100,23,59])
# expld=random.rand(7)
expld=np.array([0.1,0,0,0.05,0.01,0,0.1])
colours=np.array(['blue','red','yellow','cyan','magenta','brown','chocolate'])
knk.pie(run,labels=name,startangle=230,explode=expld,shadow=True,colors=colours)
knk.legend(loc='right',title='Players')
knk.grid()
knk.show()