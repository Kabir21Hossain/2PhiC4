def timer(fun):
    def inner():
        print('i am working')
        print('i am done')

        print(fun)
        
    
    return inner


# timer()()

@timer
def facto():
    print('i am doing facto')


