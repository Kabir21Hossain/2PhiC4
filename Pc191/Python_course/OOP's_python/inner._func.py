# function is the first class object

# def call():
#     print('i am calling')
#     def working():
#         print('i am working')
#     return working

# call()()

def double_decker():
    print('stating the double decker')
    def inner_fun():
        print('inside the inner')
        return 3000
    return inner_fun
# print(double_decker())
# print(double_decker()())

def do_something(work):
    print('work started')
    print(work())
    print('work done')


def coding():
    print('i am coding')

do_something(coding)
