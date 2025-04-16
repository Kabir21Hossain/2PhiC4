# int,float,complex,str,bool
import numpy as np
# arr=np.array([1,2,3,4],dtype='i4')
# print(arr.dtype)
# arr=np.array([1,2,3,4],dtype='i')
# print(arr.dtype)
# arr=np.array([1,2,3,4],dtype='i8')
# print(arr.dtype)
#
# arr=np.array([1.5,2.2,3.4,4.5])
# new=arr.astype(int)
# print(new.dtype)

# copy() and view()

# a=np.array([23,4,52,1,89])
# x=a.copy()
# a[0]=100
# x[0]=34
# print('original:',a)
# print('copy:',x)

# a=np.array([1,32,13,56,2])
# x=a.view()
# a[0]=1000
# y=a.copy()
# # print("original:",a)
# # print('copy:',x)
# # print(x.base)
# # print(y.base)
#
# l=a.shape[0]
# print(l)

# b=np.array([[1,2,3,4,5,6,7],[8,9,10,11,12,13,14],[15,16,17,18,19,20,21]])
# print(b.shape)
# b.reshape(7,3)
# print(b.shape)
# print(b)

x=np.array([1,2,4,5,6,7,8,10,11,12,13,12,4,1,3,-9,4-2,24])
# a=x.reshape(2,9)
# print(a)
# print(a.base)
# b=x.reshape(2,3,3)
# print(b)
y=x.reshape(2,1,-1)
print(y)







