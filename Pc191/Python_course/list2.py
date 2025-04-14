#list as stack
# stack=[3,4,5,6]
# stack.append(4)
# stack.append(45)
# stack.append(100)
# stack.append(200)
# print(stack)
# print(stack.pop())

# list as queue

from collections import deque
queue=deque(["kabir","rahim","shafiq","anand","reza"])
print(queue)
queue.append("raja")
queue.append("rajendra")
print(queue)

print(queue.popleft())

# list comprehension

# number=[1,2,3,4,5,6,7,8,9,10]

# for n in number:
#     if n%2==0:
#         print(n)

# del number[0]
# print(number)
# del number
# print(number)

numbers=[45,87,96,65,43,85,14,26,61,90,70]
odds=[]
for num in numbers:
    if num%2==1 and num%5==0:
        odds.append(num)

print(odds)

odd_nums=[num for num in numbers if num%2 ==1 and num%5==0]
print(odd_nums)

squares= [x**2 for x in range(6)]
print(squares)

players=['sakib','mushfik','liton']
age=[32,14,19]
age_comb=[]
for p in players:
    for a in age:
       age_comb.append([p,a])

print(age_comb)


players=['sakib','mushfik','liton']
ages=[32,14,19]

age_comb=[(player,age) for player in players for age in ages]