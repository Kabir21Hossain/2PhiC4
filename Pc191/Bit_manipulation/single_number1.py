from collections import defaultdict
# num=[4,4,3,1,2,1,3,5,5]

# a=0

# for i in range(len(num)):
#     a=a^num[i]

# print(a)

num=[4,3,4,2,1,3,5,1,5]
num_dict=defaultdict(int)

for x in num:
    num_dict[x]+=1

for keys,values in num_dict.items():
    if values==1:
        print(keys)
        break

