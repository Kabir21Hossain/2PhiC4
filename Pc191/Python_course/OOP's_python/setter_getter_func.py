class User:
    def __init__(self,name,money,age):
        self._name=name
        self.__money=money
        self.__age=age
    @property
    def get_age(self):
        return self.__age
    
    @get_age.setter
    def get_age(self,new_age):
        self.__age+=new_age

    @property
    def get_money(self):
        return self.__money
    @get_money.setter
    def get_money(self,amount):
        self.__money+=amount

samsu=User('samsu',2345,21)
# print(samsu.__age)
# print(samsu.__money)
print(samsu._name)

# print(samsu.get_age())
# print(samsu.get_money())
print(samsu.get_age)
print(samsu.get_money)
samsu.get_age=34
samsu.get_money=100
print(samsu.get_age)
print(samsu.get_money)

