# def all_sum(num1,num2=0): """ default arguement """
#     return num1+num2

# total= all_sum(23)
# print("Total :",total)

""" default arguement will not play the role if we send arguement while calling"""

# def all_sum(num1,num2=100):
#     return num1+num2

# total= all_sum(23,2)
# print("Total :",total)

""" variable number of arguements """

def present(*num):
    print(num)
    sum=0
    for i in num:
        print(i)
        sum+=i
    print("sum:",sum)

present(2,34,1,4,5)


def present(*num):
    print(num)
    sum=0
    for i in num:
        print(i)
        sum+=i
    print("sum:",sum)

present()


