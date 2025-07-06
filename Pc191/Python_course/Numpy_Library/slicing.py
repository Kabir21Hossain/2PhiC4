import numpy as np
# accessing and slicing 1 dimensional array

# a=np.array([1,2,3,4,5,6])
# print(a.ndim)
# print(a.shape[0])
# print(len(a))
# print(a[3:])
# print(a[:5])
# print(a[-3:-1])

# 2d slicing

arr=np.array([[1,2,3,4,6,7,3],[5,6,7,8,10,1,3],[9,10,11,12,2,32,1],[13,14,15,16,12,32,1]])
# print(arr[1,1:4])
# print(arr)
# print(arr[0:2,2])

for i in arr:
    for j in i:
        print(j,end="  ")
    print()

print(arr[0:2,1:4])



