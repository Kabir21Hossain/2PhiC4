"""
operator overloading
__add__
__mul__
__sub__
__truediv__
__floordiv__
__gt__
__lt__
__eq__
__mod__

"""





class Person:
    def __init__(self,name,height,weight,age):
        self.name=name
        self.height=height
        self.weight=weight
        self.age=age

    def eat(self,meat,potato,rice,biriyani):
        print(f'i eat {meat,potato,rice,biriyani}')
    
class Cricketer(Person):
    def __init__(self,name,height,weight,age):
        super().__init__(name,height,weight,age)
    # function overriding
    def eat(self,vegetables):
        print(f'i eat {vegetables}')
    
    def __add__(self,other):
        return self.age+other.age
    def __mul__(self,other):
        return self.height*other.height
    def __subtract__(self,other):
        return self.age-other.age
    def __gt__(self,other):
        return self.age>other.age
    def __lt__(self,other):
        return self.age<other.age
    
    
    

sakib=Cricketer('sakib',5.8,67,35)
musi=Cricketer('musi',5.5,70,39)

sakib.eat('gouard')
musi.eat('spinach')

print(sakib+musi)
print(sakib>musi)
print(sakib<musi)
print(sakib*musi)
# print(sakib-musi)






