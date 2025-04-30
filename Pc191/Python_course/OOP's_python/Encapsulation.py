# The process of binding data and method under single unit is known as encapsulation

# private,public,protected -visibilty layer


# public
# --------------------
# class Bank:

#     def __init__(self,name,Balance):
#         self.name=name
#         self.Balance=Balance
    

# hexa_acc=Bank('agrani Bank Limited',1000)
# print(hexa_acc.name)
# print(hexa_acc.Balance)
# hexa_acc.Balance=0
# print(hexa_acc.Balance)
        
# private
#------------------------------

# class Bank:
#     def __init__(self,name,Balance):
#         self.name=name
#         self.__Balance=Balance # __Balance is a private data,inaccessible from outside the class
    
#     def get_balance(self):
#         return self.__Balance

#     def withdraw(self,amount):
#         if self.__Balance > amount:
#             self.__Balance=self.__Balance-amount
#         else:
#             print('you don"t have enough money')

#         return f'current balance:{self.__Balance}'
    


# rim_acc=Bank('Islami Bank limited',500)
# print(rim_acc.name)
# print(rim_acc.__Balance)
# rim_acc.__Balance=0
# print(rim_acc.__Balance)
# print(rim_acc.get_balance())
# rim_acc.__Balance=0
# print(rim_acc._Bank__Balance)
# l=rim_acc.withdraw(245)
# print(l)


# protected
#--------------
# class Bank:

#     def __init__(self,name,Balance):
#         self.name=name
#         self._Balance=Balance


# rix__acc=Bank('rupali bank limited',233)
# print(rix__acc._Balance)
# rix__acc._Balance+=1200
# print(rix__acc._Balance)
# print(dir(rix__acc))
