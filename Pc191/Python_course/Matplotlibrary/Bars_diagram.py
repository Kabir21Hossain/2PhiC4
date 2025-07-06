import matplotlib.pyplot as knk
import numpy as np
from numpy import random
# name=np.array(['kabir','rahim','tamim','mash','musta','anamul'])
# run=np.array([73,56,100,26,78,48])
# knk.bar(name,run,color='purple')
# knk.plot(run,color='green',marker='o',ms=10, mfc='magenta')
# knk.grid()
# knk.show()

# name=np.array(['kabir','rahim','tamim','mash','musta','anamul'])
# run=np.array([73,56,100,26,78,48])
# clr=['blue','red','hotpink','cyan','yellow','white']
# knk.bar(name,run,color=clr,alpha=0.2)
# knk.plot(run,color='green',marker='o',ms=10, mfc='magenta')
# knk.grid()
# knk.show()

name=np.array(['kabir','rahim','tamim','mash','musta','anamul'])
run=np.array([73,56,100,26,78,48])
clr=['blue','red','hotpink','cyan','yellow','white']
knk.barh(name,run,color=clr,alpha=0.2,height=1)
# plot(run,color='green',marker='o',ms=10, mfc='magenta')
knk.grid()
knk.show()
