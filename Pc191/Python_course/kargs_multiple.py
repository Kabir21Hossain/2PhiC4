# def full_name(first,last):
#     # name=first+" "+last
#     name=f"{first} {last}"
#     return name
# take parameters in order
# name=full_name("kabir","ali")
# print(name)

# def full_name(first,last):
#     # name=first+" "+last
#     name=f"{first} {last}"
#     return name

# doesn't require to pass arguements following order
# name=full_name(last="ali",first="kabir")
# print(name)

# kargs= key arguemnets--> that clearly says all the parameters int **kargs create a dictionay

# def famous_name(first,last ,**additional): 
#     name=f" {first} {last}  {additional}"
#     # print(additional['title'])
#     for key,value in additional.items():
#         print(key,value)
#     return name

# name=famous_name(first="sultan",last="suleiman",title="khan",additional="seljuk")
# print(name)


# multiple parameters return
# it returns as tuple
# we can return as other data structure

def sum(a,b):
    return a+b,a-b,a*b,a/b,a**b

everything=sum(2,4)
print(everything)

def sum(a,b):
    return [a+b,a-b,a*b,a/b,a**b]

everything=sum(2,4)
print(everything)
for i in everything:
    print(i)


def holo(*args,**kwargs):
    print(f"{args}")
    for index,item in kwargs.items():
        print(f'{index}:{item}')

    
holo(1,2,4,5,name='kabir',age=34,job='Banker')