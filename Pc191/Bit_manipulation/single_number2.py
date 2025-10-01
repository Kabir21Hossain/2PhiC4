"""
    imagine you have an array of integer numbers. 
    Every number is present thrice except one number.
    you have to find that number.
        
"""
# from collections import defaultdict
# num=[3,1,3,2,3,1,4,1,4,4]

# num_dict=defaultdict(int)

# for x in num:
#     num_dict[x]+=1

# for key,value in num_dict.items():
#     if value==1:
#         print(key)
#         break
    

# from collections import defaultdict
# num=[3,1,3,2,3,1,4,1,4,4]

# num_dict={i:0 for i in num}

# for x in num:
#     num_dict[x]+=1

# for key,value in num_dict.items():
#     if value==1:
#         print(key)
#         break



# num=[2,2,2,3,4,4,4]
# unq=0
# i=0
# num.sort()

# while i<len(num)-1:
#     if num[i]==num[i+1]:
#         i+=3
#     else:
#         unq=num[i]
#         break
#     if i==len(num)-1:
#         unq=num[i]
#         break

# print(unq)


# num=[2,2,2,3,4,4,4]
# unq=0
# i=0
# num.sort()

# while i<len(num)-2:
#     if num[i]==num[i+1]:
#         i+=3
#     else:
#         unq=num[i]
#         break
# else:
#     unq=num[-1]

# print(unq)
    

def single_num(num:list[int])->int:
    result=0
    
    for i in range(32):
        bit_sum=0
        for x in num:
            if (x >> i)&1:
                bit_sum+=1
        if bit_sum%3:
            result+=(1<<i)
    
    return result


        
print(single_num(num=[2,2,2,3,4,4,4]))           
        
            