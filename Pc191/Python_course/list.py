# list,array,collection -let's say they are same
# index =           0   1   2   3   4   5   6   7   8
# numbers=[34, 56, 2, 90, 13, 24, 56, 24, 76]

# index =           -9  -8  -7 -6  -5  -4  -3 -2  -1

# print("4th index:",numbers[4])
# print("-3th index:",numbers[-3])
# print(numbers[2:6]) # start from start index and end before the end index
# print(numbers[:4])
# print(numbers[5:])
# print(numbers[1:7:1])
# print(numbers[1:8:2])
# print(numbers[::-1]) # shortcut to reverse an list
# print(numbers[::-1])
# print(numbers[7:2:-1])
# print(numbers[7:2:-2])
# print(numbers[:]) # shortcut to copy a list
# print(numbers[-4:-8:-1])




# print(numbers)

# for value in numbers:
#     print(value)

# for index, value in enumerate(numbers):
#     print(f"index:{index} value:{value}")


# i=0
# while i<len(numbers):
#     print(numbers[i])
#     i+=1

# i=len(numbers)-1

# while i>=0:
#     print(numbers[i])
#     i-=1


# for item in reversed(numbers):
#     print(item)



# numbers=[34, 56, 2, 90, 13, 24, 56, 24, 76]

# age=[]
# for n in numbers:
#     age.append(n)

# print(age)


# age=numbers[:]
# print(age)

# age.append(34)
# age.append(100)
# age.append(200)
# age.append(700)
# age.append(234)
# age.append(100)
# age.append(13)
# print(age)

# # last=age.pop()
# # print(age)
# # print(last)
# if 76 in age:
#     age.remove(76)
# print(age)

# if 1000 in age:
#     age.remove(1000)
# print(age)

# age.remove(2000)
# print(age)
# print(len(age))
# age.insert(8,1000000)
# age.insert(0,0)
# age.insert(len(age),0)
# print(age)

# age=numbers[::-1]
# print(age)
# age.clear()
# print("printing age:",age)

# player=[2,2,1,4,5,1,2,3,5,4,4,12,1,4,3,2,5]
# n=player.count(2)
# print(n)
# print(player.index(12))
# player.sort()
# print(player)
# player.reverse()
# print(player)
# l=[]
# l=player.copy()
# print("printing l:",l)

""" Methods

list.append(23) // add 23 at the end of the list
list.remove(12) // if 12 exist,delete it or show error
a=list.pop()//delete and return last element
a=list.pop(index=5) // delete the item at 4th index and return it
list.clear()
list.sort()
list.reverse()
list2=list.copy()
n=list.count(34) // how many times 34 is there
n=len(list)
s=sum(list)
list2=list[:] //copy
list.insert(index=2,value=24)
list.index(34[,start[,end]])



 """