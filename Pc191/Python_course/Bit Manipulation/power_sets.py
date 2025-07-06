#
# def power_set(arr):
#     result = []
#     n = len(arr)
#
#     # There are 2^n subsets
#     for i in range(2 ** n):
#         subset = []
#         for j in range(n):
#             # Check if jth bit in i is set
#             if (i >> j) & 1:
#                 subset.append(arr[j])
#         result.append(subset)
#
#     return result
#
#
# # Input list
# arr = [2, 6, 7, 1]
# subsets = power_set(arr)
#
# # Print each subset
# for subset in subsets:
#     print(subset)


# s=[7,5,6,2,1]
# n=len(s)
# total_set=1<<n
#
# power_set=[[]]
# for num in range(total_set):
#     subset=[]
#     for i in range(n):
#         if (num>>i)&1:
#             subset.append(s[i])
#
#     power_set.append(subset)
#
# for subset in power_set:
#     print(subset)
#

s='kabir'
n=len(s)
total_set=1<<n

power_set=[]
for num in range(total_set):
    subset=[]
    for i in range(n):
        if (num>>i) &1:
            subset.append(s[i])
    power_set.append(subset)
cnt=0
for subset in power_set:

    print(subset)
    cnt+=1

print(cnt)