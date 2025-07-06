import numpy as np
# lists=['kabir','rahim','karim','shafiq','tamim','rasim','jabin','ruma','puma','purnima','shabnur','ramima']
# arr=np.array(lists)
# # print(len(arr))
# # print(arr.shape)
# b=np.array([1,2,3,4,5,6])
# a=np.array([-2,-1,30,0,1,89])
# c=np.concatenate((a,arr))
# # m=np.array_split(a,3)
#
# # a.sort()
# d=np.sort(a)
# print(d)
# print(a)


# a=np.array([1,2,98,3,12,4,5,10,6,21])
# arr_filter=[]
#
# for i in a:
#     if i%2==0:
#         arr_filter.append(True)
#     else:
#         arr_filter.append(False)
#
# print(a[arr_filter])

a=np.array([4,5,2,10,23,9,7])
filter_arr=[True,False,True,False,False,False,False]
print(a[filter_arr])

filter_arr=a>20
new_arr=a[filter_arr]
print(new_arr)
