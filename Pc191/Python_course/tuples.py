# def fun():
#     return 1,2,4

# t=fun()


# # tuples are also immutable(tuples elements are unchangeable)



# # print(t)
# # if 4 in t:
# #     print("4 exists")
# # else:
# #     print('4 doesnot exists')

# # # for i in t:
# # #     print(i)

# # belongings=1,2,3,4,5
# # print(belongings)
# # print(belongings[0])
# # print(len(belongings))
# # n=belongings[::-1]
# # print(n)

# objects=('chair','table','fan','computer','mobile','telephone','laptop','television','internet')
# print(type(objects))
# print(objects)
# print(objects[-3])
# sub=objects[:]
# print(sub)
# print(objects[3])

# # tuples of tuples

# t=((1,2,4),(3,4,5),(0,0,0))
# # for tu in t:
# #     print(tu)

# # for tu in t:
# #     for a in tu:
# #         print(a)

# print(t[1])

# # tuple of lists

# ordinate=(['fruits','name','apple'],['orange','kabir','jack'])
# print(ordinate)
# ordinate[1][2]='dhaka'
# print(ordinate)

# w3 school tutorial

# mytuple= 24,
mytuple=(1,3,4)
print(mytuple)
print(mytuple[1])
print(type(mytuple))

tu=tuple((1,2,4,5,6,7,8))
print(tu)
print(len(tu))
for x in tu:
    print(x)

for x in reversed(tu):
    print(x)

x='apple','banana','cherry'
y=list(x)
y[1]='kiwi'
x=tuple(y)
# print(x)

y=list(x)
y.append(2342)
x=tuple(y)
print(x)

a=(1,2,3,4,5,6)
b=('kabir','rahim','mustak','asif')
a+=b
print(a)

ordinate=(0,1,0,3,4,2,5,1)

# (x,y,z)=ordinate
# print(x)
# print(y)
# print(z)
(a,b,*c)=ordinate
# print(a)
# print(b)
# print(c)

for x in range(len(ordinate)):
    print(ordinate[x])