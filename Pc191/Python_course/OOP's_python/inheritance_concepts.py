# base class,parent class


class BaseClass:
    pass


# child class,derived class

class DerivedClass(BaseClass):
    pass

"""
1.simple inheritance: parent class----> child class (device--->phone) (Device--->laptop)

2.Multilevel inheritance: Grandpa---> parent--->child(vehical---> Bus----> AC bus)

3. Multiple Inheritance

4. Hybrid
"""

# class Animal:

#     def __init__(self,name,category,origin,color,breed):
#         self.name=name
#         self.category=category
#         self.origin=origin
#         self.color=color
#         self.breed=breed
#     def __repr__(self):
#         return f'{self.name}\n{self.category}\n{self.origin}\n{self.color}\n{self.breed}'
    


# class Dog(Animal):

#     def __init__(self,name,category,origin,color,breed,age):
#         self.age=age
#         super().__init__(name,category,origin,color,breed)
    
#     def __repr__(self):
#         print(f'{self.age}')
#         return super().__repr__()
    
    

# class Cat(Animal):
#     def __init__(self,name,category,origin,color,breed,age):
#         super().__init__(name,category,origin,color,breed)
#         self.age=age
    
#     def __repr__(self):
#         print(f'{self.age}')
#         return super().__repr__()

    
    
# cat=Cat('robin','cat','australian','white','max',23)
# print(cat)


class Account:

    def __init__(self,name,balance):
        self.name=name
        self.balance=balance

    def show_balance(self):
        print(f'{self.name} has ${self.balance}')
    

class SavingsAccount(Account):
    def add_interset(self):
        self.balance*=1.5


acc=SavingsAccount('alice',1000)
acc.add_interset()
acc.show_balance()
    