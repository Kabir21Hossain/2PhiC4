import math
def timer(fun):
    def inner(*args,**kwargs):
        print('i am working')
        print('i am done')

        # print(fun)
        fun(*args,**kwargs)
        
    
    return inner


# timer()()

@timer
def facto(n):
    print('i am doing facto')
    print(math.factorial(n))

facto(5)

