# def sq(x):
#     return x**2

# print(sq(2))

a=lambda x:x*x
print(a(4))

b=lambda x,y:x+y
print(b(1,3))

numbers=[1,2,3,4,5,6,7,8]
x=map(lambda x:x*x,numbers)
print(x)

s=map(lambda x:x*2,numbers)
print(list(s))

actors=[
    {'name':'sabana','age':32},
    {'name':'shabnur','age':40},
    {'name':'samanta','age':52},
    {'name':'ssamiha','age':47}
    

]
juniors=filter(lambda actor:actor['age']<40,actors)
print(list(juniors))