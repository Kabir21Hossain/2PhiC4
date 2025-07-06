
# def power_set(arr,subset,index):
#     if index==len(arr):
#         print(subset)
#         return
#     subset.append(arr[index])
#     power_set(arr,subset,index+1)
#     subset.pop()
#     power_set(arr,subset,index+1)
#
#
# if __name__=='__main__':
#     s=[5,6,3,1]
#     power_set(s,[],0)
#



#---------------------

def power_set(arr,index,subset,result):
    if index == len(arr):
        result.append(subset.copy())
        return
    power_set(arr,index+1,subset,result)
    subset.append(arr[index])
    power_set(arr,index+1,subset,result)
    subset.pop()

arr=[2,6,7,1]
result=[]
power_set(arr,0,[],result)

for subset in result:
    print(subset)
