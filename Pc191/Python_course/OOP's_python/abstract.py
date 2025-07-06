# the process of hiding  internal complex implementation from users
"""
it is supposed to:
1. hide the sensitive data
2.hide the complex data
3. define the clear interface 

so, you have to import 'abc' module
abc refers to 'abstract base class'

from abc import ABC,abstractmethod

"""
# from abc import ABC,abstractmethod

# class Animal(ABC):
#     def __init__(self,name,breed):
#         self.name=name
#         self.breed=breed
#     @abstractmethod
#     def sound(self,s):
#         print(f'it"s doing {self.s}')
    
        
# class Dog(Animal):
#     def __init__(self,name,breed):
#         super().__init__(name,breed)
    
#     def sound(self):
#         print(f'it"s doing wooh')
#     def __repr__(self):
#         return f'{self.name}\n {self.breed}'

# d=Dog('max','postu')
# print(d)
# d.sound()


# from abc import ABC,abstractmethod

# class Bank(ABC):
#     def __init__(self,r):
#         self.r=r
    
#     @abstractmethod
#     def loan_interest(self):
#         pass

# class IslamiBank(Bank):
#     def loan_interest(self):
#         print(f'ok babe,,,{self.r}')

# iss=IslamiBank(4.5)
# iss.loan_interest()



"""
what is the definition of abstract class and interfaces in python

remember they both are class- one is partial abstract class(refers to that it may have function implemented or unimplemented and it may have attributes too) where on the other hand interfaces don't have any constructor or any attributes(it will have only unimplemented methods),no interfaces keywords are there.



✅ Key Differences Summary
Feature	                        Abstract Class              	Interface (in Python)
Implementation Allowed	            Yes (methods and variables)  	No (only method signatures)
Constructors	                    Yes	                            No
Use of @abstractmethod	        Optional for some methods	        Required for all methods
Multiple Inheritance	        Limited if using abstract classes	More common with interface-like ABCs
Purpose	Code                    reuse + structure	                Structure only (contract)
"""