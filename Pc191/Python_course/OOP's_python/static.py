#static attribute= class attribute
# instance attribute = any attribute defined inside constructor
# class method can be defined using @clasmethod decorator
# instance method= any method you define 
# static method can be defined using @staticmethod decorator


class Animal:
    name='animal' # static attribute// class attribute


    def __init__(self,color):
        self.color=color# instance attribute
        print('I love you')
    @classmethod
    def make_sound(self,sound): # instance method
        print(f'{sound}')
    
    @staticmethod
    def eat(f1,f2):
        print(f'i eat{f1,f2}')
    

a=Animal('red')
b=Animal('white')
# a.name='goat'
# print(a.name)
# b.name='cow'
# print(a.name)
# print(b.name)
a.make_sound('bheh bheh')
# Animal.make_sound('a','geho geho')
a.make_sound('wowo')
Animal.make_sound('heheh')
a.eat('pata','grass')
Animal.eat('poka','insect')
