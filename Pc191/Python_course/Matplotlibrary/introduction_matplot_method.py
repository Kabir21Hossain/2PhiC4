import matplotlib.pyplot as knk
import numpy as np
# l=np.array([13,3,5,6])
# knk.plot(l,[0,1,2,3],ls='dashed',marker='*',ms=20,mfc='red',mec='magenta')
# knk.title('height and money relationship')
# knk.xlabel("height")
# knk.ylabel('money')
#
# knk.grid()
# knk.show()
# import matplotlib
# print(matplotlib.__version__)

# x=np.array([1,2,3,4,5,6,7,8])
# y=np.array([0,4,1,3,6,7,2,1])
# knk.plot(x,y,'o')
# knk.xlabel("time ")
# knk.ylabel('sorry feelings')
# knk.title('nonsense graph')
# knk.grid()
# knk.show()

# x=np.array([1,2,3,4,5,6,7,8])
# y=np.array([0,4,1,3,6,7,2,1])
# knk.plot(x,y,'+') # o,d,D,h,H,+,*,.,V,|,_,1,2,3,4,s,p,<,>,^
# knk.xlabel("time ")
# knk.ylabel('sorry feelings')
# knk.title('nonsense graph')
# knk.grid()
# knk.show()

# x=np.array([1,2,3,4,5,6,7,8])
# y=np.array([0,4,1,3,6,7,2,1])
# knk.plot(x,y,marker='^') # o,d,D,h,H,+,*,.,V,|,_,1,2,3,4,s,p,<,>,^
# knk.xlabel("time ")
# knk.ylabel('sorry feelings')
# knk.title('nonsense graph')
# knk.grid()
# knk.show()

# x=np.array([1,2,3,4,5,6,7,8])
# y=np.array([0,4,1,3,6,7,2,1])
# knk.plot(x,y,marker='3',ms=20) # o,d,D,h,H,+,*,.,V,|,_,1,2,3,4,s,p,<,>,^
# knk.xlabel("time ")
# knk.ylabel('sorry feelings')
# knk.title('nonsense graph')
# knk.grid()
# knk.show()


# x=np.array([1,2,3,4,5,6,7,8])
# y=np.array([0,4,1,3,6,7,2,1])
# knk.plot(x,y,color='m') # o,d,D,h,H,+,*,.,V,|,_,1,2,3,4,s,p,<,>,^
# knk.xlabel("time ")
# knk.ylabel('sorry feelings')
# knk.title('nonsense graph')
# knk.grid()
# knk.show()

# multiple line
# x1=np.array([1,2,3,4,5,6,7,8])
# y1=np.array([0,2,5,2,7,4,1,9])
# x2=np.array([0,1,2,3,4,5,6,7,8])
# y2=np.array([100,2,45,1,20,42,15,0,3])
# knk.xlabel('value')
# knk.ylabel('age')
# knk.title('age-value-graph',loc='right')
# knk.plot(x1,y1)
# knk.plot(x2,y2)
# knk.grid()
# knk.show()


# multiple plots
# subplot(row,col,plot_no)
# suptitle()
knk.subplot(2,3,1)
y1=np.array([23,42,10,4,13,23,11,4,35])
knk.plot(y1)
knk.xlabel('time')
knk.ylabel('currency')
knk.title('love')

knk.subplot(2,3,2)
y1=np.array([23,42,10,4,13,23,11,4,35])
knk.plot(y1)
knk.xlabel('time')
knk.ylabel('currency')
knk.title('love')

knk.subplot(2,3,3)
y1=np.array([23,42,10,4,13,23,11,4,35])
knk.plot(y1)
knk.xlabel('time')
knk.ylabel('currency')
knk.title('love')

knk.subplot(2,3,4)
y1=np.array([23,42,10,4,13,23,11,4,35])
knk.plot(y1)
knk.xlabel('time')
knk.ylabel('currency')
knk.title('love')

knk.subplot(2,3,5)
y1=np.array([23,42,10,4,13,23,11,4,35])
knk.plot(y1)
knk.xlabel('time')
knk.ylabel('currency')
knk.title('love')

knk.subplot(2,3,6)
y1=np.array([23,42,10,4,13,23,11,4,35])
knk.plot(y1)
knk.xlabel('time')
knk.ylabel('currency')
knk.title('love')

knk.suptitle(' a bunch of love')
knk.grid()
knk.show()




