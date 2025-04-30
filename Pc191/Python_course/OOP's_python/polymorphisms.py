# poly=many
# morph=forms/shape

# class Animal:
#     def __init__(self,name,color):
#         self.name=name
#         self.color=color
    
#     def make_sound(self):
#         print('hi,i am making sound')


# class Cat(Animal):
#     def __init__(self,name,color):
#         super().__init__(name,color)
    
#     def make_sound(self):
#         print('meow meow!')


# class Dog(Animal):
#     def __init__(self,name,color):
#         super().__init__(name,color)
    
#     def make_sound(self):
#        print('gheo geho!!')

# class Horse(Animal):
#     def __init__(self, name, color):
#         super().__init__(name, color)
#     def make_sound(self):
#         print('khuuu khuuuu')



# d=Dog('karl','yellow')
# d.make_sound()

# c=Cat('cucking','reddish')
# c.make_sound()

# knight=Horse('knnight','light silver')
# knight.make_sound()

# animals=[d,c,knight]

# for animal in animals:
#     animal.make_sound()


from math import pi
class Shape:
    def __init__(self,name):
        self.name=name
    
    def area(self):
        pass

class rectangle(Shape):
    def __init__(self,name,length,width):
        self.length=length
        self.width=width
        super().__init__(name)
    
    def area(self):
        return self.length*self.width
    
class triangle(Shape):
    def __init__(self,name,base,height):
        self.base=base
        self.height=height
        super().__init__(name)
    
    def area(self):
        return 0.5*self.base*self.height


class circle(Shape):
    def __init__(self,name,radius):
        super().__init__(name)
        self.radius=radius
    
    def area(self,a=12):
        return pi*self.radius*self.radius
    

t=triangle('triangle',3,1)
print(t.area())
    
r=rectangle('rec',10,20)
print(r.area())

c=circle('circ',2)
print(c.area())
    



