import numpy as np
# a=np.array([1,2,3,4])
# print(a)
# a=np.array([[[[1,2],[1,3]]]]) 4 dimensional array-- NUmber of third brackets defines the number of dimension
# print(a.ndim)

a=np.array([1,2,3,4,5,6])
# print(sum(a))
# print(a[3])
# print(a[-2])
# # print(a[2:5])
# for i in a:
#     print(i)

# accessing 2d array

arr=np.array([[1,2,3],[4,5,6],[7,8,9]])
# print(arr[1,2])
print(arr[1][2])
# for x in arr:
#     for e in x:
#         print(e)
#     print('\n')

# for i in range(arr.shape[0]):
#     for j in range(arr.shape[1]):
#         print(arr[i,j])
#
# for x in arr:
#     for elem in x:
#         print(elem,end=' ')
#     print()

# for i in range(arr.shape[0]):
#     print(arr[i,i],end="  ")

n=arr.shape[0]
for i in range(n):
    print(arr[i][n-1-i],end="  ")

su=0

for i in range(n):
    for j in range(n):
        su+=arr[i][j]
print(su)


# sum=0
# for x in a:
#     sum+=x
# print(sum)
#
# b=a[:]
# print(b)
# b=a[::-1]
# print(b)


