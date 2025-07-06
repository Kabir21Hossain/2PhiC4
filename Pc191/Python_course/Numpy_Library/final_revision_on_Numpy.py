import numpy as np
# l=[1,20,39,4,5,67,84,21,34,8,2,90]
# a=np.array(l)
# print('dimension:',a.ndim)
# print('number of  elements:',a.shape)
# print('Data type:',a.dtype)
#
# print(a[5])
# print(a[2]+a[3])
# print(a[:])
# print(a[:-1])
# print(a[::-1])
# a.sort()
# print(a)
#
# if 4 in a:
#     print('exists')
#
# for x in a:
#     print(x,end='  ')
#
# print()
# for x in range(len(a)):
#     print(a[x],end=' ')
# x=a.copy()
# y=a.view()
#
# a[0]=-23
# print()
# print('original:',a)
# print('copy:',x)
# print('view:',y)
# print('base of copy:',x.base)
# print('base of view:',y.base)
#
# for x in range(a.shape[0]):
#     print(a[x],end='  ')
# print()
#
# matrix=a.reshape(2,6)
# print('matrix')
# for x in range(matrix.shape[0]):
#     for y in range(matrix.shape[1]):
#         print(matrix[x,y],end='  ')
#     print()
#
# mat=a.reshape(3,1,-1)
# print('mat3d:')
# print(mat)

# a=np.array([1,2,3])
# b=np.array([2,4,21])
# x=list(a)
# y=list(b)
# for i in range(len(y)):
#     x.append(y[i])
#
# a=np.array(x)
# print(a)

# Multiple dimension
# a=np.array([[1,2,3,4],[5,6,7,8],[9,10,11,12],[13,14,15,16]])
#
# print('dimensional:',a.ndim)
# print('dtype:',a.dtype)
# print('number of elements:',a.shape)
# print(a.shape[0])
#
# print(a[1,3])
# print(a[2,2])
# print(a[1][3])
# print(a[2][2])
#
# print()
# print()
# print()
#
# b=a[:,:]
# print(b)
#
# print(a[1:3,2],end='  ')
# print()
# print(a[2,1:4],end='  ')
# print()
# print(a[1:3,2:4])
# print()
#
# # for x in a:
# #     print(x)
#
# for x in a:
#     for y in x:
#         print(y,end='  ')
#     print()
#
#
a=np.array([45,2,1,24,12,34,1])
# a.sort()
b=np.sort(a)
c=np.where(a==4)
print()

m=np.array([2,3,4,100,1111])
a=np.concatenate((a,m))
print(a)
